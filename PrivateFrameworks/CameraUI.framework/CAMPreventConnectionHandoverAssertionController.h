
@interface CAMPreventConnectionHandoverAssertionController : NSObject {
    NSObject<OS_dispatch_queue> * __accessQueue;
    NFAssertion * __preventConnectionHandoverAssertion;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_accessQueue;
@property (setter=_setPreventConnectionHandoverAssertion:, nonatomic, retain) NFAssertion *_preventConnectionHandoverAssertion;

- (void).cxx_destruct;
- (id)_accessQueue;
- (id)_preventConnectionHandoverAssertion;
- (void)_releaseAssertionIfHeld;
- (void)_requestAssertionIfUnheld;
- (void)_setPreventConnectionHandoverAssertion:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)releaseAssertionIfHeld;
- (void)requestAssertionIfUnheld;

@end
