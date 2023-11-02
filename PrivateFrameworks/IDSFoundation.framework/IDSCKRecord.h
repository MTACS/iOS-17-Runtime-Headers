
@interface IDSCKRecord : NSObject {
    <IDSCKRecordKeyValueSetting> * _encryptedValuesByKey;
    IDSCKRecordID * _recordID;
}

@property (nonatomic, readonly) <IDSCKRecordKeyValueSetting> *encryptedValuesByKey;
@property (nonatomic, readonly, copy) IDSCKRecordID *recordID;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id)encryptedValuesByKey;
- (id)recordID;

@end
