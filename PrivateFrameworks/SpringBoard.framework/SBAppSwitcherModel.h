
@interface SBAppSwitcherModel : NSObject <SBRecentAppLayoutsDelegate> {
    <SBAppSwitcherModelDelegate> * _delegate;
    SBIconController * _iconController;
    SBRecentAppLayouts * _recents;
    id  _recentsChangedNotificationObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBAppSwitcherModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)appSwitcherHeaderIconImageDescriptorName;

- (void).cxx_destruct;
- (long long)_adjustedIndexForVisibleAppLayoutAtIndex:(unsigned long long)arg1;
- (id)_recentAppLayoutsController;
- (void)_warmUpIconsForAppLayout:(id)arg1;
- (void)_warmUpIconsForRecentAppLayouts:(id)arg1;
- (void)addAppLayout:(id)arg1 afterAppLayout:(id)arg2;
- (void)addAppLayout:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addToFront:(id)arg1;
- (id)appLayoutContainingDisplayItem:(id)arg1 includingHiddenAppLayouts:(bool)arg2;
- (id)appLayoutsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(bool)arg2;
- (id)appLayoutsIncludingHiddenAppLayouts:(bool)arg1;
- (id)bestLastDisplayItemLayoutAttributesMapForAppLayout:(id)arg1 displayOrdinal:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (void)hide:(id)arg1;
- (unsigned long long)indexOfDisplayItem:(id)arg1 visible:(bool)arg2;
- (id)init;
- (id)initWithIconController:(id)arg1 applicationController:(id)arg2 recents:(id)arg3;
- (void)modifyWithDropContext:(id)arg1;
- (void)noteDisplayItemLayoutAttributesMapChangedForAppLayout:(id)arg1 displayOrdinal:(long long)arg2;
- (void)recentAppLayouts:(id)arg1 didRemoveAppLayoutForFallingOffList:(id)arg2;
- (id)recentAppLayouts:(id)arg1 willAddAppLayout:(id)arg2 replacingAppLayouts:(id)arg3 removingAppLayouts:(id)arg4;
- (id)recentAppLayouts:(id)arg1 willReplaceAppLayout:(id)arg2 proposedReplacementAppLayout:(id)arg3;
- (id)recentDisplayItemsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(bool)arg2;
- (void)remove:(id)arg1;
- (void)removeAppLayouts:(id)arg1;
- (void)replaceAppLayout:(id)arg1 withAppLayout:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
