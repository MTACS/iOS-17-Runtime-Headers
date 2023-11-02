
@interface HMDCalendarEvent : HMDTimeEvent <HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    NSDateComponents * _fireDateComponents;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDateComponents *fireDateComponents;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleUpdateRequest:(id)arg1;
- (id)_nextRecurrentFireDateAfterDate:(id)arg1;
- (id)_nextRecurrentFireDateAfterDate:(id)arg1 recurrences:(id)arg2;
- (id)_nextTimerDate;
- (id)_nextTimerDateAfterDate:(id)arg1 timeZone:(id)arg2;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)analyticsTriggerEventData;
- (bool)areMonthDayNotMatching:(id)arg1;
- (id)createPayload;
- (id)description;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDateComponents;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (bool)isCompatibleWithEvent:(id)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)setFireDateComponents:(id)arg1;

@end
