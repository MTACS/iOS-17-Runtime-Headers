
@interface NewsPersonalization.XavierEventProcessor : NSObject <FCNewsAppConfigurationObserving> {
    void _configuration;
    void actionTranslators;
    void jsonDecoder;
    void personalizer;
    void sessionTracker;
}

- (void).cxx_destruct;
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;
- (id)init;

@end
