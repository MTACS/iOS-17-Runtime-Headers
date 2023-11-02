
@interface HMDMediaGroupsAggregateBackupMessageTimer : NSObject <HMDTimerProvider, HMFTimerDelegate> {
    unsigned long long  _attemptCount;
    NSUUID * _currentMessageIdentifier;
    <HMDMediaGroupsAggregateBackupMessageTimerDelegate> * _delegate;
    NSUUID * _participantAccessoryUUID;
    HMFTimer * _timer;
    <HMDTimerProvider> * _timerProvider;
}

@property unsigned long long attemptCount;
@property (copy) NSUUID *currentMessageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaGroupsAggregateBackupMessageTimerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *participantAccessoryUUID;
@property (readonly) Class superclass;
@property (retain) HMFTimer *timer;
@property <HMDTimerProvider> *timerProvider;

+ (id)logCategory;

- (void).cxx_destruct;
- (unsigned long long)attemptCount;
- (id)currentMessageIdentifier;
- (id)delegate;
- (id)initWithParticipantAccessoryUUID:(id)arg1;
- (id)initWithParticipantAccessoryUUID:(id)arg1 timerProvider:(id)arg2;
- (id)logIdentifier;
- (void)markAttemptWithMessageIdentifier:(id)arg1;
- (double)nextTimeInterval;
- (id)participantAccessoryUUID;
- (void)setAttemptCount:(unsigned long long)arg1;
- (void)setCurrentMessageIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setTimerProvider:(id)arg1;
- (void)startRetryTimer;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (id)timerProvider;
- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end
