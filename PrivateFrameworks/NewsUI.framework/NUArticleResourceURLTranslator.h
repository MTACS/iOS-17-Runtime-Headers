
@interface NUArticleResourceURLTranslator : NSObject <NUArticleResourceURLTranslator> {
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
}

@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (id)defaultURLForEndpoint:(long long)arg1;
- (long long)endpointForScheme:(id)arg1;
- (id)initWithAppConfigurationManager:(id)arg1;
- (id)translateFileURLForURL:(id)arg1;

@end
