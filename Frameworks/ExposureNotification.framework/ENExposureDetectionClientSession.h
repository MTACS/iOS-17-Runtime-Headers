
@interface ENExposureDetectionClientSession : NSObject <CUXPCCodable> {
    id /* block */  _completionHandler;
    ENExposureConfiguration * _configuration;
    NSArray * _diagnosisKeyURLs;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _guardActivateDone;
    bool  _guardAddFileDone;
    bool  _guardFinishDone;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    unsigned long long  _mainFileCount;
    unsigned long long  _mainFileIndex;
    NSMutableArray * _mainFileURLs;
    ENManager * _manager;
    NSProgress * _progress;
    int  _runState;
    NSMutableDictionary * _signatureURLMap;
    ENExposureDetectionSummary * _summary;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) ENExposureConfiguration *configuration;
@property (nonatomic, copy) NSArray *diagnosisKeyURLs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) ENManager *manager;
@property (nonatomic, retain) NSProgress *progress;

- (void).cxx_destruct;
- (void)_reportError:(id)arg1 where:(const char *)arg2;
- (void)_run;
- (bool)_runActivateStart;
- (bool)_runAddFile;
- (void)_runDetectionDone;
- (bool)_runFinishStart;
- (void)activate;
- (id /* block */)completionHandler;
- (id)configuration;
- (id)diagnosisKeyURLs;
- (id)dispatchQueue;
- (void)encodeWithXPCObject:(id)arg1;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)invalidate;
- (id)manager;
- (id)progress;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDiagnosisKeyURLs:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setProgress:(id)arg1;

@end
