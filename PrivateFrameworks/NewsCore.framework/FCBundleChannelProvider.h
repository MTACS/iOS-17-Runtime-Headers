
@interface FCBundleChannelProvider : NSObject <FCAppActivityObserving, FCBundleChannelProviderType> {
    NFUnfairLock * _accessLock;
    NSArray * _bundleChannelIDs;
    NSString * _bundleChannelIDsVersion;
    <FCCoreConfigurationManager> * _configurationManager;
    <FCContentContext> * _contentContext;
    FCKeyValueStore * _localStore;
    <FCBundleChannelProviderDelegate> * delegate;
}

@property (nonatomic, copy) NSArray *bundleChannelIDs;
@property (nonatomic, copy) NSString *bundleChannelIDsVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCBundleChannelProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityObservingApplicationWindowWillBecomeForeground;
- (id)bundleChannelIDs;
- (id)bundleChannelIDsVersion;
- (id)delegate;
- (void)loadInitialBundleChannelIDsWithCompletion:(id /* block */)arg1;
- (void)setBundleChannelIDs:(id)arg1;
- (void)setBundleChannelIDsVersion:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
