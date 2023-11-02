
@interface PKAccountPendingFamilyMember : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    NSString * _altDSID;
    bool  _displayedNotification;
    NSDate * _inviteDate;
    NSString * _inviteEmail;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic) bool displayedNotification;
@property (nonatomic, copy) NSDate *inviteDate;
@property (nonatomic, copy) NSString *inviteEmail;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToAccountPendingFamilyMember:(id)arg1;
- (id)accountIdentifier;
- (id)altDSID;
- (id)description;
- (bool)displayedNotification;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPendingFamilyMember:(id)arg1 accountIdentifier:(id)arg2;
- (id)inviteDate;
- (id)inviteEmail;
- (bool)isEqual:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setDisplayedNotification:(bool)arg1;
- (void)setInviteDate:(id)arg1;
- (void)setInviteEmail:(id)arg1;

@end
