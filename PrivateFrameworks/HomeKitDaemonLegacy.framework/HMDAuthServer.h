
@interface HMDAuthServer : HMFObject <HMFLogging, HMFTimerDelegate> {
    unsigned long long  _authFeatures;
    id  _context;
    unsigned long long  _currentOperation;
    <HMDAuthServerDelegate> * _delegate;
    NSLocale * _locale;
    NSString * _model;
    long long  _retryCount;
    HMFTimer * _retryTimer;
    NSData * _token;
    MFAATokenManager * _tokenManager;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) unsigned long long authFeatures;
@property (nonatomic, retain) id context;
@property (nonatomic) unsigned long long currentOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDAuthServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSString *model;
@property (nonatomic) long long retryCount;
@property (nonatomic, retain) HMFTimer *retryTimer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *token;
@property (readonly) MFAATokenManager *tokenManager;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleResponseMetadata:(id)arg1 ppid:(id)arg2 locale:(id)arg3 context:(id)arg4 error:(id)arg5;
- (void)_reportFailureWithContext:(id)arg1 error:(id)arg2;
- (unsigned long long)authFeatures;
- (id)context;
- (unsigned long long)currentOperation;
- (id)delegate;
- (void)getPPIDInfo:(id)arg1 model:(id)arg2 cert:(id)arg3 context:(id)arg4;
- (id)initWithDelegate:(id)arg1;
- (id)locale;
- (id)model;
- (void)resetRetryOperation;
- (bool)resumeRetryIfPending;
- (long long)retryCount;
- (void)retryOrReportFailure:(id)arg1 context:(id)arg2;
- (id)retryTimer;
- (void)saveRetryOperation:(unsigned long long)arg1 token:(id)arg2 authFeatures:(unsigned long long)arg3 uuid:(id)arg4 context:(id)arg5 locale:(id)arg6 model:(id)arg7;
- (void)sendActivationConfirmation:(id)arg1 uuid:(id)arg2 context:(id)arg3;
- (void)sendActivationRequest:(id)arg1 uuid:(id)arg2 context:(id)arg3;
- (void)sendPPIDInfoRequest:(id)arg1 model:(id)arg2 token:(id)arg3 authFeatures:(unsigned long long)arg4 uuid:(id)arg5 context:(id)arg6;
- (void)setAuthFeatures:(unsigned long long)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentOperation:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setRetryTimer:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)token;
- (id)tokenManager;
- (id)uuid;
- (id)workQueue;

@end
