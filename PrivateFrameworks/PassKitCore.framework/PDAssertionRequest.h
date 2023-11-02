
@interface PDAssertionRequest : NSObject {
    PDAssertion * _assertion;
    NSObject<OS_dispatch_source> * _invalidationTimer;
    id /* block */  _resultHandler;
}

@property (nonatomic, retain) PDAssertion *assertion;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *invalidationTimer;
@property (nonatomic, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)assertion;
- (unsigned long long)hash;
- (id)initWithAssertion:(id)arg1 delegate:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)invalidationTimer;
- (id /* block */)resultHandler;
- (void)setAssertion:(id)arg1;
- (void)setInvalidationTimer:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;

@end
