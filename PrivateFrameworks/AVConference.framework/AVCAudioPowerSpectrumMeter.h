
@interface AVCAudioPowerSpectrumMeter : NSObject <VCAudioPowerSpectrumMeterDelegate> {
    NSSet * _allowListedXPCObjects;
    unsigned short  _audioSpectrumBinCount;
    double  _audioSpectrumRefreshRate;
    AVConferenceXPCClient * _connection;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    VCAudioPowerSpectrumMeter * _powerSpectrumMeter;
    unsigned int  _sessionToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <AVCAudioPowerSpectrumMeterDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int sessionToken;
@property (readonly) Class superclass;

+ (unsigned int)cellularTapTypeWithClientCellularTapType:(unsigned int)arg1;

- (void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2;
- (void)cleanupDelegate;
- (void)cleanupPowerSpectrumMeter;
- (void)cleanupXPCConnection;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)deregisterBlocksForService;
- (id)initWithConfig:(struct _AVCAudioPowerSpectrumMeterConfig { long long x1; unsigned int x2; unsigned short x3; double x4; })arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)registerBlocksForNotifications;
- (bool)registerPowerSpectrumForCellularTapType:(unsigned int)arg1 error:(id*)arg2;
- (void)registerPowerSpectrumForStreamToken:(long long)arg1;
- (unsigned int)sessionToken;
- (bool)setupPowerSpectrumMeter;
- (bool)setupXPCConnection;
- (bool)storeDelegate:(id)arg1 delegateQueue:(id)arg2;
- (bool)unregisterPowerSpectrumForCellularTapType:(unsigned int)arg1 error:(id*)arg2;
- (void)unregisterPowerSpectrumForStreamToken:(long long)arg1;

@end
