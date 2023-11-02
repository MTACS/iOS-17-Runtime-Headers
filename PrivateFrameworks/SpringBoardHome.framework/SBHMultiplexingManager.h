
@interface SBHMultiplexingManager : NSObject {
    unsigned long long  _cachedRecentViewControllerCountLimit;
    NSMutableOrderedSet * _cachedRecentViewControllerIdentifiers;
    NSMutableDictionary * _cachedRecentViewControllersForIdentifier;
    <SBHMultiplexingManagerDelegate> * _delegate;
    NSMutableDictionary * _multiplexingViewControllersForIdentifier;
    NSMutableDictionary * _viewControllersForIdentifier;
}

@property (nonatomic) unsigned long long cachedRecentViewControllerCountLimit;
@property (nonatomic, retain) NSMutableOrderedSet *cachedRecentViewControllerIdentifiers;
@property (nonatomic, retain) NSMutableDictionary *cachedRecentViewControllersForIdentifier;
@property (nonatomic) <SBHMultiplexingManagerDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *multiplexingViewControllersForIdentifier;
@property (nonatomic, retain) NSMutableDictionary *viewControllersForIdentifier;

- (void).cxx_destruct;
- (id)_activeMultiplexingViewControllerForIdentifier:(id)arg1;
- (bool)_cacheLastDiscardedViewController:(id)arg1 forIdentifier:(id)arg2;
- (void)_modifyViewControllersForIdentifier:(id)arg1 reusingCacheViewControllersIfNecessary:(bool)arg2 withBlock:(id /* block */)arg3;
- (void)_trimCachedRecentViewControllers;
- (id)activeMultiplexingViewControllerForIdentifier:(id)arg1;
- (id)activeMultiplexingViewControllerForViewController:(id)arg1;
- (unsigned long long)cachedRecentViewControllerCountLimit;
- (id)cachedRecentViewControllerIdentifiers;
- (id)cachedRecentViewControllersForIdentifier;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)discardCachedRecentViewControllers;
- (void)discardCachedRecentViewControllersForIdentifier:(id)arg1;
- (void)discardMultiplexingViewController:(id)arg1;
- (void)enumerateAllViewControllersUsingBlock:(id /* block */)arg1;
- (bool)hasViewControllerForIdentifier:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)multiplexingViewControllersForIdentifier;
- (id)newMultiplexingViewControllerForIdentifier:(id)arg1 atLevel:(double)arg2;
- (void)setCachedRecentViewControllerCountLimit:(unsigned long long)arg1;
- (void)setCachedRecentViewControllerIdentifiers:(id)arg1;
- (void)setCachedRecentViewControllersForIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMultiplexingViewControllersForIdentifier:(id)arg1;
- (void)setViewController:(id)arg1 forIdentifier:(id)arg2;
- (void)setViewControllersForIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)validateActiveMultiplexingViewControllerForIdentifier:(id)arg1;
- (id)viewControllerForIdentifier:(id)arg1;
- (id)viewControllersForIdentifier;

@end
