
@interface BRTransfersStatusManager : NSObject {
    NSProgress * _globalDownloadProgress;
    id  _globalProgressSubscriber;
    NSProgress * _globalUploadProgress;
    NSOperationQueue * _operationQueue;
    NSString * _personaIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _shouldHideGlobalDownloadProgressCount;
    NSObject<OS_dispatch_source> * _timerToDisplayGlobalProgress;
    NSMutableArray * _transfers;
}

@property (readonly, copy) NSArray *transfers;

+ (id)defaultManager;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_progressSubscription;
- (void)_setGlobalProgress:(id)arg1 forIvar:(id*)arg2;
- (void)_setupTimerToDisplayGlobalProgress;
- (void)addTransfer:(id)arg1;
- (void)dealloc;
- (void)downloadAndObserveItemAtURL:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithPersonaIdentifier:(id)arg1;
- (void)insertTransfer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeTransfer:(id)arg1;
- (void)showGlobalProgressIfNeeded;
- (id)startObservingItemDownloadProgressAtURL:(id)arg1;
- (void)stopObservingItemDownloadProgress:(id)arg1;
- (id)transfers;

@end
