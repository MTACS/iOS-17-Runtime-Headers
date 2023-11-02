
@interface HMDTimeEvent : HMDEvent <HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    bool  _repetitive;
    NSString * _timerID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) bool repetitive;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *timerID;

+ (bool)isValidAbsoluteDateComponents:(id)arg1;
+ (bool)isValidOffsetDateComponents:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_activate:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_initialize;
- (id)_nextTimerDate;
- (void)_reactivateTriggerAfterDelay;
- (void)_updateRepetitive;
- (void)encodeWithCoder:(id)arg1;
- (void)handleTimerFiredNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (bool)isCompatibleWithEvent:(id)arg1;
- (bool)repetitive;
- (id)timerID;

@end
