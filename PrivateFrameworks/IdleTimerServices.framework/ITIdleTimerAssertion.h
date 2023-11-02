
@interface ITIdleTimerAssertion : BSSimpleAssertion {
    ITIdleTimerConfiguration * _configuration;
}

@property (nonatomic, readonly, copy) ITIdleTimerConfiguration *configuration;
@property (getter=_uniqueReason, nonatomic, readonly, copy) NSString *uniqueReason;

- (void).cxx_destruct;
- (id)_initWithConfiguration:(id)arg1 forReason:(id)arg2 invalidationBlock:(id /* block */)arg3;
- (id)_uniqueReason;
- (id)configuration;
- (id)succinctDescriptionBuilder;

@end
