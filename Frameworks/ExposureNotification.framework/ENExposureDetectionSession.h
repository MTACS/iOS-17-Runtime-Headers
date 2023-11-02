
@interface ENExposureDetectionSession : NSObject <CUXPCCodable> {
    bool  _activateCalled;
    ENExposureConfiguration * _configuration;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _finishCalled;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    unsigned long long  _keysOutstanding;
    ENManager * _manager;
    unsigned long long  _maximumKeyCount;
    unsigned long long  _totalKeyCount;
}

@property (nonatomic, retain) ENExposureConfiguration *configuration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) unsigned long long maximumKeyCount;

+ (long long)authorizationStatus;

- (void).cxx_destruct;
- (void)_activateWithCompletionHandler:(id /* block */)arg1;
- (void)_invalidated;
- (void)activateWithCompletionHandler:(id /* block */)arg1;
- (void)addDiagnosisKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)configuration;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithXPCObject:(id)arg1;
- (double)estimateRiskWithExposureInfo:(id)arg1 referenceTime:(double)arg2 transmissionRiskLevel:(char *)arg3 skip:(bool*)arg4;
- (void)finishedDiagnosisKeysWithCompletionHandler:(id /* block */)arg1;
- (void)getExposureInfoWithMaximumCount:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (unsigned long long)maximumKeyCount;
- (double)scoreWithExposureInfo:(id)arg1 skip:(bool*)arg2;
- (void)setConfiguration:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMaximumKeyCount:(unsigned long long)arg1;
- (void)updateDaySummary:(id)arg1 exposureInfo:(id)arg2 score:(double)arg3;

@end
