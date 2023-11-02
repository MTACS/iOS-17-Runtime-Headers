
@interface PADVNSerialRequestsScheduler : NSObject <PADFrameMonitor> {
    id /* block */  _currentFrameProcessingCompletion;
    NSMutableDictionary * _currentObservationComposite;
    NSMutableArray * _currentObservationCompositeSet;
    bool  _isProcessingFrame;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _remainingRequests;
    NSError * _requestError;
    NSArray * _requests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchVisionRequestForFrame:(id)arg1;
- (void)_reset;
- (void)analyzeObservationComposite:(id)arg1;
- (void)analyzeObservationCompositeSet:(id)arg1;
- (void)handleObservationCompositeError:(id)arg1;
- (void)handleResultForRequest:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (unsigned long long)observationCompositeSetSize;
- (id)observationsFromRequest:(id)arg1;
- (void)processFrame:(id)arg1;
- (id)requestsForFrame:(id)arg1 handler:(id /* block */)arg2;
- (bool)shouldProcessFrame:(id)arg1;
- (void)waitForCurrentFrameProcessingWithCompletion:(id /* block */)arg1;

@end
