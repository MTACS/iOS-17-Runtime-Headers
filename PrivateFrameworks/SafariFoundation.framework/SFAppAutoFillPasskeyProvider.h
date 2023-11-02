
@interface SFAppAutoFillPasskeyProvider : NSObject {
    WBSAuthenticationServicesAgentProxy * _proxy;
}

- (void).cxx_destruct;
- (void)getAvailablePasskeysForAppWithAuditToken:(struct { unsigned int x1[8]; })arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getAvailablePasskeysForApplicationIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getAvailablePasskeysForWebPageIdentifier:(id)arg1 frameID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)userSelectedPasskey:(id)arg1 authenticatedLAContext:(id)arg2;
- (void)userSelectedPasskeyWithUserHandle:(id)arg1 authenticatedLAContext:(id)arg2;

@end
