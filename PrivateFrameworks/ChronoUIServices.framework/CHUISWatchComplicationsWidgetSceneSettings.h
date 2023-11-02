
@interface CHUISWatchComplicationsWidgetSceneSettings : CHUISWidgetSceneSettings

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bezelContentCenter;
@property (nonatomic, readonly) unsigned long long cornerPosition;
@property (nonatomic, readonly, copy) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (nonatomic, readonly) bool generateSnapshotMetadata;
@property (nonatomic, readonly) bool includeAccessoryViews;

- (struct CGPoint { double x1; double x2; })bezelContentCenter;
- (unsigned long long)cornerPosition;
- (id)curvedLabelMetrics;
- (bool)generateSnapshotMetadata;
- (bool)includeAccessoryViews;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
