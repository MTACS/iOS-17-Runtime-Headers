
@interface SSRRemoteControlClient : NSObject {
    OS_xpc_remote_connection * _connection;
    OS_remote_device * _device;
    CSDispatchGroup * _deviceWaitingGroup;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_handleServerError:(id)arg1;
- (void)_handleServerEvent:(id)arg1;
- (bool)_isImplicitTrainingRequiredForVoiceProfileId:(id)arg1 locale:(id)arg2 error:(id*)arg3;
- (void)addImplicitTrainingUtteranceToRemoteFilePath:(id)arg1 forVoiceProfileId:(id)arg2 withVoiceTriggerCtxt:(id)arg3 locale:(id)arg4 withOtherCtxt:(id)arg5 completion:(id /* block */)arg6;
- (void)dealloc;
- (void)didDeviceConnect:(id)arg1;
- (void)didDeviceDisconnect:(id)arg1;
- (id)initWithRemoteDeviceUUID:(id)arg1;
- (bool)isConnected;
- (bool)waitingForConnection:(double)arg1 error:(id*)arg2;

@end
