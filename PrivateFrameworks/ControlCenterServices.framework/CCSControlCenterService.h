
@interface CCSControlCenterService : NSObject {
    CCSRemoteServiceConnection * _connection;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(id /* block */)arg1;
- (void)requestDisableModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestEnableModuleWithIdentifier:(id)arg1 force:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setVisibility:(bool)arg1 forModuleWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
