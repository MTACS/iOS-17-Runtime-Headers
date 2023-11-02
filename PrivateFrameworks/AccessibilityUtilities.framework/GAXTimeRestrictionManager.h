
@interface GAXTimeRestrictionManager : NSObject {
    bool  _active;
    NSMutableSet * _alarmDurationsInSeconds;
    NSMutableArray * _alarmTimers;
    AXAccessQueue * _assertedAccessQueue;
    <GAXTimeRestrictionManagerDelegate> * _delegate;
    long long  _expirationDurationInSeconds;
    AXAccessQueueTimer * _expirationTimer;
    bool  _paused;
    NSDate * _startTime;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) NSMutableSet *alarmDurationsInSeconds;
@property (nonatomic, retain) NSMutableArray *alarmTimers;
@property (nonatomic, retain) AXAccessQueue *assertedAccessQueue;
@property (nonatomic) <GAXTimeRestrictionManagerDelegate> *delegate;
@property (nonatomic) long long expirationDurationInSeconds;
@property (nonatomic, retain) AXAccessQueueTimer *expirationTimer;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, readonly) long long remainingTimeInSeconds;
@property (nonatomic, retain) NSDate *startTime;

- (void).cxx_destruct;
- (void)_addAlarmForDuration:(long long)arg1;
- (void)_removeAllAlarmTimers;
- (void)_removeAllTimers;
- (void)_removeExpirationTimer;
- (void)_scheduleTimers;
- (id)alarmDurationsInSeconds;
- (id)alarmTimers;
- (id)assertedAccessQueue;
- (void)beginWithDuration:(long long)arg1;
- (void)cancel;
- (id)delegate;
- (id)description;
- (long long)expirationDurationInSeconds;
- (id)expirationTimer;
- (id)initWithAssertedAccessQueue:(id)arg1;
- (bool)isActive;
- (bool)isPaused;
- (void)pause;
- (long long)remainingTimeInSeconds;
- (void)resume;
- (void)setActive:(bool)arg1;
- (void)setAlarmDurationsInSeconds:(id)arg1;
- (void)setAlarmTimers:(id)arg1;
- (void)setAssertedAccessQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpirationDurationInSeconds:(long long)arg1;
- (void)setExpirationTimer:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
