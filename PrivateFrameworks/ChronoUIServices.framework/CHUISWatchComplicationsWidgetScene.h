
@interface CHUISWatchComplicationsWidgetScene : CHUISWidgetScene

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bezelContentCenter;
@property (nonatomic, readonly) long long cornerPosition;
@property (nonatomic, readonly, copy) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (nonatomic, readonly) bool generateSnapshotMetadata;
@property (nonatomic, readonly) bool includeAccessoryViews;

- (id)_sceneSettings;
- (struct CGPoint { double x1; double x2; })bezelContentCenter;
- (long long)cornerPosition;
- (id)curvedLabelMetrics;
- (bool)generateSnapshotMetadata;
- (bool)includeAccessoryViews;

@end
