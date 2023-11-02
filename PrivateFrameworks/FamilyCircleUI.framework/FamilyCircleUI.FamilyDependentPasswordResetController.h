
@interface FamilyCircleUI.FamilyDependentPasswordResetController : NSObject <RemoteUIControllerDelegate> {
    void dependentAltDSID;
    void familyDependentPasswordResetApi;
    void guardianGSTokenErrorHeader;
    void guardianGSTokenErrorHeaderValue;
    void hearbeatTokenKey;
    void parentAccount;
    void parentAltDSID;
    void ruiController;
    void serverHookHandler;
    void serverResourceLoader;
    void sessionConfiguration;
    void tokens;
}

- (void).cxx_destruct;
- (id)init;
- (void)remoteUIController:(id)arg1 didPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 forRequest:(id)arg3;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(id /* block */)arg4;

@end
