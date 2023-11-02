
@interface FAFamilyInvite : NSObject {
    NSString * _childFirstName;
    NSString * _childLastName;
    NSString * _code;
    NSString * _inviteStatus;
    bool  _isChildTransferInvite;
    NSNumber * _organizerDSID;
    NSString * _organizerEmail;
    NSString * _organizerFirstName;
    NSString * _organizerLastName;
    NSNumber * _recepientDSID;
}

@property (nonatomic, copy) NSString *childFirstName;
@property (nonatomic, copy) NSString *childLastName;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *inviteStatus;
@property (nonatomic) bool isChildTransferInvite;
@property (nonatomic, copy) NSNumber *organizerDSID;
@property (nonatomic, copy) NSString *organizerEmail;
@property (nonatomic, copy) NSString *organizerFirstName;
@property (nonatomic, copy) NSString *organizerLastName;
@property (nonatomic, copy) NSNumber *recepientDSID;

- (void).cxx_destruct;
- (id)childFirstName;
- (id)childLastName;
- (id)code;
- (unsigned long long)hash;
- (id)inviteStatus;
- (bool)isChildTransferInvite;
- (bool)isEqual:(id)arg1;
- (id)organizerDSID;
- (id)organizerEmail;
- (id)organizerFirstName;
- (id)organizerLastName;
- (id)recepientDSID;
- (void)setChildFirstName:(id)arg1;
- (void)setChildLastName:(id)arg1;
- (void)setCode:(id)arg1;
- (void)setInviteStatus:(id)arg1;
- (void)setIsChildTransferInvite:(bool)arg1;
- (void)setOrganizerDSID:(id)arg1;
- (void)setOrganizerEmail:(id)arg1;
- (void)setOrganizerFirstName:(id)arg1;
- (void)setOrganizerLastName:(id)arg1;
- (void)setRecepientDSID:(id)arg1;

@end
