
@interface CKMovePhotosOperationInfo : CKModifyRecordsOperationInfo <NSSecureCoding> {
    NSArray * _moveChanges;
    long long  _sourceDatabaseScope;
}

@property (nonatomic, copy) NSArray *moveChanges;
@property (nonatomic) long long sourceDatabaseScope;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)moveChanges;
- (void)setMoveChanges:(id)arg1;
- (void)setSourceDatabaseScope:(long long)arg1;
- (long long)sourceDatabaseScope;

@end
