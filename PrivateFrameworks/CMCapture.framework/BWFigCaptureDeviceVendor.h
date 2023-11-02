
@interface BWFigCaptureDeviceVendor : NSObject {
    BWFigCaptureDeviceClient * _activeDeviceClient;
    NSObject<OS_os_transaction> * _activeForClientAssertion;
    bool  _cameraCalibrationValid;
    NSMutableDictionary * _cameraPoseMatricesByPortTypeByDeviceID;
    CMIOExtensionDiscoverySession * _cmioDiscoverySession;
    int (* _cmioExtensionDeviceCreateFunction;
    int (* _defaultDeviceCreateFunction;
    NSObject<OS_dispatch_source> * _defaultDeviceOpenTimer;
    double  _deviceCloseTimeoutSeconds;
    NSMutableArray * _deviceCreationHistory;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    NSMutableDictionary * _devicesStatesByDeviceID;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    unsigned long long  _osStateHandle;
    NSMutableArray * _registeredDeviceClients;
    NSMutableArray * _victimizedDeviceClients;
}

@property (readonly) int activeDeviceClientPriority;
@property (readonly) bool cameraCalibrationValid;
@property (nonatomic, readonly) NSArray *deviceIDs;

+ (void)initialize;
+ (id)sharedCaptureDeviceVendor;
+ (bool)videoCaptureDeviceFirmwareIsLoaded;

- (id)_copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 allowsStreamControlLoss:(bool)arg3 forDevice:(id)arg4 requestControl:(bool)arg5 error:(int*)arg6;
- (id)_deviceWithID:(id)arg1;
- (void)_handleCMIOExtensionDevicesChangedNotification:(id)arg1;
- (id)activeDeviceClient;
- (int)activeDeviceClientPriority;
- (bool)activeDeviceEquals:(id)arg1;
- (bool)cameraCalibrationValid;
- (id)cameraPoseMatrixForStreamWithPosition:(int)arg1 deviceType:(int)arg2 deviceID:(id)arg3;
- (id)copyDeviceForClient:(int)arg1 informClientWhenDeviceAvailableAgain:(bool)arg2 error:(int*)arg3;
- (id)copyDeviceForPublishingWithID:(id)arg1 error:(int*)arg2;
- (id)copyDeviceWithID:(id)arg1 forClient:(int)arg2 informClientWhenDeviceAvailableAgain:(bool)arg3 error:(int*)arg4;
- (id)copyStreamForFlashlightWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3;
- (id)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 allowsStreamControlLoss:(bool)arg3 forDevice:(id)arg4 error:(int*)arg5;
- (id)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3 error:(int*)arg4;
- (id)copyStreamWithoutControlWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3;
- (id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(id)arg3 error:(int*)arg4;
- (id)copyStreamsWithUniqueIDs:(id)arg1 forDevice:(id)arg2 error:(int*)arg3;
- (void)dealloc;
- (id)deviceIDs;
- (id)deviceWithID:(id)arg1;
- (id)initWithDefaultDeviceCreateFunction:(int (*)arg1;
- (id)initWithDefaultDeviceCreateFunction:(int (*)arg1 cmioExtensionDeviceCreateFunction:(int (*)arg2 cmioDiscoverySession:(id)arg3;
- (void)invalidateVideoDevice:(id)arg1 forPID:(int)arg2;
- (int)keepControlOfStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(id)arg3;
- (void)prewarmDefaultVideoDeviceForPID:(int)arg1 completionHandler:(id /* block */)arg2;
- (int)registerClientWithPID:(int)arg1 clientApplicationID:(id)arg2 clientDescription:(id)arg3 clientPriority:(int)arg4 canStealFromClientsWithSamePriority:(bool)arg5 deviceSharingWithOtherClientsAllowed:(bool)arg6 deviceAvailabilityChangedHandler:(id /* block */)arg7;
- (int)registerClientWithPID:(int)arg1 clientDescription:(id)arg2 clientPriority:(int)arg3 canStealFromClientsWithSamePriority:(bool)arg4 deviceSharingWithOtherClientsAllowed:(bool)arg5 deviceAvailabilityChangedHandler:(id /* block */)arg6;
- (id)registeredDeviceClientWithID:(int)arg1;
- (id)registeredDeviceClients;
- (int)requestControlOfStreams:(id)arg1 device:(id)arg2;
- (void)resumeSystemPressuredDevice;
- (void)shutDownSystemPressuredDevice:(id)arg1;
- (bool)streamsInUseForDevice:(id)arg1;
- (float)structuredLightProjectorStandbyTemperatureWithError:(int*)arg1;
- (void)takeBackDevice:(id)arg1 forClient:(int)arg2 informClientWhenDeviceAvailableAgain:(bool)arg3;
- (void)takeBackStreams:(id)arg1 device:(id)arg2;
- (int)unregisterClient:(int)arg1;
- (int)usageCountForDevice:(id)arg1;
- (id)victimizedDeviceClients;

@end
