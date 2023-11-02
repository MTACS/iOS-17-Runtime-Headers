
@interface SXPendingLayoutInvalidation : NSObject {
    <SXComponent> * _component;
    id /* block */  _invalidation;
    SXLayoutOptions * _layoutOptions;
    NFPendingPromise * _pendingPromise;
}

@property (nonatomic, readonly) <SXComponent> *component;
@property (nonatomic, readonly) id /* block */ invalidation;
@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;
@property (nonatomic, readonly) NFPendingPromise *pendingPromise;

- (void).cxx_destruct;
- (id)component;
- (id)initWithComponent:(id)arg1 pendingPromise:(id)arg2 layoutOptions:(id)arg3 invalidation:(id /* block */)arg4;
- (id /* block */)invalidation;
- (id)layoutOptions;
- (id)pendingPromise;

@end
