
@interface CSRemoteRecordClient : NSObject {
    unsigned long long  _audioStreamHandleId;
    OS_xpc_remote_connection * _connection;
    <CSRemoteRecordClientDelegate> * _delegate;
    OS_remote_device * _device;
    OS_remote_device_browser * _deviceBrowser;
    NSString * _deviceId;
    CSDispatchGroup * _deviceWaitingGroup;
    bool  _isRemoteRecording;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) unsigned long long audioStreamHandleId;
@property (nonatomic) <CSRemoteRecordClientDelegate> *delegate;
@property (nonatomic, retain) OS_remote_device *device;
@property (nonatomic, readonly) NSString *deviceId;

- (void).cxx_destruct;
- (void)_handleDidStartRecordingMessage:(id)arg1;
- (void)_handleServerError:(id)arg1;
- (void)_handleServerEvent:(id)arg1;
- (void)_handleServerMessage:(id)arg1;
- (void)_handleTwoShotDetectedMessage:(id)arg1;
- (unsigned long long)audioStreamHandleId;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (id)deviceId;
- (void)didDeviceConnect:(id)arg1;
- (void)didDeviceDisconnect:(id)arg1;
- (bool)didPlayEndpointBeep;
- (bool)hasPendingTwoShotBeep;
- (id)init;
- (id)initWithDeviceId:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;
- (id)initWithQueue:(id)arg1 IsRemoteRecording:(bool)arg2;
- (bool)isConnected;
- (bool)isRecording;
- (bool)isRemoteDeviceDarwin;
- (bool)isRemoteDeviceGibraltar;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (bool)startRecordingWithOptions:(id)arg1 error:(id*)arg2;
- (bool)stopRecording:(id*)arg1;
- (id)voiceTriggerEventInfo;
- (bool)waitingForConnection:(double)arg1 error:(id*)arg2;

@end
