
@protocol ENConfigurationManagerDelegate <NSObject>

@required

- (void)configurationManager:(ENConfigurationManager *)arg1 didResolveCurrentRegion:(bool)arg2;
- (void)configurationManager:(ENConfigurationManager *)arg1 errorDetected:(unsigned int)arg2;
- (void)configurationManager:(ENConfigurationManager *)arg1 exposureNotificationRegionConfigurationChanged:(ENRegionConfiguration *)arg2;
- (void)configurationManager:(ENConfigurationManager *)arg1 exposureNotificationRegionConfigurationRemovedForRegion:(ENRegion *)arg2;

@end
