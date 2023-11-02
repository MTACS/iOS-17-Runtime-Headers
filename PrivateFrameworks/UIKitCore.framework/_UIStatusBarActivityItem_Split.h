
@interface _UIStatusBarActivityItem_Split : _UIStatusBarActivityItem_SyncOnly {
    _UIStatusBarActivityView * _activityView;
    _UIStatusBarActivityIndicator * _syncStartView;
}

@property (nonatomic, retain) _UIStatusBarActivityView *activityView;
@property (nonatomic, retain) _UIStatusBarActivityIndicator *syncStartView;

+ (id)pillDisplayIdentifier;
+ (id)syncStartDisplayIdentifier;

- (void).cxx_destruct;
- (void)_create_activityView;
- (void)_create_syncStartView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })activityIndicatorAlignmentRectInsets;
- (id)activityView;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)setActivityView:(id)arg1;
- (void)setSyncStartView:(id)arg1;
- (id)syncStartView;
- (id)viewForIdentifier:(id)arg1;

@end
