
@interface HMUserCloudShareInvitation : NSObject {
    NSString * _containerID;
    HMUser * _fromUser;
    HMHome * _home;
    CKDeviceToDeviceShareInvitationToken * _shareToken;
    NSURL * _shareURL;
    HMUser * _user;
}

@property (readonly) NSString *containerID;
@property (readonly) HMUser *fromUser;
@property (readonly) HMHome *home;
@property (readonly) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (readonly) NSURL *shareURL;
@property (readonly) HMUser *user;

- (void).cxx_destruct;
- (id)containerID;
- (id)fromUser;
- (id)home;
- (id)initWithUser:(id)arg1 URL:(id)arg2 shareToken:(id)arg3 containerID:(id)arg4 forHome:(id)arg5 fromUser:(id)arg6;
- (id)shareToken;
- (id)shareURL;
- (id)user;

@end
