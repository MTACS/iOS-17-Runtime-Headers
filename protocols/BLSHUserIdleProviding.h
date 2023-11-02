
@protocol BLSHUserIdleProviding <BSInvalidatable>

@required

- (<BLSHUserIdleProvidingDelegate> *)delegate;
- (double)idleTimeout;
- (void)pause;
- (void)reset;
- (void)resume;
- (void)setDelegate:(id <BLSHUserIdleProvidingDelegate>)arg1;
- (void)setIdleTimeout:(double)arg1 shouldReset:(bool)arg2;
- (void)setShouldNotifyOfUnidle:(bool)arg1;
- (bool)shouldNotifyOfUnidle;

@end
