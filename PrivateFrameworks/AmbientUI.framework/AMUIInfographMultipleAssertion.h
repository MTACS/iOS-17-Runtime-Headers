
@interface AMUIInfographMultipleAssertion : NSObject <BSInvalidatable> {
    NSArray * _assertions;
}

@property (nonatomic, readonly, copy) NSArray *assertions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assertions;
- (id)initWithAssertions:(id)arg1;
- (void)invalidate;

@end
