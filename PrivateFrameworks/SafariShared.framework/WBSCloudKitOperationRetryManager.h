
@interface WBSCloudKitOperationRetryManager : NSObject {
    NSDate * _dateRetryWasFirstRequested;
    NSObject<OS_os_log> * _log;
    unsigned long long  _numberOfRetries;
    CKOperationGroup * _operationGroup;
    NSObject<OS_dispatch_queue> * _scheduleQueue;
    double  _timeout;
}

@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) unsigned long long numberOfRetries;
@property (nonatomic, retain) CKOperationGroup *operationGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *scheduleQueue;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)_logStringForOperationGroup;
- (bool)_shouldRetryOperationWithError:(id)arg1 isItemPartialError:(bool)arg2 getRetryInterval:(double*)arg3 underlyingError:(id*)arg4;
- (id)init;
- (id)initWithLog:(id)arg1;
- (id)log;
- (unsigned long long)numberOfRetries;
- (id)operationGroup;
- (id)scheduleQueue;
- (long long)scheduleRetryIfNeededForError:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)setLog:(id)arg1;
- (void)setOperationGroup:(id)arg1;
- (void)setScheduleQueue:(id)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
