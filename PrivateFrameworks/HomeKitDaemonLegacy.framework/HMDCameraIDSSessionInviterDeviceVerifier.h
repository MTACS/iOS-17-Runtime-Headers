
@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject <HMFLogging> {
    HMDDevice * _expectedInviter;
    NSString * _sessionID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *expectedInviter;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *sessionID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)canAcceptInvitationForSessionWithIdentifier:(id)arg1;
- (bool)canAcceptInvitationFromDeviceWithHandle:(id)arg1;
- (id)expectedInviter;
- (id)initWithSessionID:(id)arg1 expectedInviter:(id)arg2;
- (id)logIdentifier;
- (id)sessionID;

@end
