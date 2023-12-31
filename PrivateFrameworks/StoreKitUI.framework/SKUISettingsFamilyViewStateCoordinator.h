
@interface SKUISettingsFamilyViewStateCoordinator : NSObject {
    id /* block */  _completionBlock;
}

- (void).cxx_destruct;
- (void)_checkSubscriptionStatus:(id)arg1 isFinal:(bool)arg2 error:(id)arg3;
- (void)_getSubscriptionStatus;
- (void)_returnFamilyViewState:(long long)arg1;
- (void)checkSettingsFamilyViewStateWithBlock:(id /* block */)arg1;

@end
