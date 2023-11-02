
@interface PKAccountUserCollection : NSObject <NSSecureCoding> {
    NSSet * _accountUsers;
    NSDictionary * _accountUsersByAltDSID;
    bool  _coOwner;
    PKAccountUser * _coOwnerAccountUser;
    PKAccountUser * _currentAccountUser;
}

@property (nonatomic, readonly) NSSet *accountUsers;
@property (getter=isCoOwner, nonatomic, readonly) bool coOwner;
@property (nonatomic, readonly) PKAccountUser *coOwnerAccountUser;
@property (nonatomic, readonly) PKAccountUser *currentAccountUser;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToAccountUserCollection:(id)arg1;
- (void)_updateWithAccountUsers:(id)arg1;
- (id)accountUserForTransaction:(id)arg1;
- (id)accountUserWithAltDSID:(id)arg1;
- (id)accountUsers;
- (id)accountUsersExcludingCurrentAccountUser;
- (id)activeAccountUsers;
- (id)activeAccountUsersExcludingCurrentAccountUser;
- (id)coOwnerAccountUser;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)currentAccountUser;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountUsers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCoOwner;
- (bool)isEqual:(id)arg1;
- (id)transactionSourceIdentifiers;

@end
