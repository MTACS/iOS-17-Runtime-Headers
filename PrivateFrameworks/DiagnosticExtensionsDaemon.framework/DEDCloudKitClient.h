
@interface DEDCloudKitClient : NSObject {
    DEDBugSession * _bugSession;
    DEDBugSessionConfiguration * _bugSessionConfig;
    CKContainer * _container;
    NSObject<OS_os_log> * _log;
    NSMutableArray * _recordsQueue;
}

@property (nonatomic, retain) DEDBugSession *bugSession;
@property (nonatomic, retain) DEDBugSessionConfiguration *bugSessionConfig;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSMutableArray *recordsQueue;

- (void).cxx_destruct;
- (void)addRawRecordToQueueFromModel:(id)arg1;
- (id)bugSession;
- (id)bugSessionConfig;
- (id)container;
- (void)executeOperationsAtomicallyWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2 finalHandler:(id /* block */)arg3;
- (void)executeRecord:(id)arg1 atomicallyWithProgressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3 finalHandler:(id /* block */)arg4;
- (void)flushQueue;
- (id)initWithBugSession:(id)arg1 configuration:(id)arg2;
- (id)log;
- (id)recordsQueue;
- (void)setBugSession:(id)arg1;
- (void)setBugSessionConfig:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setRecordsQueue:(id)arg1;
- (bool)stillHaveOperationsInQueue;

@end
