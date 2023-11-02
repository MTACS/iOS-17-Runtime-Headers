
@interface SBHCompoundAssertion : NSObject <BSDescriptionStreamable, BSInvalidatable> {
    NSMutableArray * _assertions;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAssertion:(id)arg1;
- (void)addAssertions:(id)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithReason:(id)arg1;
- (id)initWithReason:(id)arg1 assertions:(id)arg2;
- (void)invalidate;
- (id)reason;

@end
