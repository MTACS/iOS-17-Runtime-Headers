
@interface NewsPersonalization.NewsAppConfigurationManager : NSObject <FCNewsAppConfigurationObserving> {
    void appConfigurationManager;
    void lock;
    void onChangeBlocks;
    void transform;
}

- (void).cxx_destruct;
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;
- (id)init;

@end
