
@interface HMHomeCloudShareResponse : NSObject {
    HMUserCloudShareClientInfo * _clientInfo;
    HMUser * _ownerUser;
    CKShareParticipant * _participant;
}

@property (readonly) HMUserCloudShareClientInfo *clientInfo;
@property (readonly) HMUser *ownerUser;
@property (readonly) CKShareParticipant *participant;

- (void).cxx_destruct;
- (id)clientInfo;
- (id)initWithOwnerUser:(id)arg1 pariticipant:(id)arg2 clientInfo:(id)arg3;
- (id)ownerUser;
- (id)participant;

@end
