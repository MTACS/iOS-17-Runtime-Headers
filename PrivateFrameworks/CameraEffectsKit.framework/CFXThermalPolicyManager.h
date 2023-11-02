
@interface CFXThermalPolicyManager : NSObject <JFXVideoCameraThermalDelegate> {
    JFXThermalPolicyManager * _policyManager;
    bool  _recordingPolicy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) JFXThermalPolicyManager *policyManager;
@property (nonatomic) bool recordingPolicy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CFX_notifyPolicyChanged;
- (void)cameraFPSForThermalLevel:(int)arg1 deviceType:(id)arg2 minRate:(out int*)arg3 maxRate:(out int*)arg4;
- (id)init;
- (id)policyManager;
- (bool)recordingPolicy;
- (void)setPolicyManager:(id)arg1;
- (void)setRecordingPolicy:(bool)arg1;

@end
