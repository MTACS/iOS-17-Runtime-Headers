
@interface SBIdleTimerConfigurationDisablesTimerSetting : NSObject <BSDescriptionProviding> {
    unsigned long long  _precedence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long precedence;
@property (readonly) Class superclass;

- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithPrecedence:(unsigned long long)arg1;
- (unsigned long long)precedence;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
