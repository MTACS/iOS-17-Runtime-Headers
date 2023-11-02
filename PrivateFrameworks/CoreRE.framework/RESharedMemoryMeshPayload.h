
@interface RESharedMemoryMeshPayload : RESharedResourcePayload <REMeshPayload> {
    NSObject<OS_xpc_object> * _data;
    NSArray * _instances;
    NSArray * _models;
    NSArray * _parts;
    RESerializedPayload * serializedData;
    id /* block */  serializedDataBlock;
}

@property (nonatomic, readonly) unsigned long long bufferSize;
@property (nonatomic, readonly) NSArray *instances;
@property (nonatomic, readonly) NSArray *models;
@property (nonatomic, readonly) NSArray *parts;
@property (nonatomic, retain) RESerializedPayload *serializedData;
@property (nonatomic, copy) id /* block */ serializedDataBlock;
@property (getter=isShareable, nonatomic, readonly) bool shareable;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)bufferSize;
- (id)bufferWithDevice:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 parts:(id)arg2 models:(id)arg3 instances:(id)arg4;
- (id)instances;
- (bool)isShareable;
- (id)models;
- (id)parts;
- (id)redactedDescription;
- (id)serializedData;
- (id /* block */)serializedDataBlock;
- (void)setSerializedData:(id)arg1;
- (void)setSerializedDataBlock:(id /* block */)arg1;

@end
