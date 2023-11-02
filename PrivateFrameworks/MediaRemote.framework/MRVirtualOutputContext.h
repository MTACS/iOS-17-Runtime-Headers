
@interface MRVirtualOutputContext : MRAVOutputContext {
    NSMutableArray * _outputDevices;
    NSString * _uniqueIdentifier;
}

- (void).cxx_destruct;
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(id /* block */)arg4;
- (id)contextID;
- (id)initWithUID:(id)arg1;
- (bool)isVolumeControlAvailable;
- (id)outputDevices;
- (id)predictedOutputDevice;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(id /* block */)arg2;
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(id /* block */)arg4;
- (void)resetPredictedOutputDevice;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(id /* block */)arg4;
- (void)setOutputDevices:(id)arg1 withPassword:(id)arg2 withCallbackQueue:(id)arg3 block:(id /* block */)arg4;
- (void)setVolume:(float)arg1;
- (bool)supportsMultipleBluetoothOutputDevices;
- (bool)supportsVolumeControl;
- (unsigned int)type;
- (id)uniqueIdentifier;
- (float)volume;

@end
