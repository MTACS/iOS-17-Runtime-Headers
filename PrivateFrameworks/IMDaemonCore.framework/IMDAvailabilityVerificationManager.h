
@interface IMDAvailabilityVerificationManager : NSObject <SKStatusSubscriptionServiceDelegate> {
    SKStatusSubscriptionService * _availabilitySubscriptionService;
    NSObject<OS_dispatch_queue> * _privateWorkQueue;
    NSCache * _subscriptionValidationTokenByHandleIDCache;
}

@property (nonatomic, retain) SKStatusSubscriptionService *availabilitySubscriptionService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (nonatomic, retain) NSCache *subscriptionValidationTokenByHandleIDCache;
@property (readonly) Class superclass;

+ (id)availabilityStatusTypeIdentifier;
+ (bool)deviceSupportsSubscriptionValidationTokens;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_inviteSenderHandleID:(id)arg1 fromHandleID:(id)arg2;
- (void)_validatePersonalStatusSubscriptionMatchesSubscriptionValidationToken:(id)arg1 encryptionValidationToken:(id)arg2 fromSender:(id)arg3 completion:(id /* block */)arg4;
- (id)availabilitySubscriptionService;
- (id)cachedAvailabilityVerificationTokensForHandleID:(id)arg1;
- (id)init;
- (void)populateCacheWithAvailbailityVerificationTokensForHandleID:(id)arg1;
- (id)privateWorkQueue;
- (void)setAvailabilitySubscriptionService:(id)arg1;
- (void)setPrivateWorkQueue:(id)arg1;
- (void)setSubscriptionValidationTokenByHandleIDCache:(id)arg1;
- (void)subscriptionInvitationReceived:(id)arg1;
- (void)subscriptionReceivedStatusUpdate:(id)arg1;
- (void)subscriptionServiceDaemonDisconnected:(id)arg1;
- (void)subscriptionStateChanged:(id)arg1;
- (id)subscriptionValidationTokenByHandleIDCache;
- (void)verifyPersonalSubscriptionMatchesSubscriptionValidationToken:(id)arg1 encryptionValidationToken:(id)arg2 receivedByHandleID:(id)arg3 fromHandleID:(id)arg4 messageDate:(id)arg5;

@end
