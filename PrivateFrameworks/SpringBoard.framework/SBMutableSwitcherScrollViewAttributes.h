
@interface SBMutableSwitcherScrollViewAttributes : SBSwitcherScrollViewAttributes

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) double decelerationRate;
@property (nonatomic) struct CGSize { double x1; double x2; } interpageSpacingForPaging;
@property (nonatomic) bool interpolatesDuringSwipeToKill;
@property (nonatomic) struct CGPoint { double x1; double x2; } pagingOrigin;
@property (nonatomic) bool scrollViewPagingEnabled;

@end
