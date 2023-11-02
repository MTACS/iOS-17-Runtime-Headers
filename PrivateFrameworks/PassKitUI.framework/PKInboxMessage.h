
@interface PKInboxMessage : NSObject {
    PKFeatureApplication * _accountUserInvitation;
    PKFamilyMember * _familyMember;
    bool  _hidden;
    NSString * _identifier;
    long long  _type;
}

@property (nonatomic, readonly) PKFeatureApplication *accountUserInvitation;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) PKFamilyMember *familyMember;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool shouldBadge;
@property (nonatomic, readonly) long long type;

+ (id)accountUserInvitationInboxMessageWithAccountUserInvitation:(id)arg1 familyMember:(id)arg2;

- (void).cxx_destruct;
- (bool)_isEqualToInboxMessage:(id)arg1;
- (id)accountUserInvitation;
- (id)familyMember;
- (id)identifier;
- (id)initWithType:(long long)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isHidden;
- (bool)shouldBadge;
- (long long)type;

@end
