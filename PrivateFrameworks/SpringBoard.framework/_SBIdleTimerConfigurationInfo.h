
@interface _SBIdleTimerConfigurationInfo : NSObject <BSDescriptionProviding> {
    SBIdleTimerRequestConfiguration * _configuration;
    NSString * _reason;
}

@property (nonatomic, readonly) SBIdleTimerRequestConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithConfiguration:(id)arg1 reason:(id)arg2;
- (id)reason;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
