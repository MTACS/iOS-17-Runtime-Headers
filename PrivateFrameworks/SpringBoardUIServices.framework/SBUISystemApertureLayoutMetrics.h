
@interface SBUISystemApertureLayoutMetrics : NSObject

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } compactConcentricAreaSize;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } compactLegibleAreaInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } expandedConcentricAreaSize;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } expandedControlsAreaInsets;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } expandedLegibleAreaInsets;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } interSensorRegionInWindowSpace;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumCompactSize;
@property (nonatomic, readonly) double maximumContinuousCornerRadius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumExpandedSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumHorizontalMinimalViewSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumLeadingTrailingViewSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumMicroNoticeSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumPossibleSizeWhilePresentingMenu;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } microNoticeConcentricAreaSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumCompactSize;
@property (nonatomic, readonly) double minimumContinuousCornerRadius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumExpandedSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumMicroNoticeSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumMinimalSize;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } minimumScreenEdgeInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sensorRegionSize;

+ (bool)_deviceNativeScreenSizeIsLargePhone;
+ (double)_nativeScreenWidth;
+ (id)sharedInstanceForEmbeddedDisplay;

- (struct CGSize { double x1; double x2; })_inertSize;
- (double)_maximumWidth;
- (double)_minimumScreenEdgeInset;
- (struct CGSize { double x1; double x2; })compactConcentricAreaSize;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })compactLegibleAreaInsets;
- (struct CGSize { double x1; double x2; })expandedConcentricAreaSize;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedControlsAreaInsets;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedLegibleAreaInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interSensorRegionInWindowSpace;
- (struct CGSize { double x1; double x2; })maximumCompactSize;
- (double)maximumContinuousCornerRadius;
- (struct CGSize { double x1; double x2; })maximumExpandedSize;
- (struct CGSize { double x1; double x2; })maximumHorizontalMinimalViewSize;
- (struct CGSize { double x1; double x2; })maximumLeadingTrailingViewSize;
- (struct CGSize { double x1; double x2; })maximumMicroNoticeSize;
- (struct CGSize { double x1; double x2; })maximumPossibleSizeWhilePresentingMenu;
- (struct CGSize { double x1; double x2; })microNoticeConcentricAreaSize;
- (struct CGSize { double x1; double x2; })minimumCompactSize;
- (double)minimumContinuousCornerRadius;
- (struct CGSize { double x1; double x2; })minimumExpandedSize;
- (struct CGSize { double x1; double x2; })minimumMicroNoticeSize;
- (struct CGSize { double x1; double x2; })minimumMinimalSize;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })minimumScreenEdgeInsets;
- (struct CGSize { double x1; double x2; })sensorRegionSize;

@end
