
@interface VCAudioPowerSpectrumManager : NSObject <VCAudioPowerSpectrumMeterDelegate, VCServerDelegate> {
    VCCellularAudioTap * _cellularAudioTap;
    NSMutableDictionary * _cellularTapTypeToStreamTokenMap;
    AVConferenceXPCClient * _connection;
    NSMutableArray * _meters;
    NSMutableDictionary * _powerSpectrumMetersForCellularTapType;
    NSMutableDictionary * _sources;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *meters;
@property (nonatomic, readonly) NSMutableDictionary *sources;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2;
- (void)cleanUpCellularAudioTap;
- (void)cleanupPowerSpectrumSetForCellularTapType:(id)arg1;
- (void)dealloc;
- (void)deregisterBlocksForService;
- (id)init;
- (id)meters;
- (id)newPowerSpectrumMeterWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)powerSpectrumMetersForCellularTapType:(id)arg1;
- (void)registerAudioPowerMeterSource:(id)arg1;
- (void)registerBlocksForService;
- (bool)registerListenerWithCellularTapType:(id)arg1 clientProcessId:(id)arg2 powerSpectrumMeter:(id)arg3 powerSpectrumMeterKey:(id)arg4 error:(id*)arg5;
- (bool)registerListenerWithStreamToken:(id)arg1 powerSpectrumKey:(id)arg2 powerSpectrumMeter:(id)arg3 error:(id*)arg4;
- (id)registerStreamTokenForCellularTapType:(id)arg1 clientProcessId:(int)arg2 error:(id*)arg3;
- (void)serverDidDie;
- (id)serviceHandlerPowerMeterInitializeWithArguments:(id)arg1 error:(id*)arg2;
- (id)serviceHandlerPowerMeterTerminateWithArguments:(id)arg1 error:(id*)arg2;
- (id)serviceHandlerRegisterCellularTapWithArguments:(id)arg1 error:(id*)arg2;
- (id)serviceHandlerRegisterListenerWithArguments:(id)arg1 error:(id*)arg2;
- (id)serviceHandlerUnregisterCellularTagWithArguments:(id)arg1 error:(id*)arg2;
- (id)serviceHandlerUnregisterListenerWithArguments:(id)arg1 error:(id*)arg2;
- (id)sources;
- (void)terminatePowerSpectrumMeter:(id)arg1;
- (void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)arg1;
- (bool)unregisterListenerWithCellularTapType:(id)arg1 powerSpectrumMeter:(id)arg2 error:(id*)arg3;

@end
