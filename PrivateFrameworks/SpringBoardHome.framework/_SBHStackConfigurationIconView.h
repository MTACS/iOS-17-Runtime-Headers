
@interface _SBHStackConfigurationIconView : SBIconView <SBIconListLayoutObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)groupNameBaseForComponentBackgroundViewOfType:(long long)arg1;

- (bool)_cannotRemoveLastWidgetInWidgetSheet;
- (id)_iconListView;
- (id)_stackConfigurationViewController;
- (void)_updateCloseBoxForAllIconsInListView:(id)arg1 animated:(bool)arg2;
- (unsigned long long)customIconImageViewControllerPriority;
- (void)iconListView:(id)arg1 didAddIconView:(id)arg2;
- (void)iconListView:(id)arg1 didRemoveIconView:(id)arg2;
- (bool)shouldShowCloseBox;
- (bool)shouldTapGestureRecognizeAlongsideDragInteractionGestures;

@end
