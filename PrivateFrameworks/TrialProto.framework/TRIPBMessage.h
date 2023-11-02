
@interface TRIPBMessage : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * autocreatedExtensionMap_;
    TRIPBExtensionDescriptor * autocreatorExtension_;
    TRIPBFieldDescriptor * autocreatorField_;
    TRIPBMessage * autocreator_;
    NSMutableDictionary * extensionMap_;
    struct TRIPBMessage_Storage { unsigned int x1[0]; } * messageStorage_;
    _Atomic id  readOnlySemaphore_;
    TRIPBUnknownFieldSet * unknownFields_;
}

@property (getter=isInitialized, nonatomic, readonly) bool initialized;
@property (nonatomic, copy) TRIPBUnknownFieldSet *unknownFields;

+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)descriptor;
+ (void)initialize;
+ (id)message;
+ (id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3;
+ (id)parseFromData:(id)arg1 error:(id*)arg2;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3;
+ (bool)resolveClassMethod:(SEL)arg1;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsSecureCoding;

- (void)addExtension:(id)arg1 value:(id)arg2;
- (void)addUnknownMapEntry:(int)arg1 value:(id)arg2;
- (void)clear;
- (void)clearExtension:(id)arg1;
- (void)copyFieldsInto:(id)arg1 zone:(struct _NSZone { }*)arg2 descriptor:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)delimitedData;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionsCurrentlySet;
- (id)getExistingExtension:(id)arg1;
- (id)getExtension:(id)arg1;
- (bool)hasExtension:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3;
- (void)internalClear:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInitialized;
- (void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeFrom:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2;
- (bool)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned int)arg3;
- (unsigned long long)serializedSize;
- (void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3;
- (void)setExtension:(id)arg1 value:(id)arg2;
- (void)setUnknownFields:(id)arg1;
- (id)unknownFields;
- (void)writeDelimitedToCodedOutputStream:(id)arg1;
- (void)writeDelimitedToOutputStream:(id)arg1;
- (void)writeExtensionsToCodedOutputStream:(id)arg1 range:(struct TRIPBExtensionRange { unsigned int x1; unsigned int x2; })arg2;
- (void)writeField:(id)arg1 toCodedOutputStream:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)writeToOutputStream:(id)arg1;

@end
