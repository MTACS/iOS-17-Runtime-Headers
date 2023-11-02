
@interface MTPAFActivity : NSObject {
    long long  _activityType;
    NSArray * _itemActivities;
    unsigned long long  _lastPosition;
    NSArray * _startEventData;
    unsigned long long  _startPosition;
    NSString * _startReason;
    NSString * _startTriggerType;
    NSArray * _stopEventData;
    NSString * _stopReason;
    NSString * _stopTriggerType;
    bool  _stopped;
    MTMediaTimeTracker * _timeTracker;
}

@property (nonatomic) long long activityType;
@property (nonatomic, copy) NSArray *itemActivities;
@property (nonatomic) unsigned long long lastPosition;
@property (nonatomic, retain) NSArray *startEventData;
@property (nonatomic) unsigned long long startPosition;
@property (nonatomic, retain) NSString *startReason;
@property (nonatomic, retain) NSString *startTriggerType;
@property (nonatomic, retain) NSArray *stopEventData;
@property (nonatomic, retain) NSString *stopReason;
@property (nonatomic, retain) NSString *stopTriggerType;
@property (nonatomic) bool stopped;
@property (nonatomic, retain) MTMediaTimeTracker *timeTracker;

- (void).cxx_destruct;
- (long long)activityType;
- (void)addItemsFromPlaylist:(id)arg1 pafKit:(id)arg2;
- (id)initWithType:(long long)arg1 playbackRate:(float)arg2 atMilliseconds:(unsigned long long)arg3 triggerType:(id)arg4 reason:(id)arg5 eventData:(id)arg6;
- (id)itemActivities;
- (unsigned long long)lastPosition;
- (void)setActivityType:(long long)arg1;
- (void)setItemActivities:(id)arg1;
- (void)setLastPosition:(unsigned long long)arg1;
- (void)setStartEventData:(id)arg1;
- (void)setStartPosition:(unsigned long long)arg1;
- (void)setStartReason:(id)arg1;
- (void)setStartTriggerType:(id)arg1;
- (void)setStopEventData:(id)arg1;
- (void)setStopReason:(id)arg1;
- (void)setStopTriggerType:(id)arg1;
- (void)setStopped:(bool)arg1;
- (void)setTimeTracker:(id)arg1;
- (id)startEventData;
- (void)startItemActivityIfPossible:(id)arg1;
- (unsigned long long)startPosition;
- (id)startReason;
- (id)startTriggerType;
- (id)stopEventData;
- (void)stopItemActivityIfPossible:(id)arg1;
- (id)stopReason;
- (id)stopTriggerType;
- (bool)stopped;
- (void)stoppedAtMilliseconds:(unsigned long long)arg1 triggerType:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)synchronizeAtMilliseconds:(unsigned long long)arg1;
- (id)timeTracker;
- (void)updateItemActivities:(id)arg1;

@end
