
@interface JFXCameraFPSThermalPolicy : NSObject <JFXThermalPolicy, JFXVideoCameraThermalDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long priority;
@property (readonly) Class superclass;

- (void)cameraFPSForThermalLevel:(int)arg1 deviceType:(id)arg2 minRate:(out int*)arg3 maxRate:(out int*)arg4;
- (id)description;
- (unsigned long long)priority;

@end
