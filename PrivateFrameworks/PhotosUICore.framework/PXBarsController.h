
@interface PXBarsController : NSObject {
    <PXActionPerformerDelegate> * _actionPerformerDelegate;
    NSMutableDictionary * _barButtonItemCache;
    NSMutableDictionary * _barButtonItemCachedPlacement;
    PXBarSpec * _barSpec;
    <PXBarsControllerDelegate> * _delegate;
    struct { 
        bool needsUpdateBars; 
    }  _needsUpdateFlags;
    UIViewController * _viewController;
    bool  _wantsAnimatedBarsUpdate;
}

@property (nonatomic) <PXActionPerformerDelegate> *actionPerformerDelegate;
@property (nonatomic, readonly) NSMutableDictionary *barButtonItemCache;
@property (nonatomic, readonly) NSMutableDictionary *barButtonItemCachedPlacement;
@property (nonatomic, retain) PXBarSpec *barSpec;
@property (nonatomic) <PXBarsControllerDelegate> *delegate;
@property (nonatomic, readonly) double fixedSpaceForEndButtonSpacing;
@property (nonatomic, readonly) double fixedSpaceForInterButtonSpacing;
@property (nonatomic, readonly) NSArray *leftBarButtonItemIdentifiers;
@property (nonatomic, readonly) NSArray *rightBarButtonItemIdentifiers;
@property (nonatomic, readonly) NSArray *toolbarItemIdentifiers;
@property (nonatomic) UIViewController *viewController;
@property (nonatomic) bool wantsAnimatedBarsUpdate;

- (void).cxx_destruct;
- (id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2;
- (bool)_needsUpdate;
- (void)_updateBarsIfNeeded;
- (id)actionPerformerDelegate;
- (id)barButtonItemCache;
- (id)barButtonItemCachedPlacement;
- (id)barSpec;
- (id)cachedBarButtonItemForIdentifier:(id)arg1;
- (id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2;
- (id)delegate;
- (double)fixedSpaceForEndButtonSpacing;
- (double)fixedSpaceForInterButtonSpacing;
- (id)init;
- (void)invalidateBarButtonItemWithIdentifier:(id)arg1;
- (void)invalidateBars;
- (id)leftBarButtonItemIdentifiers;
- (void)purgeCachedBarButtonItemsForIdentifiers:(id)arg1;
- (id)rightBarButtonItemIdentifiers;
- (void)setActionPerformerDelegate:(id)arg1;
- (void)setBarSpec:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setWantsAnimatedBarsUpdate:(bool)arg1;
- (id)toolbarItemIdentifiers;
- (void)updateBars;
- (void)updateIfNeeded;
- (id)viewController;
- (void)viewControllerDidChange;
- (bool)wantsAnimatedBarsUpdate;

@end
