
@protocol BLSHFlipbookPowerSavingProviding <NSObject>

@required

- (void)decrementDisablePowerSavingUsageCountForReason:(unsigned long long)arg1;
- (void)incrementDisablePowerSavingUsageCountForReason:(unsigned long long)arg1;
- (bool)isFlipbookPowerSavingEnabled;

@end
