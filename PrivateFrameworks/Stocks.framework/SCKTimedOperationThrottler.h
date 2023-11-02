
@interface SCKTimedOperationThrottler : NSObject <SCKOperationThrottler, SCKOperationThrottlerDelegate> {
    double  _cooldownTime;
    <SCKOperationThrottlerDelegate> * _delegate;
    SCKOperationThrottler * _operationThrottler;
}

@property double cooldownTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SCKOperationThrottlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SCKOperationThrottler *operationThrottler;
@property (readonly) Class superclass;
@property bool suspended;

- (void).cxx_destruct;
- (double)cooldownTime;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)operationThrottler;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;
- (void)setCooldownTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOperationThrottler:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (bool)suspended;
- (void)tickle;
- (void)tickleWithCompletion:(id /* block */)arg1;

@end
