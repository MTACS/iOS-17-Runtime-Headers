
@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    unsigned long long  _badgeValue;
}

@property (nonatomic) unsigned long long badgeValue;

+ (bool)supportsSecureCoding;

- (unsigned long long)badgeValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBadgeValue:(unsigned long long)arg1;

@end
