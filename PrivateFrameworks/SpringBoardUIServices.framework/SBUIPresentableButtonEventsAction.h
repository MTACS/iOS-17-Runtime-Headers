
@interface SBUIPresentableButtonEventsAction : BSAction <SBUIPresentableButtonEventsAssertion> {
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long presentableButtonEvent;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 debug:(bool)arg2;
- (bool)_expectsResponse;
- (void)handleButtonEvent;
- (id)initWithButtonEvent:(long long)arg1 reason:(id)arg2 handler:(id /* block */)arg3;
- (void)invalidate;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)presentableButtonEvent;
- (id)reason;

@end
