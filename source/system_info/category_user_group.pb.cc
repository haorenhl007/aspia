// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_user_group.proto

#include "category_user_group.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
class UserGroup_ItemDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<UserGroup_Item>
      _instance;
} _UserGroup_Item_default_instance_;
class UserGroupDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<UserGroup>
      _instance;
} _UserGroup_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace protobuf_category_5fuser_5fgroup_2eproto {
void InitDefaultsUserGroup_ItemImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::aspia::proto::_UserGroup_Item_default_instance_;
    new (ptr) ::aspia::proto::UserGroup_Item();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::UserGroup_Item::InitAsDefaultInstance();
}

void InitDefaultsUserGroup_Item() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsUserGroup_ItemImpl);
}

void InitDefaultsUserGroupImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_category_5fuser_5fgroup_2eproto::InitDefaultsUserGroup_Item();
  {
    void* ptr = &::aspia::proto::_UserGroup_default_instance_;
    new (ptr) ::aspia::proto::UserGroup();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::UserGroup::InitAsDefaultInstance();
}

void InitDefaultsUserGroup() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsUserGroupImpl);
}

}  // namespace protobuf_category_5fuser_5fgroup_2eproto
namespace aspia {
namespace proto {

// ===================================================================

void UserGroup_Item::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UserGroup_Item::kNameFieldNumber;
const int UserGroup_Item::kCommentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UserGroup_Item::UserGroup_Item()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5fuser_5fgroup_2eproto::InitDefaultsUserGroup_Item();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.UserGroup.Item)
}
UserGroup_Item::UserGroup_Item(const UserGroup_Item& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  comment_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.comment().size() > 0) {
    comment_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.comment_);
  }
  // @@protoc_insertion_point(copy_constructor:aspia.proto.UserGroup.Item)
}

void UserGroup_Item::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  comment_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

UserGroup_Item::~UserGroup_Item() {
  // @@protoc_insertion_point(destructor:aspia.proto.UserGroup.Item)
  SharedDtor();
}

void UserGroup_Item::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  comment_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void UserGroup_Item::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UserGroup_Item& UserGroup_Item::default_instance() {
  ::protobuf_category_5fuser_5fgroup_2eproto::InitDefaultsUserGroup_Item();
  return *internal_default_instance();
}

UserGroup_Item* UserGroup_Item::New(::google::protobuf::Arena* arena) const {
  UserGroup_Item* n = new UserGroup_Item;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UserGroup_Item::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.UserGroup.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  comment_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool UserGroup_Item::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.UserGroup.Item)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.UserGroup.Item.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string comment = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_comment()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->comment().data(), static_cast<int>(this->comment().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.UserGroup.Item.comment"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.UserGroup.Item)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.UserGroup.Item)
  return false;
#undef DO_
}

void UserGroup_Item::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.UserGroup.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.UserGroup.Item.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string comment = 2;
  if (this->comment().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->comment().data(), static_cast<int>(this->comment().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.UserGroup.Item.comment");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->comment(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.UserGroup.Item)
}

size_t UserGroup_Item::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.UserGroup.Item)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string comment = 2;
  if (this->comment().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->comment());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserGroup_Item::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UserGroup_Item*>(&from));
}

void UserGroup_Item::MergeFrom(const UserGroup_Item& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.UserGroup.Item)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.comment().size() > 0) {

    comment_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.comment_);
  }
}

void UserGroup_Item::CopyFrom(const UserGroup_Item& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.UserGroup.Item)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserGroup_Item::IsInitialized() const {
  return true;
}

void UserGroup_Item::Swap(UserGroup_Item* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UserGroup_Item::InternalSwap(UserGroup_Item* other) {
  using std::swap;
  name_.Swap(&other->name_);
  comment_.Swap(&other->comment_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string UserGroup_Item::GetTypeName() const {
  return "aspia.proto.UserGroup.Item";
}


// ===================================================================

void UserGroup::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UserGroup::kItemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UserGroup::UserGroup()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5fuser_5fgroup_2eproto::InitDefaultsUserGroup();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.UserGroup)
}
UserGroup::UserGroup(const UserGroup& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      item_(from.item_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:aspia.proto.UserGroup)
}

void UserGroup::SharedCtor() {
  _cached_size_ = 0;
}

UserGroup::~UserGroup() {
  // @@protoc_insertion_point(destructor:aspia.proto.UserGroup)
  SharedDtor();
}

void UserGroup::SharedDtor() {
}

void UserGroup::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UserGroup& UserGroup::default_instance() {
  ::protobuf_category_5fuser_5fgroup_2eproto::InitDefaultsUserGroup();
  return *internal_default_instance();
}

UserGroup* UserGroup::New(::google::protobuf::Arena* arena) const {
  UserGroup* n = new UserGroup;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UserGroup::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.UserGroup)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  item_.Clear();
  _internal_metadata_.Clear();
}

bool UserGroup::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.UserGroup)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .aspia.proto.UserGroup.Item item = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_item()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.UserGroup)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.UserGroup)
  return false;
#undef DO_
}

void UserGroup::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.UserGroup)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .aspia.proto.UserGroup.Item item = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->item(static_cast<int>(i)), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.UserGroup)
}

size_t UserGroup::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.UserGroup)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // repeated .aspia.proto.UserGroup.Item item = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->item_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->item(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserGroup::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UserGroup*>(&from));
}

void UserGroup::MergeFrom(const UserGroup& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.UserGroup)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  item_.MergeFrom(from.item_);
}

void UserGroup::CopyFrom(const UserGroup& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.UserGroup)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserGroup::IsInitialized() const {
  return true;
}

void UserGroup::Swap(UserGroup* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UserGroup::InternalSwap(UserGroup* other) {
  using std::swap;
  item_.InternalSwap(&other->item_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string UserGroup::GetTypeName() const {
  return "aspia.proto.UserGroup";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)
