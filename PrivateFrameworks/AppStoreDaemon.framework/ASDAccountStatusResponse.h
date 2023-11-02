
@interface ASDAccountStatusResponse : NSObject <NSSecureCoding> {
    NSNumber * _accountID;
    long long  _accountStatus;
    bool  _hasCachedFamilyInfo;
}

@property (retain) NSNumber *accountID;
@property long long accountStatus;
@property bool hasCachedFamilyInfo;
@property (readonly) bool hasErrorStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (long long)accountStatus;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCachedFamilyInfo;
- (bool)hasErrorStatus;
- (bool)hasResponseFlag:(long long)arg1;
- (id)initWithAccountID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccountID:(id)arg1;
- (void)setAccountStatus:(long long)arg1;
- (void)setHasCachedFamilyInfo:(bool)arg1;

@end
