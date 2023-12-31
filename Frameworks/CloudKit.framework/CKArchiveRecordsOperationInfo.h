
@interface CKArchiveRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _recordIDs;
}

@property (nonatomic, retain) NSArray *recordIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordIDs;
- (void)setRecordIDs:(id)arg1;

@end
