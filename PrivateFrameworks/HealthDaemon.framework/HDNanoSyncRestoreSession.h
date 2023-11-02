
@interface HDNanoSyncRestoreSession : NSObject {
    NSCalendar * _calendar;
    NSMutableArray * _completionHandlers;
    bool  _finished;
    HDNanoSyncStore * _nanoSyncStore;
    long long  _sequenceNumber;
    NSUUID * _sessionUUID;
    NSDate * _startDate;
    _HKExpiringCompletionTimer * _timer;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly) HDNanoSyncStore *nanoSyncStore;
@property (nonatomic) long long sequenceNumber;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)arg1;
- (id)calendar;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (id)initWithSyncStore:(id)arg1 sessionUUID:(id)arg2;
- (bool)isFinished;
- (id)nanoSyncStore;
- (void)scheduleTimeoutWithInterval:(double)arg1 handler:(id /* block */)arg2;
- (long long)sequenceNumber;
- (id)sessionUUID;
- (void)setSequenceNumber:(long long)arg1;
- (id)startDate;

@end
