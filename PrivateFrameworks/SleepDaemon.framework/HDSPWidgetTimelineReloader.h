
@interface HDSPWidgetTimelineReloader : NSObject <HDSPWidgetReloader> {
    CHSTimelineController * _timelineController;
}

- (void).cxx_destruct;
- (id)init;
- (void)reloadSleepWidget;

@end
