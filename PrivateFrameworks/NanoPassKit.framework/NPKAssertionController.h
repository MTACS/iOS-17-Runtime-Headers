
@interface NPKAssertionController : NSObject {
    id /* block */  _assertionFactory;
    id /* block */  _assertionInvalidator;
    NSMapTable * _assertionMaps;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

- (void).cxx_destruct;
- (void)_inQueue_releaseAssertionWithOwner:(id)arg1;
- (void)_releaseAssertionFromOwnerObject:(id)arg1 withDelay:(double)arg2 completion:(id /* block */)arg3;
- (void)createAssertionForOwnerObject:(id)arg1 withReason:(id)arg2;
- (id)initWithAssertionFactory:(id /* block */)arg1 invalidator:(id /* block */)arg2;
- (void)releaseAssertionFromOwnerObject:(id)arg1;
- (void)releaseAssertionFromOwnerObject:(id)arg1 withDelay:(double)arg2;
- (void)releaseAssertionFromOwnerObject:(id)arg1 withDelay:(double)arg2 completion:(id /* block */)arg3;

@end
