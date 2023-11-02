
@interface ATXWidgetDwellTracker : NSObject {
    <ATXWidgetDwellTrackerDelegate> * _delegate;
    NSMutableDictionary * _widgetUniqueIdToAppearDateMap;
}

@property (nonatomic) <ATXWidgetDwellTrackerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)resetAllTracking;
- (void)setDelegate:(id)arg1;
- (void)widgetDidAppear:(id)arg1 date:(id)arg2;
- (void)widgetDidDisappear:(id)arg1 date:(id)arg2;

@end
