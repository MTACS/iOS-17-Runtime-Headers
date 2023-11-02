
@interface MNAnnouncementEngine : NSObject {
    double  _distance;
    NSDictionary * _durations;
    NSArray * _events;
    MNAnnouncementPlan * _plan;
    double  _speed;
}

@property (nonatomic, retain) MNAnnouncementPlan *plan;

- (void).cxx_destruct;
- (bool)_advanceToResolveConflict:(id)arg1;
- (double)_canAdvanceEvent:(id)arg1;
- (double)_canDelayEvent:(id)arg1;
- (bool)_compressToResolveConflict:(id)arg1;
- (bool)_delayToResolveConflict:(id)arg1;
- (void)_dropToResolveConflict:(id)arg1;
- (id)nextEvent;
- (id)plan;
- (void)planForEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 previousEvent:(id)arg4 timeSinceLastEvent:(double)arg5 durations:(id)arg6;
- (void)setPlan:(id)arg1;

@end
