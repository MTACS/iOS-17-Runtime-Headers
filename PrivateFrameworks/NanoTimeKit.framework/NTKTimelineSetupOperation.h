
@interface NTKTimelineSetupOperation : NTKTimelineDataOperation {
    CLKComplicationTemplate * _alwaysOnTemplate;
    CLKComplicationTimelineEntry * _currentEntry;
    NSDate * _endDate;
    id /* block */  _handler;
    unsigned long long  _privacyBehavior;
    unsigned long long  _timelineAnimationBehavior;
}

@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_getAlwaysOnTemplate;
- (void)_getCurrentEntry;
- (void)_getEndDate;
- (void)_getPrivacyBehavior;
- (void)_getTimelineAnimationBehavior;
- (void)_invokeHandler;
- (void)_start;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;

@end
