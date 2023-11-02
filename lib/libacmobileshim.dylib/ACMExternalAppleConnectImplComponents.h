
@interface ACMExternalAppleConnectImplComponents : ACMAppleConnectImplComponents

+ (id)components;

- (id)createAppleConnectImpl;
- (id)createAppleConnectImplWithMasterObject:(id)arg1;
- (id)createAuthenticationRequest;
- (id)createHandlerWithClass:(Class)arg1 context:(id)arg2;
- (id)preferences;
- (id)twoSVController;
- (id)uiController;
- (bool)uiControllerLoaded;
- (void)unloadUIController;

@end
