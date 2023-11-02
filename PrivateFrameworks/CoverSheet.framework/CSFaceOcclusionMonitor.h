
@interface CSFaceOcclusionMonitor : NSObject <CSEventHandling> {
    <CSFaceOcclusionMonitorDelegate> * _delegate;
    unsigned long long  _faceOcclusionsSinceScreenOn;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSFaceOcclusionMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long faceOcclusionsSinceScreenOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_handleBiometricEvent:(unsigned long long)arg1;
- (void)conformsToCSEventHandling;
- (id)delegate;
- (unsigned long long)faceOcclusionsSinceScreenOn;
- (bool)handleEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
