
@interface CAMViewfinderVideoCaptureTestHarness : CAMPerformanceTestHarness <CAMViewfinderViewControllerVideoCaptureRequestTestingDelegate> {
    double  __initialDelayInSeconds;
    double  __videoDurationInSeconds;
    CAMViewfinderViewController * __viewfinderViewController;
    id /* block */  _endVideoHandler;
    id /* block */  _startVideoHandler;
}

@property (nonatomic, readonly) double _initialDelayInSeconds;
@property (nonatomic, readonly) double _videoDurationInSeconds;
@property (nonatomic, retain) CAMViewfinderViewController *_viewfinderViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ endVideoHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ startVideoHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_initialDelayInSeconds;
- (double)_videoDurationInSeconds;
- (id)_viewfinderViewController;
- (id /* block */)endVideoHandler;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 videoDurationInSeconds:(double)arg3 initialDelayInSeconds:(double)arg4;
- (void)setEndVideoHandler:(id /* block */)arg1;
- (void)setStartVideoHandler:(id /* block */)arg1;
- (void)set_viewfinderViewController:(id)arg1;
- (void)startTesting;
- (id /* block */)startVideoHandler;
- (void)viewfinderViewController:(id)arg1 didReceiveVideoRequestDidCompleteCapture:(id)arg2 withResponse:(id)arg3 error:(id)arg4;
- (void)viewfinderViewController:(id)arg1 didReceiveVideoRequestDidStartCapturing:(id)arg2;

@end
