
@interface FAURLConfiguration : NSObject <FAURLProvider>

- (id)URLForEndpoint:(id)arg1;
- (void)URLForEndpoint:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchAAURLConfigurationWithCompletion:(id /* block */)arg1;
- (id)groupKitConfiguration;
- (id)groupKitMetricsRateLimit;

@end
