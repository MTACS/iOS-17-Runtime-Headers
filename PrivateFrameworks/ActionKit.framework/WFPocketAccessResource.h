
@interface WFPocketAccessResource : WFAccessResource <PocketAPIDelegate> {
    id /* block */  _loginHandler;
    PocketAPI * _pocket;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ loginHandler;
@property (nonatomic, retain) PocketAPI *pocket;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedAppIdentifier;
- (bool)canLogOut;
- (void)logOut;
- (id /* block */)loginHandler;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)pocket;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)pocketAPI:(id)arg1 requestedOpenURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)pocketAPILoggedIn:(id)arg1;
- (id)pocketCallbackScheme;
- (id)protectedResourceDescription;
- (void)refreshAvailabilityWithNotification:(bool)arg1;
- (id)resourceName;
- (void)setLoginHandler:(id /* block */)arg1;
- (void)setPocket:(id)arg1;
- (unsigned long long)status;
- (id)username;

@end
