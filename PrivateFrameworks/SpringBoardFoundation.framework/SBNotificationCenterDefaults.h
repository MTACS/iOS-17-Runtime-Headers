
@interface SBNotificationCenterDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isBatteryWidgetAlwaysAvailable, nonatomic, readonly) bool batteryWidgetAlwaysAvailable;
@property (nonatomic) bool didPurgeNonASTCSnapshots;
@property (nonatomic) bool didPurgeNonCAMLSnapshots;
@property (nonatomic, readonly) bool showWidgetSnapshotDebugLabels;
@property (nonatomic, readonly) bool useDuetRecommendations;
@property (getter=isWidgetLoggingEnabled, nonatomic, readonly) bool widgetLoggingEnabled;
@property (getter=isWidgetSnapshottingEnabled, nonatomic, readonly) bool widgetSnapshottingEnabled;

- (void)_bindAndRegisterDefaults;

@end
