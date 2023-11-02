
@interface SWCrashRetryThrottler : NSObject <SWProcessTerminationPolicyDecider> {
    bool  _crashed;
    unsigned long long  retryPolicy;
}

@property (nonatomic) bool crashed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long retryPolicy;
@property (readonly) Class superclass;

- (bool)crashed;
- (unsigned long long)retryPolicy;
- (void)setCrashed:(bool)arg1;
- (bool)shouldReloadAfterWebProcessCrash;

@end
