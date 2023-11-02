
@interface SUDefaultWiFiOnlyDownloadPolicy : SUDefaultDownloadPolicy

+ (unsigned long long)wifiOnlyPeriodInDaysForUpdate:(id)arg1;

- (bool)allowExpensiveNetwork;
- (id)initWithDescriptor:(id)arg1;
- (bool)isDownloadAllowableForCellular;

@end
