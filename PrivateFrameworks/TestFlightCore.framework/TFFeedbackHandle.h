
@interface TFFeedbackHandle : NSObject <SBSRemoteAlertHandleObserver> {
    TFFeedbackHandleConfiguration * _configuration;
    SBSRemoteAlertHandle * _internalHandle;
    NSString * _logKey;
}

@property (nonatomic, readonly) TFFeedbackHandleConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBSRemoteAlertHandle *internalHandle;
@property (nonatomic, readonly, copy) NSString *logKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithConfiguration:(id)arg1;
- (id)internalHandle;
- (void)invalidateFeedbackViewController;
- (id)logKey;
- (void)presentFeedbackViewController;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setInternalHandle:(id)arg1;

@end
