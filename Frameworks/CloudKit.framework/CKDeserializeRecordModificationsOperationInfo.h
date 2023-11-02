
@interface CKDeserializeRecordModificationsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSData * _serializedModifications;
}

@property (nonatomic, retain) NSData *serializedModifications;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)serializedModifications;
- (void)setSerializedModifications:(id)arg1;

@end
