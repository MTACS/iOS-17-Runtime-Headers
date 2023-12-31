
@interface CKDatabaseOperationInfo : CKOperationInfo <NSSecureCoding> {
    long long  _databaseScope;
}

@property (nonatomic) long long databaseScope;

+ (bool)supportsSecureCoding;

- (id)activityCreate;
- (long long)databaseScope;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDatabaseScope:(long long)arg1;
- (void)takeValuesFrom:(id)arg1;

@end
