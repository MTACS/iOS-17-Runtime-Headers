
@interface FAInviteFamilyMemberRequest : FAFamilyRequest {
    NSString * _inviteeCompositeName;
    NSString * _inviteeEmail;
    NSString * _inviteeShortName;
}

@property (nonatomic, copy) NSString *inviteeCompositeName;
@property (nonatomic, copy) NSString *inviteeEmail;
@property (nonatomic, copy) NSString *inviteeShortName;

- (void).cxx_destruct;
- (id)_endpoint;
- (id)_queryString;
- (id)inviteeCompositeName;
- (id)inviteeEmail;
- (id)inviteeShortName;
- (bool)isUserInitiated;
- (void)setInviteeCompositeName:(id)arg1;
- (void)setInviteeEmail:(id)arg1;
- (void)setInviteeShortName:(id)arg1;

@end
