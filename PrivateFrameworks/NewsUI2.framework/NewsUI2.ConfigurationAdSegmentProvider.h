
@interface NewsUI2.ConfigurationAdSegmentProvider : NSObject <FCNewsAppConfigurationObserving> {
    void appConfigurationManager;
    void needsUpdate;
}

- (void).cxx_destruct;
- (void)configurationManagerSignificantAppConfigChange:(id)arg1;
- (id)init;

@end
