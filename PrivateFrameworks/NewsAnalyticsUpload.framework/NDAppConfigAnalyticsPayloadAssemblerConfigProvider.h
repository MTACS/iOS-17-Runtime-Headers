
@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider> {
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
}

@property (nonatomic, retain) <FCNewsAppConfigurationManager> *appConfigurationManager;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (void)fetchConfigWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithAppConfigurationManager:(id)arg1;
- (void)setAppConfigurationManager:(id)arg1;

@end
