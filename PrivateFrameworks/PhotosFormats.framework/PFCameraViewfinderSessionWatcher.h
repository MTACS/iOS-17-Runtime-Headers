
@interface PFCameraViewfinderSessionWatcher : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {
    unsigned long long  _counter;
    <PFCameraViewfinderSessionWatcherDelegate> * _delegate;
    _Atomic bool  _isCameraRunning;
    NSObject<OS_dispatch_queue> * _queue;
    FigCameraViewfinder * _viewFinder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <PFCameraViewfinderSessionWatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isCameraRunning;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;
- (void)cameraViewfinderSessionWillBegin:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;
- (bool)isCameraRunning;
- (void)startWatching;
- (void)stopWatching;

@end
