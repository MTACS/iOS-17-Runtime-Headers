
@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy

- (bool)allowExpensiveNetwork;
- (bool)batteryPolicySatisfied;
- (id)computAutoDownloadEndDateFromDate:(id)arg1;
- (id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1;
- (id)createSpaceOptions;
- (id)initWithDescriptor:(id)arg1;
- (bool)is5GDownloadAllowed;
- (bool)isDownloadAllowableForCellular;
- (bool)isPowerRequired;
- (id)minimumPowerRequirement;
- (unsigned long long)wifiOnlyPeriodInDays;

@end
