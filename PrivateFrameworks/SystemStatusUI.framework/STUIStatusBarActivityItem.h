
@interface STUIStatusBarActivityItem : STUIStatusBarItem {
    STUIStatusBarActivityIndicator * _activityIndicator;
}

@property (nonatomic, retain) STUIStatusBarActivityIndicator *activityIndicator;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } activityIndicatorAlignmentRectInsets;

- (void).cxx_destruct;
- (void)_create_activityIndicator;
- (bool)_enableForType:(long long)arg1;
- (id)activityIndicator;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })activityIndicatorAlignmentRectInsets;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (void)setActivityIndicator:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
