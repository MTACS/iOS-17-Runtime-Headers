
@interface STYWorkflowEventTracker : NSObject {
    int  _perDayEventCount;
    int  _perPeriodEventCount;
    WRWorkflowEventTracker * _wrTracker;
}

@property int perDayEventCount;
@property int perPeriodEventCount;
@property (retain) WRWorkflowEventTracker *wrTracker;

- (void).cxx_destruct;
- (int)perDayEventCount;
- (int)perPeriodEventCount;
- (void)setPerDayEventCount:(int)arg1;
- (void)setPerPeriodEventCount:(int)arg1;
- (void)setWrTracker:(id)arg1;
- (id)wrTracker;

@end
