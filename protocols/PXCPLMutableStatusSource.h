
@protocol PXCPLMutableStatusSource <NSObject>

@required

- (NSDate *)exitDate;
- (bool)isCapturingSnapshot;
- (bool)isCellularDataDisabled;
- (bool)isClientNotAuthenticated;
- (bool)isClientVersionTooOld;
- (bool)isExceedingBatteryQuota;
- (bool)isExceedingCellularQuota;
- (bool)isExceedingQuota;
- (bool)isExceedingSharedLibraryQuota;
- (bool)isInAirplaneMode;
- (bool)isInHeavyThermalPressure;
- (bool)isInLowBattery;
- (bool)isInLowDataMode;
- (bool)isInLowPowerMode;
- (bool)isInModerateThermalPressure;
- (bool)isInPoorNetworkConnection;
- (bool)isLowDiskSpace;
- (bool)isOffline;
- (bool)isOptimizingSystemPerformance;
- (bool)isUpgradeSuggestedToAccessAllPhotos;
- (bool)isVeryLowDiskSpace;
- (unsigned long long)numberOfOtherAssets;
- (unsigned long long)numberOfPhotoAssets;
- (unsigned long long)numberOfVideoAssets;
- (void)setExitDate:(NSDate *)arg1;
- (void)setIsCapturingSnapshot:(bool)arg1;
- (void)setIsCellularDataDisabled:(bool)arg1;
- (void)setIsClientNotAuthenticated:(bool)arg1;
- (void)setIsClientVersionTooOld:(bool)arg1;
- (void)setIsExceedingBatteryQuota:(bool)arg1;
- (void)setIsExceedingCellularQuota:(bool)arg1;
- (void)setIsExceedingQuota:(bool)arg1;
- (void)setIsExceedingSharedLibraryQuota:(bool)arg1;
- (void)setIsInAirplaneMode:(bool)arg1;
- (void)setIsInHeavyThermalPressure:(bool)arg1;
- (void)setIsInLowBattery:(bool)arg1;
- (void)setIsInLowDataMode:(bool)arg1;
- (void)setIsInLowPowerMode:(bool)arg1;
- (void)setIsInModerateThermalPressure:(bool)arg1;
- (void)setIsInPoorNetworkConnection:(bool)arg1;
- (void)setIsLowDiskSpace:(bool)arg1;
- (void)setIsOffline:(bool)arg1;
- (void)setIsOptimizingSystemPerformance:(bool)arg1;
- (void)setIsUpgradeSuggestedToAccessAllPhotos:(bool)arg1;
- (void)setIsVeryLowDiskSpace:(bool)arg1;
- (void)setNumberOfOtherAssets:(unsigned long long)arg1;
- (void)setNumberOfPhotoAssets:(unsigned long long)arg1;
- (void)setNumberOfVideoAssets:(unsigned long long)arg1;
- (void)setSharedLibraryExitingWithNumberOfAssetsRemaining:(unsigned long long)arg1;
- (void)setSyncDate:(NSDate *)arg1;
- (unsigned long long)sharedLibraryExitingWithNumberOfAssetsRemaining;
- (NSDate *)syncDate;

@end
