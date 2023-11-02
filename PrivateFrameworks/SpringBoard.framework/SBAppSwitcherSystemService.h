
@interface SBAppSwitcherSystemService : NSObject <SBSystemServiceServerAppSwitcherDelegate> {
    SBCommandTabController * _commandTabController;
    SBRecentAppLayouts * _recentAppLayouts;
    FBServiceClientAuthenticator * _requestAppearanceForHiddenAppAuthenticator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRecentAppLayoutsController:(id)arg1 commandTabController:(id)arg2;
- (void)requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 forClient:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)systemServiceServer:(id)arg1 requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg2 assertionPort:(id)arg3 forClient:(id)arg4 withCompletion:(id /* block */)arg5;

@end
