
@interface HMDTimerTrigger : HMDTrigger {
    NSDate * _currentFireDate;
    NSDate * _fireDate;
    NSTimeZone * _fireDateTimeZone;
    NSDateComponents * _fireRepeatInterval;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _recurrences;
    NSString * _significantEvent;
    NSDateComponents * _significantEventOffset;
    NSString * _timerID;
    NSDate * currentFireDate;
}

@property (readonly) NSDate *currentFireDate;
@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic, copy) NSTimeZone *fireDateTimeZone;
@property (nonatomic, copy) NSDateComponents *fireRepeatInterval;
@property (nonatomic, copy) NSArray *recurrences;
@property (nonatomic, copy) NSString *significantEvent;
@property (nonatomic, copy) NSDateComponents *significantEventOffset;
@property (nonatomic, retain) NSString *timerID;

+ (id)getCalendar:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;
+ (id)validateRecurrence:(id)arg1 calendar:(id)arg2 fireDate:(id)arg3;
+ (id)validateRecurrences:(id)arg1;
+ (id)validateSignificantOffset:(id)arg1;
+ (id)validateTriggerModel:(id)arg1 message:(id)arg2 currentFireDate:(id)arg3;
+ (id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id*)arg5 returnDateAfter:(id*)arg6;
- (void)_disableTimerOffReactivationFailure;
- (void)_handleTimerTriggerUpdate:(id)arg1 message:(id)arg2;
- (void)_handleUpdateTimerTriggerPropertiesModel:(id)arg1 message:(id)arg2;
- (void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1;
- (id)_nextFireDate;
- (id)_nextSignificantEventFireDate;
- (bool)_reactivateFireDateTrigger;
- (bool)_reactivateSignificantEventTrigger;
- (bool)_reactivateTrigger;
- (void)_reactiveTriggerAfterDelay;
- (void)_registerForMessages;
- (id)_serializeForAdd;
- (bool)_shouldExecuteActionSet;
- (void)_startTimer:(id)arg1;
- (void)_startTimerWithFireDate:(id)arg1;
- (void)_startTimerWithSignificantEventDate:(id)arg1;
- (void)_stopTimer;
- (void)_timerTriggered;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)backingStoreObjects:(long long)arg1;
- (void)completeConfiguration;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (id)currentFireDate;
- (void)dealloc;
- (id)description;
- (id)dumpState;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (id)fireDateTimeZone;
- (id)fireRepeatInterval;
- (id)getCalendar;
- (id)getFireInterval;
- (void)handleTimerFiredNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (void)invalidate;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)recurrences;
- (void)setCurrentFireDate:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setFireDateTimeZone:(id)arg1;
- (void)setFireRepeatInterval:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setSignificantEvent:(id)arg1;
- (void)setSignificantEventOffset:(id)arg1;
- (void)setTimerID:(id)arg1;
- (bool)shouldActivateOnLocalDevice;
- (id)significantEvent;
- (id)significantEventOffset;
- (id)timerID;
- (void)timerTriggered;
- (unsigned long long)triggerType;

@end
