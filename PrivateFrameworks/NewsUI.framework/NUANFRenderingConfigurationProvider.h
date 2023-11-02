
@interface NUANFRenderingConfigurationProvider : NSObject <SXRenderingConfigurationProvider> {
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
    SXRenderingConfiguration * _configuration;
}

@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (nonatomic, readonly) SXRenderingConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (id)configuration;
- (id)initWithAppConfigurationManager:(id)arg1;

@end
