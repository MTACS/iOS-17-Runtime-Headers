
@interface _UIStatusBarVisualProvider_CarPlayHorizontal : _UIStatusBarVisualProvider_CarPlay {
    NSLayoutConstraint * _driverSideConstraint;
    NSDictionary * _orderedDisplayItemPlacements;
}

@property (nonatomic, retain) NSLayoutConstraint *driverSideConstraint;
@property (nonatomic, retain) NSDictionary *orderedDisplayItemPlacements;

+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (id)driverSideConstraint;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (void)setDriverSideConstraint:(id)arg1;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (id)setupInContainerView:(id)arg1;

@end
