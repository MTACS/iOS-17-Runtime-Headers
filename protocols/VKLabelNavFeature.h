
@protocol VKLabelNavFeature

@required

- (long long)intraRoadPriorityForRoadLabel;
- (long long)intraRoadPriorityForShieldLabel;
- (bool)isAwayFromRoute;
- (bool)isEtaFeature;
- (bool)isGuidanceStepStart;
- (bool)isInGuidance;
- (bool)isOnRoute;
- (bool)isPicked;
- (bool)isRamp;
- (bool)isStartOfRoadName;
- (bool)isTrafficCameraFeature;
- (bool)isValid;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (NSString *)name;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setIsPicked:(bool)arg1;
- (NSString *)shieldDisplayGroup;

@end
