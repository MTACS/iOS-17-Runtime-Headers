
@interface WFBKSBackgroundAssertion : WFBackgroundAssertion {
    BKSProcessAssertion * _assertion;
    id /* block */  _expirationHandler;
    id  _observer;
    NSString * _taskName;
}

@property (nonatomic, retain) BKSProcessAssertion *assertion;
@property (nonatomic, copy) id /* block */ expirationHandler;
@property (nonatomic, retain) id observer;
@property (nonatomic, readonly, copy) NSString *taskName;

+ (id)backgroundAssertionWithName:(id)arg1 expirationHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)assertion;
- (void)end;
- (id /* block */)expirationHandler;
- (id)initWithName:(id)arg1 expirationHandler:(id /* block */)arg2;
- (id)observer;
- (void)setAssertion:(id)arg1;
- (void)setExpirationHandler:(id /* block */)arg1;
- (void)setObserver:(id)arg1;
- (id)taskName;

@end
