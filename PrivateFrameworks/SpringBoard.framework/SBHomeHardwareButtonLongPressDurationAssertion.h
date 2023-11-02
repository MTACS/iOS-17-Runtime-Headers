
@interface SBHomeHardwareButtonLongPressDurationAssertion : NSObject <BSDescriptionProviding> {
    double  _duration;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)duration;
- (id)initWithReason:(id)arg1 duration:(double)arg2;
- (id)reason;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
