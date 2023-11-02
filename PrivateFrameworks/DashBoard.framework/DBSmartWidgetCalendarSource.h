
@interface DBSmartWidgetCalendarSource : DBSmartWidgetSource {
    EKCalendarVisibilityManager * _calendarVisibilityManager;
    EKEventStore * _eventStore;
}

@property (nonatomic, readonly) EKCalendarVisibilityManager *calendarVisibilityManager;
@property (nonatomic, readonly) EKEventStore *eventStore;

+ (void)load;
+ (id)predictionClasses;
+ (id)sourceName;

- (void).cxx_destruct;
- (void)_eventStoreDidChange:(id)arg1;
- (void)_handleAppLibraryRefresh;
- (bool)_includeCalendar:(id)arg1;
- (bool)_includeEvent:(id)arg1 forNow:(id)arg2;
- (id)calendarVisibilityManager;
- (void)dealloc;
- (id)eventStore;
- (id)freshPredictions;
- (id)initWithDelegate:(id)arg1 resourceProvider:(id)arg2;
- (bool)shouldKeepPrediction:(id)arg1;

@end
