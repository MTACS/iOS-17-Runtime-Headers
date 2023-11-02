
@interface MFWidgetController : NSObject <EFLoggable, EFSignpostable> {
    CHSTimelineController * _timelineController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, retain) CHSTimelineController *timelineController;

+ (id)log;
+ (id)scheduler;
+ (id)sharedController;
+ (id)signpostLog;

- (void).cxx_destruct;
- (id)init;
- (void)reloadTimelinesWithReason:(id)arg1;
- (void)setTimelineController:(id)arg1;
- (unsigned long long)signpostID;
- (id)timelineController;

@end
