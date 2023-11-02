
@interface CLFindMyAccessoryManager : NSObject {
    CLFindMyAccessoryFragmentAccumulator * _accumulator;
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { 
        struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { 
            struct CLConnectionClient {} *__value_; 
        } __ptr_; 
    }  _connection;
    <CLFindMyAccessoryManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (nonatomic) <CLFindMyAccessoryManagerDelegate> *delegate;

+ (id)checkAvailabilityForPairedOwnerInformationControlPointMessages:(id)arg1 messageName:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg2;
+ (id)errorFromFragmentationStatus:(unsigned long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureRangingOnDevice:(id)arg1 macAddress:(id)arg2 countryCode:(unsigned char)arg3 uwbChannel:(unsigned char)arg4 acqPreamble:(unsigned char)arg5 trackingPreamble:(unsigned char)arg6 interval:(unsigned short)arg7;
- (void)connectDevice:(id)arg1;
- (void)dealloc;
- (void)deinitRangingOnDevice:(id)arg1;
- (id)delegate;
- (void)disconnectDevice:(id)arg1;
- (void)dumpLogDataOfType:(unsigned long long)arg1 fromDevice:(id)arg2;
- (void)fetchAISForTAUnknownBeacon:(id)arg1 macAddress:(id)arg2 deviceType:(id)arg3;
- (void)fetchAccelerometerOrientationModeConfigurationForDevice:(id)arg1;
- (void)fetchAccelerometerSlopeModeConfigurationForDevice:(id)arg1;
- (void)fetchBatteryStatusForDevice:(id)arg1;
- (void)fetchConnectionStateForDevice:(id)arg1;
- (void)fetchFirmwareVersionFromDevice:(id)arg1;
- (void)fetchHawkeyeAISAccessoryCapabilities:(id)arg1;
- (void)fetchHawkeyeAISAccessoryCategory:(id)arg1;
- (void)fetchHawkeyeAISBatteryType:(id)arg1;
- (void)fetchHawkeyeAISFindMyVersion:(id)arg1;
- (void)fetchHawkeyeAISManufacturerName:(id)arg1;
- (void)fetchHawkeyeAISModelColorCode:(id)arg1;
- (void)fetchHawkeyeAISModelName:(id)arg1;
- (void)fetchHawkeyeAISProductData:(id)arg1;
- (void)fetchHawkeyeCurrentPrimaryKey:(id)arg1;
- (void)fetchHawkeyeSerialNumber:(id)arg1;
- (void)fetchHawkeyeiCloudIdentifier:(id)arg1;
- (void)fetchStatusOfUTEnablementRequirements;
- (void)fetchTxPower:(id)arg1;
- (void)fetchTxPowerFromDevice:(id)arg1 asOwner:(bool)arg2;
- (void)fetchUserStatsWithPersistence:(bool)arg1 fromDevice:(id)arg2;
- (void)forceSurfaceStagedDetections:(id)arg1 deviceType:(id)arg2;
- (void)getMultiPartStatusFromDevice:(id)arg1;
- (void)getMultiStatusFromDevice:(id)arg1;
- (void)handleInterruption;
- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)induceCrashOnDevice:(id)arg1;
- (id)init;
- (void)initAccumulator;
- (void)initRangingOnDevice:(id)arg1 macAddress:(id)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)performAggressiveScanForDurianService;
- (void)performAggressiveScanForSeparationAlerts;
- (void)performAggressiveScanForTrackingAvoidance;
- (void)performHELEScanForTrackingAvoidance;
- (void)performLongAggressiveScanForSeparationAlerts;
- (void)prepareRangingOnDevice:(id)arg1;
- (void)rollWildKeyOnDevice:(id)arg1;
- (void)scanForHELE;
- (void)scanForNearbyDevicesLong;
- (void)scanForNearbyOwner;
- (void)sendMessage:(const char *)arg1;
- (void)sendMessage:(const char *)arg1 withPayload:(id)arg2;
- (void)setAccelerometerOrientationModeConfiguration:(id)arg1 forDevice:(id)arg2;
- (void)setAccelerometerSlopeModeConfiguration:(id)arg1 forDevice:(id)arg2;
- (void)setBatteryStatus:(unsigned long long)arg1 forDevice:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDeviceType:(unsigned char)arg1 onDevice:(id)arg2;
- (void)setHawkeyeTestMode:(int)arg1 forDevice:(id)arg2;
- (void)setHawkeyeUTMotionConfigWithSeparatedUTTimeoutSeconds:(unsigned int)arg1 separatedUTBackoffTimeoutSeconds:(unsigned int)arg2 forDevice:(id)arg3;
- (void)setKeyRollInterval:(unsigned int)arg1 onDevice:(id)arg2;
- (void)setNearOwnerTimeout:(unsigned short)arg1 onDevice:(id)arg2;
- (void)setObfuscatedIdentifier:(id)arg1 onDevice:(id)arg2;
- (void)setUnauthorizedPlaySoundRateLimit:(bool)arg1 forDevice:(id)arg2;
- (void)setWildConfiguration:(id)arg1 onDevice:(id)arg2;
- (void)stageTADetection:(id)arg1 deviceType:(id)arg2;
- (void)startAggressiveAdvertisingOnDevice:(id)arg1 withTimeout:(unsigned int)arg2;
- (void)startEventCounterForDevice:(id)arg1;
- (void)startMonitoringForAvengerAdvertisementsForBTFinding;
- (void)startPlayingSoundSequence:(id)arg1 onDevice:(id)arg2;
- (void)startPlayingUnauthorizedSoundOnDevice:(id)arg1;
- (void)startPlayingUnauthorizedSoundSequence:(id)arg1 onDevice:(id)arg2;
- (void)startRangingOnDevice:(id)arg1 targetEventCounter:(unsigned short)arg2;
- (void)startUnauthorizedAggressiveAdvertisingOnDevice:(id)arg1;
- (void)stopAggressiveAdvertisingOnDevice:(id)arg1;
- (void)stopEventCounterForDevice:(id)arg1;
- (void)stopLongAggressiveScanForSeparationAlerts;
- (void)stopMonitoringForAvengerAdvertisementsForBTFinding;
- (void)stopPlayingSoundOnDevice:(id)arg1;
- (void)stopPlayingUnauthorizedSoundOnDevice:(id)arg1;
- (void)stopRangingOnDevice:(id)arg1;
- (void)stopScanForNearbyDevicesLong;
- (void)unpairFromDevice:(id)arg1;
- (void)unpairFromDeviceWithAddress:(id)arg1;

@end
