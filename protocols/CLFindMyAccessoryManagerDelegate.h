
@protocol CLFindMyAccessoryManagerDelegate <NSObject>

@required

- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFailWithError:(NSError *)arg2 forDevice:(NSUUID *)arg3;

@optional

- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didCompleteAggressiveAdvertisingOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didCompleteHawkeyeTaskWithOpcode:(unsigned short)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didCompletePlayingSoundOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didCompletePlayingUnauthorizedSoundOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didCompleteRangingOnDevice:(NSUUID *)arg2 withStatus:(unsigned int)arg3 endReason:(unsigned char)arg4 error:(NSError *)arg5;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didConfigureRangingOnDevice:(NSUUID *)arg2 withStatus:(unsigned int)arg3 error:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didConnectDevice:(NSUUID *)arg2;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didConnectDevice:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didDeinitRangingOnDevice:(NSUUID *)arg2 withStatus:(unsigned int)arg3 error:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didDetectCrashOnDevice:(NSUUID *)arg2;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didDisconnectDevice:(NSUUID *)arg2;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didDumpLogData:(NSData *)arg2 ofType:(unsigned long long)arg3 fromDevice:(NSUUID *)arg4 withError:(NSError *)arg5;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchBatteryStatus:(unsigned long long)arg2 forDevice:(NSUUID *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchBatteryStatus:(unsigned long long)arg2 forDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchConnectionState:(unsigned long long)arg2 forDevice:(NSUUID *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchFirmwareVersion:(NSData *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchHawkeyeAISAccessoryCapabilities:(NSData *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchHawkeyeAISAccessoryCategory:(NSData *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchHawkeyeAISBatteryType:(NSData *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchHawkeyeAISFindMyVersion:(unsigned int)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchHawkeyeAISManufacturerName:(NSString *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchHawkeyeAISModelColorCode:(NSData *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchHawkeyeAISModelName:(NSString *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchHawkeyeAISProductData:(NSData *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchHawkeyeCurrentPrimaryKey:(NSData *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchHawkeyeSerialNumber:(NSData *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchHawkeyeiCloudIdentifier:(NSData *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchStatusOfUTEnablementRequirementsWithStatus:(NSDictionary *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchTxPower:(NSNumber *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchUserStats:(CLFindMyAccessoryUserStats *)arg2 forDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didFetchUserStats:(NSData *)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didGetMultiStatus:(unsigned long long)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didHaveRangingMovementOnDevice:(NSUUID *)arg2;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didInitRangingOnDevice:(NSUUID *)arg2 withStatus:(unsigned int)arg3 error:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didObserveAdvertisementWithDate:(NSDate *)arg2 address:(NSData *)arg3 advertisementData:(NSData *)arg4 status:(unsigned char)arg5 rssi:(long long)arg6 reserved:(NSData *)arg7 uuid:(NSUUID *)arg8 ownershipType:(unsigned long long)arg9 channel:(unsigned long long)arg10;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didPlayUnauthorizedSoundOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didPrepareRangingOnDevice:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didReceiveGroupRelationStatus:(unsigned char)arg2 maintenanceStatus:(unsigned char)arg3 fromDevice:(NSUUID *)arg4 withError:(NSError *)arg5;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didReceiveKeyRollIndex:(unsigned int)arg2 fromDevice:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didReceiveRangingErrorFromDevice:(NSUUID *)arg2 withStatus:(unsigned int)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didReceiveRangingTimestampFromDevice:(NSUUID *)arg2 status:(unsigned short)arg3 rtt:(unsigned long long)arg4 tat:(unsigned long long)arg5 cycleIndex:(unsigned short)arg6;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didRollWildKeyOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didSetBatteryStatusForDevice:(NSUUID *)arg2;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didSetDeviceTypeOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didSetHawkeyeUTMotionConfigForDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didSetNearOwnerTimeoutOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didSetObfuscatedIdentifierOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didSetUnauthorizedPlaySoundRateLimitFromDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didSetWildConfigurationOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didStartAggressiveAdvertisingOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didStartPlayingSoundOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didStartPlayingUnauthorizedSoundOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didStartRangingOnDevice:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didStartUnauthorizedAggressiveAdvertisingOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didStopAggressiveAdvertisingOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didStopPlayingSoundOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didStopPlayingUnauthorizedSoundOnDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)findMyAccessoryManager:(CLFindMyAccessoryManager *)arg1 didUnpairFromDevice:(NSUUID *)arg2 withError:(NSError *)arg3;

@end
