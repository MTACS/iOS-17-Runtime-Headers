
@interface FPXObserver : NSObject {
    FPXDomainContext * _domainContext;
    bool  _invalidated;
    NSFileProviderRequest * _nsFileProviderRequest;
    FPItemID * _observedItemID;
    NSObject<OS_dispatch_queue> * _queue;
    FPXExtensionContext * _strongExtensionContext;
    <NSFileProviderReplicatedExtension> * _strongVendorInstance;
}

@property (getter=isInvalidated, readonly) bool invalidated;

- (void).cxx_destruct;
- (void)_fixupFavoriteRank:(id)arg1;
- (id)init;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 nsFileProviderRequest:(id)arg3;
- (void)invalidate;
- (bool)isInvalidated;
- (id)updateForProviderItem:(id)arg1;
- (void)verifyVendorToken:(id)arg1;

@end
