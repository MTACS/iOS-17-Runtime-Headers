
@interface STUIStatusBarVisualProvider_CarPlayVertical : STUIStatusBarVisualProvider_CarPlay {
    NSDictionary * _orderedDisplayItemPlacements;
}

@property (nonatomic, retain) NSDictionary *orderedDisplayItemPlacements;

+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (void)itemCreated:(id)arg1;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (id)setupInContainerView:(id)arg1;

@end
