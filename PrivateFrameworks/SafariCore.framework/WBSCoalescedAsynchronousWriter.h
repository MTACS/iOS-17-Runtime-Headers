
@interface WBSCoalescedAsynchronousWriter : NSObject {
    id /* block */  _dataSourceBlock;
    NSObject<OS_dispatch_queue> * _dataSourceQueue;
    <WBSCoalescedAsynchronousWriterDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _diskAccessQueue;
    bool  _done;
    NSDictionary * _fileResourceValues;
    NSURL * _fileURL;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _name;
    id /* block */  _plistDictionarySourceBlock;
    unsigned long long  _plistFormat;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { 
            struct SuddenTerminationDisabler {} *__value_; 
        } __ptr_; 
    }  _suddenTerminationDisabler;
    NSObject<OS_dispatch_source> * _timer;
    double  _writeDelayInterval;
    NSObject<OS_dispatch_group> * _writeGroup;
    id /* block */  _writerBlock;
}

@property (nonatomic) <WBSCoalescedAsynchronousWriterDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_asynchronouslyWriteData:(id)arg1 orPlistDictionary:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
- (id)_dataForPlistDictionary:(id)arg1;
- (id)_dataFromDataSourceOnDataSourceQueue;
- (id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(id /* block */)arg3 dataSourceQueue:(id)arg4 dataSourceBlock:(id /* block */)arg5 plistDictionarySourceBlock:(id /* block */)arg6 plistFormat:(unsigned long long)arg7 writeDelayInterval:(double)arg8 fileResourceValues:(id)arg9;
- (id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(id /* block */)arg3 dataSourceQueue:(id)arg4 dataSourceBlock:(id /* block */)arg5 writeDelayInterval:(double)arg6 fileResourceValues:(id)arg7;
- (void)_invalidateTimer;
- (id)_plistDictionaryFromDataSourceOnDataSourceQueue;
- (void)_scheduleTimer;
- (id)_synchronousDataOnDataSourceQueue;
- (void)_timerFired;
- (void)_waitForWriteCompletion;
- (void)_writeData:(id)arg1;
- (void)cancelPendingWriteSynchronously;
- (void)completePendingWriteSynchronously;
- (void)dealloc;
- (id)delegate;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(id /* block */)arg3;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(id /* block */)arg3 writeDelayInterval:(double)arg4;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(id /* block */)arg4;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(id /* block */)arg4 fileResourceValues:(id)arg5;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 plistFormat:(unsigned long long)arg4 plistDictionarySourceBlock:(id /* block */)arg5;
- (id)initWithName:(id)arg1 writerBlock:(id /* block */)arg2 dataSourceBlock:(id /* block */)arg3;
- (id)initWithName:(id)arg1 writerBlock:(id /* block */)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(id /* block */)arg4;
- (id)initWithName:(id)arg1 writerBlock:(id /* block */)arg2 dataSourceQueue:(id)arg3 plistFormat:(unsigned long long)arg4 plistDictionarySourceBlock:(id /* block */)arg5;
- (void)performScheduledWriteSynchronously;
- (void)scheduleWrite;
- (void)setDelegate:(id)arg1;
- (void)startScheduledWriteNow;
- (void)startScheduledWriteNowWithCompletionHandler:(id /* block */)arg1;

@end
