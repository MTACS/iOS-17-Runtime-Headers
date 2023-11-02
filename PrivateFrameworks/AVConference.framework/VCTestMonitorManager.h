
@interface VCTestMonitorManager : NSObject {
    NSString * _emulatedNetworkConfigPath;
    double  _emulatedRxPLR;
    bool  _enableAudioPowerSpectrumReport;
    bool  _enableLoopbackInterface;
    bool  _enableOneToOneMode;
    bool  _forceNetworkCellular;
    int  _forcedCapBitrate;
    int  _forcedTargetBitrate;
    NSNumber * _initialMemoryUsage;
    bool  _toneInjectionEnabled;
    NSObject<OS_dispatch_queue> * _xpcCallbackQueue;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (nonatomic, retain) NSString *emulatedNetworkConfigPath;
@property (nonatomic) double emulatedRxPLR;
@property (nonatomic) bool enableAudioPowerSpectrumReport;
@property (nonatomic) bool enableLoopbackInterface;
@property (nonatomic) bool enableOneToOneMode;
@property bool forceNetworkCellular;
@property (nonatomic) int forcedCapBitrate;
@property (nonatomic) int forcedTargetBitrate;
@property bool toneInjectionEnabled;

+ (id)sharedManager;

- (void)dealloc;
- (id)emulatedNetworkConfigPath;
- (double)emulatedRxPLR;
- (bool)enableAudioPowerSpectrumReport;
- (bool)enableLoopbackInterface;
- (bool)enableOneToOneMode;
- (bool)forceNetworkCellular;
- (int)forcedCapBitrate;
- (int)forcedTargetBitrate;
- (id)init;
- (void)registerBlocksForService;
- (void)reportSessionMediaDaemonStats:(id)arg1;
- (void)setEmulatedNetworkConfigPath:(id)arg1;
- (void)setEmulatedRxPLR:(double)arg1;
- (void)setEnableAudioPowerSpectrumReport:(bool)arg1;
- (void)setEnableLoopbackInterface:(bool)arg1;
- (void)setEnableOneToOneMode:(bool)arg1;
- (void)setForceNetworkCellular:(bool)arg1;
- (void)setForcedCapBitrate:(int)arg1;
- (void)setForcedTargetBitrate:(int)arg1;
- (void)setToneInjectionEnabled:(bool)arg1;
- (bool)toneInjectionEnabled;

@end
