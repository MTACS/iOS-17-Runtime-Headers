
@interface PowerUIBDCDataManager : NSObject {
    NSObject<OS_dispatch_semaphore> * _bdcCallbackSemaphore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bdcDataLock;
    NSMutableArray * _dataQueue;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *bdcCallbackSemaphore;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } bdcDataLock;
@property (nonatomic, retain) NSMutableArray *dataQueue;
@property (nonatomic, retain) NSObject<OS_os_log> *log;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)bdcCallbackSemaphore;
- (struct os_unfair_lock_s { unsigned int x1; })bdcDataLock;
- (id)bdcSemaphoreToUse;
- (id)dataQueue;
- (id)getBDCDataDictTemplate;
- (id)getNextBDCDataDict;
- (id)init;
- (id)log;
- (bool)promptBDCToQueryState:(id)arg1;
- (void)setBdcCallbackSemaphore:(id)arg1;
- (void)setBdcDataLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setDataQueue:(id)arg1;
- (void)setLog:(id)arg1;

@end
