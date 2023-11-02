
@interface HKPPT : NSObject <HKPPTController> {
    NSMutableDictionary * _activeTestsByName;
    <HKPPTInterface> * _pptInterface;
    NSObject<OS_dispatch_queue> * _pptQueue;
}

- (void).cxx_destruct;
- (void)_failedTest:(id)arg1;
- (void)_failedTest:(id)arg1 withResults:(id)arg2;
- (void)_finishedTest:(id)arg1;
- (void)_finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)_startedTest:(id)arg1;
- (id)_testNameForDriver:(id)arg1;
- (id)builtinTests;
- (void)dealloc;
- (void)failedTest:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (id)init;
- (id)initWithHKPPTInterface:(id)arg1 usingQueue:(id)arg2;
- (void)invalidConfigurationForTest:(id)arg1 error:(id)arg2;
- (bool)runTest:(id)arg1 options:(id)arg2;
- (void)startedTest:(id)arg1;

@end
