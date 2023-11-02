
@interface SUCoreSplunkHistory : NSObject {
    NSString * _lastUUID;
    int  _lockFD;
    NSObject<OS_dispatch_queue> * _splunkHistoryQueue;
}

@property (nonatomic, retain) NSString *lastUUID;
@property int lockFD;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *splunkHistoryQueue;

+ (void)logEventUUID:(id)arg1;
+ (id)sharedHistory;

- (void).cxx_destruct;
- (void)acquireSharedLock;
- (void)dealloc;
- (id)init;
- (id)lastUUID;
- (int)lockFD;
- (void)releaseSharedLock;
- (void)safeWriteEventUUID:(id)arg1;
- (void)setLastUUID:(id)arg1;
- (void)setLockFD:(int)arg1;
- (int)setupLogFile;
- (id)splunkHistoryQueue;

@end
