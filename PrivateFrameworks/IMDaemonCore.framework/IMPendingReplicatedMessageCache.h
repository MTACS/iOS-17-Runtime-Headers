
@interface IMPendingReplicatedMessageCache : NSObject {
    NSMutableDictionary * _pendingMessages;
    NSObject<OS_dispatch_queue> * _queue;
    NSTimer * _timeoutTimer;
}

@property (nonatomic, retain) NSMutableDictionary *pendingMessages;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSTimer *timeoutTimer;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_enforceCacheLimit;
- (void)_enforceTimeout;
- (void)_metricMatchingFailureWithReason:(id)arg1;
- (void)_removePendingMessageWithGUID:(id)arg1;
- (void)_scheduleTimeout;
- (void)addPendingMessageWithGUID:(id)arg1 releaseBlock:(id /* block */)arg2;
- (void)clearPendingMessageWithGUID:(id)arg1;
- (id)init;
- (id)pendingMessages;
- (id)queue;
- (void)releasePendingMessageWithGUID:(id)arg1 completion:(id /* block */)arg2;
- (void)setPendingMessages:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;

@end
