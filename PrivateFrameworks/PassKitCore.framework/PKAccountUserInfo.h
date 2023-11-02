
@interface PKAccountUserInfo : NSObject <NSCopying, NSSecureCoding> {
    CNContact * _creditPrimaryUser;
    PKSavingsAccountUserInfo * _savingsUserInfo;
}

@property (nonatomic, copy) CNContact *creditPrimaryUser;
@property (nonatomic, copy) PKSavingsAccountUserInfo *savingsUserInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creditPrimaryUser;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)savingsUserInfo;
- (void)setCreditPrimaryUser:(id)arg1;
- (void)setSavingsUserInfo:(id)arg1;

@end
