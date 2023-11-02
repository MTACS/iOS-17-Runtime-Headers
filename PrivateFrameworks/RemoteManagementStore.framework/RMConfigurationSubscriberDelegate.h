
@interface RMConfigurationSubscriberDelegate : NSObject {
    NSDictionary * _applicatorClassNameByConfigurationType;
    NSObject<OS_dispatch_queue> * _applicatorQueue;
    NSConditionLock * _applyLock;
}

@property (nonatomic, readonly, copy) NSDictionary *applicatorClassNameByConfigurationType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *applicatorQueue;

+ (id)sharedDelegateWithApplicators:(id)arg1;

- (void).cxx_destruct;
- (id)_configurationsByApplicatorClassNameForConfigurationsByType:(id)arg1;
- (void)_sendConfigurationUIForConfigurationReference:(id)arg1 visible:(bool)arg2 configurationUI:(id)arg3;
- (id)applicatorClassNameByConfigurationType;
- (id)applicatorQueue;
- (void)didFailToFetchConfigurationsWithTypes:(id)arg1 scope:(long long)arg2 error:(id)arg3;
- (void)didFetchConfigurationsByType:(id)arg1 storesByIdentifier:(id)arg2 scope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)didFetchConfigurationsWithMissingUIByType:(id)arg1 storesByIdentifier:(id)arg2 scope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithApplicators:(id)arg1;
- (void)setApplicatorQueue:(id)arg1;

@end
