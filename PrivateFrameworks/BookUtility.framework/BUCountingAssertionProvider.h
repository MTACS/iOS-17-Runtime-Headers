
@interface BUCountingAssertionProvider : NSObject {
    unsigned long long  _count;
    <BUCountingAssertionProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (bool)_endAssertion;
- (id)_newAssertion:(bool)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)newAssertion;
- (id)newExtendingAssertion;

@end
