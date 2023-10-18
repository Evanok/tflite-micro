// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PREPROCESSORSCHEMA_TFLM_CODEGEN_PREPROCESSOR_H_
#define FLATBUFFERS_GENERATED_PREPROCESSORSCHEMA_TFLM_CODEGEN_PREPROCESSOR_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

namespace tflm {
namespace codegen {
namespace preprocessor {

struct Data;
struct DataBuilder;
struct DataT;

struct DataT : public ::flatbuffers::NativeTable {
  typedef Data TableType;
  std::string input_model_path{};
};

struct Data FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef DataT NativeTableType;
  typedef DataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_INPUT_MODEL_PATH = 4
  };
  const ::flatbuffers::String *input_model_path() const {
    return GetPointer<const ::flatbuffers::String *>(VT_INPUT_MODEL_PATH);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_INPUT_MODEL_PATH) &&
           verifier.VerifyString(input_model_path()) &&
           verifier.EndTable();
  }
  DataT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(DataT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<Data> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const DataT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct DataBuilder {
  typedef Data Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_input_model_path(::flatbuffers::Offset<::flatbuffers::String> input_model_path) {
    fbb_.AddOffset(Data::VT_INPUT_MODEL_PATH, input_model_path);
  }
  explicit DataBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Data> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Data>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Data> CreateData(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> input_model_path = 0) {
  DataBuilder builder_(_fbb);
  builder_.add_input_model_path(input_model_path);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<Data> CreateDataDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *input_model_path = nullptr) {
  auto input_model_path__ = input_model_path ? _fbb.CreateString(input_model_path) : 0;
  return tflm::codegen::preprocessor::CreateData(
      _fbb,
      input_model_path__);
}

::flatbuffers::Offset<Data> CreateData(::flatbuffers::FlatBufferBuilder &_fbb, const DataT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline DataT *Data::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<DataT>(new DataT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Data::UnPackTo(DataT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = input_model_path(); if (_e) _o->input_model_path = _e->str(); }
}

inline ::flatbuffers::Offset<Data> Data::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const DataT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateData(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<Data> CreateData(::flatbuffers::FlatBufferBuilder &_fbb, const DataT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const DataT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _input_model_path = _o->input_model_path.empty() ? 0 : _fbb.CreateString(_o->input_model_path);
  return tflm::codegen::preprocessor::CreateData(
      _fbb,
      _input_model_path);
}

inline const tflm::codegen::preprocessor::Data *GetData(const void *buf) {
  return ::flatbuffers::GetRoot<tflm::codegen::preprocessor::Data>(buf);
}

inline const tflm::codegen::preprocessor::Data *GetSizePrefixedData(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<tflm::codegen::preprocessor::Data>(buf);
}

inline bool VerifyDataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<tflm::codegen::preprocessor::Data>(nullptr);
}

inline bool VerifySizePrefixedDataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<tflm::codegen::preprocessor::Data>(nullptr);
}

inline void FinishDataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<tflm::codegen::preprocessor::Data> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedDataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<tflm::codegen::preprocessor::Data> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<tflm::codegen::preprocessor::DataT> UnPackData(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<tflm::codegen::preprocessor::DataT>(GetData(buf)->UnPack(res));
}

inline std::unique_ptr<tflm::codegen::preprocessor::DataT> UnPackSizePrefixedData(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<tflm::codegen::preprocessor::DataT>(GetSizePrefixedData(buf)->UnPack(res));
}

}  // namespace preprocessor
}  // namespace codegen
}  // namespace tflm

#endif  // FLATBUFFERS_GENERATED_PREPROCESSORSCHEMA_TFLM_CODEGEN_PREPROCESSOR_H_
