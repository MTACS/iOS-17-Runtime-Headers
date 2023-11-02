
@interface RESerializedPayload : RESharedResourcePayload {
    NSObject<OS_dispatch_data> * _blobData;
    NSObject<OS_dispatch_data> * _serializedData;
    NSString * _typeName;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_data> *blobData;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *serializedData;
@property (nonatomic, readonly) NSString *typeName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blobData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeName:(id)arg1 serializedBytes:(const void*)arg2 size:(unsigned long long)arg3 blobBytes:(const void*)arg4 size:(unsigned long long)arg5;
- (id)redactedDescription;
- (id)serializedData;
- (id)typeName;

@end
