
@interface CATIDSServiceConnectionInvitationRequest : NSObject {
    NSString * _appleID;
    <CATCancelable> * _assertion;
    NSUUID * _invitationIdentifier;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic, readonly) <CATCancelable> *assertion;
@property (nonatomic, readonly) NSUUID *invitationIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)appleID;
- (id)assertion;
- (id)initWithInvitationIdentifier:(id)arg1 appleID:(id)arg2 assertion:(id)arg3 userInfo:(id)arg4;
- (id)invitationIdentifier;
- (id)userInfo;

@end
