
@interface STYFrameworkHelper : NSObject {
    NSObject<OS_os_log> * _logHandle;
    NSObject<OS_dispatch_queue> * _sharedConcurrentQueueAtBackground;
    NSObject<OS_dispatch_queue> * _sharedConcurrentQueueAtUtility;
    NSObject<OS_dispatch_queue> * _sharedSerialQueueAtUtility;
}

@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) NSObject<OS_dispatch_queue> *sharedConcurrentQueueAtBackground;
@property (retain) NSObject<OS_dispatch_queue> *sharedConcurrentQueueAtUtility;
@property (retain) NSObject<OS_dispatch_queue> *sharedSerialQueueAtUtility;

+ (id)sharedHelper;

- (void).cxx_destruct;
- (id)logHandle;
- (void)setLogHandle:(id)arg1;
- (void)setSharedConcurrentQueueAtBackground:(id)arg1;
- (void)setSharedConcurrentQueueAtUtility:(id)arg1;
- (void)setSharedSerialQueueAtUtility:(id)arg1;
- (id)sharedConcurrentQueueAtBackground;
- (id)sharedConcurrentQueueAtUtility;
- (id)sharedSerialQueueAtUtility;
- (id)subsystemForSignposts;

@end
