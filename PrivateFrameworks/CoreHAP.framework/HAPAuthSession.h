
@interface HAPAuthSession : HMFObject <HMFLogging> {
    unsigned long long  _currentState;
    unsigned char  _currentTID;
    <HAPAuthSessionDelegate> * _delegate;
    NSNumber * _instanceId;
    NSUUID * _provisionUUID;
    long long  _role;
    NSData * _token1;
    NSData * _token2;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) unsigned long long currentState;
@property (nonatomic) unsigned char currentTID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HAPAuthSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *instanceId;
@property (nonatomic, retain) NSUUID *provisionUUID;
@property (nonatomic, readonly) long long role;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *token1;
@property (nonatomic, retain) NSData *token2;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleAuthExchangeData:(id)arg1 withHeader:(bool)arg2;
- (void)_handleTokenResponse:(id)arg1 withHeader:(bool)arg2;
- (void)_handleTokenUpdateResponse:(id)arg1 withHeader:(bool)arg2;
- (void)_reportAuthFailure;
- (void)_resetSession;
- (void)_sendTokenRequest;
- (void)_sendTokenUpdateRequest:(id)arg1;
- (void)continueAuthAfterValidation:(bool)arg1;
- (unsigned long long)currentState;
- (unsigned char)currentTID;
- (id)delegate;
- (bool)getToken:(id*)arg1 uuid:(id*)arg2;
- (void)handleAuthExchangeData:(id)arg1 withHeader:(bool)arg2;
- (id)initWithRole:(long long)arg1 instanceId:(id)arg2 delegate:(id)arg3;
- (id)instanceId;
- (id)logIdentifier;
- (id)provisionUUID;
- (void)resetSession;
- (long long)role;
- (void)sendTokenUpdateRequest:(id)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setCurrentTID:(unsigned char)arg1;
- (void)setInstanceId:(id)arg1;
- (void)setProvisionUUID:(id)arg1;
- (void)setToken1:(id)arg1;
- (void)setToken2:(id)arg1;
- (id)token1;
- (id)token2;
- (id)workQueue;

@end
