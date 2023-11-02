
@interface WKRBSAssertionDelegate : NSObject <RBSAssertionObserving> {
    id /* block */  _invalidationCallback;
    id /* block */  _prepareForInvalidationCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ invalidationCallback;
@property (copy) id /* block */ prepareForInvalidationCallback;
@property (readonly) Class superclass;

- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)assertionWillInvalidate:(id)arg1;
- (void)dealloc;
- (id /* block */)invalidationCallback;
- (id /* block */)prepareForInvalidationCallback;
- (void)setInvalidationCallback:(id /* block */)arg1;
- (void)setPrepareForInvalidationCallback:(id /* block */)arg1;

@end
