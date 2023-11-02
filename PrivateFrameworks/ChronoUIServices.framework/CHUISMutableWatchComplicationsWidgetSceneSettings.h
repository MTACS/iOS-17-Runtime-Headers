
@interface CHUISMutableWatchComplicationsWidgetSceneSettings : CHUISMutableWidgetSceneSettings

@property (nonatomic) struct CGPoint { double x1; double x2; } bezelContentCenter;
@property (nonatomic) unsigned long long cornerPosition;
@property (nonatomic, copy) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (nonatomic) bool generateSnapshotMetadata;
@property (nonatomic) bool includeAccessoryViews;

- (struct CGPoint { double x1; double x2; })bezelContentCenter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cornerPosition;
- (id)curvedLabelMetrics;
- (bool)generateSnapshotMetadata;
- (bool)includeAccessoryViews;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)setBezelContentCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCornerPosition:(unsigned long long)arg1;
- (void)setCurvedLabelMetrics:(id)arg1;
- (void)setGenerateSnapshotMetadata:(bool)arg1;
- (void)setIncludeAccessoryViews:(bool)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
