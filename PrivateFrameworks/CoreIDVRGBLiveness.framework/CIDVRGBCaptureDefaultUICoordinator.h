
@interface CIDVRGBCaptureDefaultUICoordinator : NSObject <CIDVRGBCaptureUICoordinator> {
    id /* block */  _completionHandler;
    CIDVRGBCaptureUIConfig * _config;
    <CIDVRGBCaptureSelfieController> * _controller;
    UINavigationController * _navigationVC;
    UIViewController * _originalTopVC;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addNotificationObservers;
- (void)_cancelAfterAppMovedToBackground:(id)arg1;
- (void)_cleanAfterError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleTimeout;
- (void)_presentSelfieVC;
- (void)_presentVC:(id)arg1 animated:(bool)arg2;
- (void)_removeNotificationObservers;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)finishWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startWithConfig:(id)arg1 completionHandler:(id /* block */)arg2;

@end
