
@interface AVCaptureFigAudioDevice : AVCaptureDevice {
    NSDictionary * _attributes;
    bool  _audioInputRouteIsBuiltInMic;
    NSObject<OS_dispatch_group> * _audioRoutesInfoFirstQueryGroup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _audioRoutesInfoLock;
    NSObject<OS_dispatch_queue> * _audioRoutesInfoUpdateQueue;
    AVAudioSession * _auxiliarySession;
    NSString * _clientAudioClockDeviceUID;
    struct OpaqueFigCaptureSource { } * _fcs;
    NSObject<OS_dispatch_queue> * _fcsQueue;
    bool  _isConnected;
    bool  _isSoonToBeDisconnected;
    bool  _levelMeteringEnabled;
    NSString * _localizedName;
    NSObject<OS_dispatch_group> * _localizedNameFirstQueryGroup;
    NSObject<OS_dispatch_queue> * _localizedNameFirstQueryQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _localizedNameLock;
    NSObject<OS_dispatch_semaphore> * _serverConnectionDiedSemaphore;
    struct OpaqueCMClock { } * _sharedAVAudioSessionClock;
    AVWeakReference * _weakReference;
}

+ (id)_devices;
+ (id)_devicesWithPriorRegisteredDevices:(id)arg1;
+ (id)_newFigCaptureSources;
+ (void)_reconnectDevices:(id)arg1;
+ (void)initialize;

- (id)_copyFigCaptureSourceProperty:(struct __CFString { }*)arg1;
- (void)_handleNotification:(struct __CFString { }*)arg1 payload:(id)arg2;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (id)clientAudioClockDeviceUID;
- (bool)currentAudioInputRouteIsBuiltInMic:(id)arg1;
- (void)dealloc;
- (struct OpaqueCMClock { }*)deviceClock;
- (id)deviceType;
- (long long)fallbackAudioCaptureModeIfApplicableForCurrentRoute:(long long)arg1;
- (struct OpaqueFigCaptureSource { }*)figCaptureSource;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1;
- (bool)hasMediaType:(id)arg1;
- (id)init;
- (bool)isAudioCaptureModeSupported:(long long)arg1;
- (bool)isAudioInputRouteBuiltInMic;
- (bool)isBuiltInStereoAudioCaptureSupported;
- (bool)isConnected;
- (bool)isSoonToBeDisconnected;
- (id)localizedName;
- (id)modelID;
- (void)setClientAudioClockDeviceUID:(id)arg1;
- (bool)shouldAudioCaptureModeTriggerGraphRebuildOnAudioRouteChange:(long long)arg1;
- (bool)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (bool)supportsAVCaptureSessionPreset:(id)arg1;
- (id)uniqueID;

@end
