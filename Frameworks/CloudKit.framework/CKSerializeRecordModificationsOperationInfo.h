
@interface CKSerializeRecordModificationsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _recordIDsToDelete;
    NSArray * _recordsToSave;
}

@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSArray *recordsToSave;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordsToSave:(id)arg1;

@end
