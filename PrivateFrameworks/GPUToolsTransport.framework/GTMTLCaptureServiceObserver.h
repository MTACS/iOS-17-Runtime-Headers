
@interface GTMTLCaptureServiceObserver : GTServiceObserver <GTMTLCaptureServiceObserver>

- (void)notifyCaptureObjectsChanged:(id)arg1;
- (void)notifyCaptureProgress:(id)arg1;
- (void)notifyCaptureRequest:(id)arg1;
- (void)notifyUnsupportedFenum:(id)arg1;

@end
