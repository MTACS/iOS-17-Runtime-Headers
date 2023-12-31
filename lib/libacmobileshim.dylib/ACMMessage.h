
@interface ACMMessage : ACFMessage

@property (nonatomic, retain) NSNumber *certificateDuration;

- (id)alertViewPrompt;
- (id)app2SVRequired;
- (id)appID;
- (id)appIDKey;
- (id)applicationName;
- (bool)automaticallyCancelWhenSwitchingToBackground;
- (bool)canUseTouchID;
- (bool)cancelAllowed;
- (id)certificateDuration;
- (bool)disableSingleSignOn;
- (bool)doNotSaveHSASessionInKeychain;
- (id)encryptedContent;
- (id)encryptedContentHMAC;
- (void)forwardInvocation:(id)arg1;
- (bool)generatedWithTouchID;
- (id)idleExpirationTimeout;
- (bool)ignoreHSASessionInKeychain;
- (bool)isInApp2SVEnabledOption;
- (id)lavaFailoverAuthenticateAPIAddress;
- (id)lavaFailoverRetrieveSaltAPIAddress;
- (bool)lavaForceUseFailoverServerAddress;
- (bool)managerSignIn;
- (id)managerSignInPromptString;
- (id)personDSID;
- (id)personID;
- (id)personId;
- (id)principal;
- (id)publicKeyVersion;
- (id)rawResponseData;
- (id)realm;
- (id)serverResponseTimeout;
- (id)serviceApplicationId;
- (id)serviceApplicationIdKey;
- (id)serviceHost;
- (id)serviceName;
- (id)serviceTicketString;
- (id)sessionToken;
- (void)setAlertViewPrompt:(id)arg1;
- (void)setApp2SVRequired:(id)arg1;
- (void)setAppID:(id)arg1;
- (void)setAppIDKey:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setAutomaticallyCancelWhenSwitchingToBackground:(bool)arg1;
- (void)setCanUseTouchID:(bool)arg1;
- (void)setCancelAllowed:(bool)arg1;
- (void)setCertificateDuration:(id)arg1;
- (void)setDisableSingleSignOn:(bool)arg1;
- (void)setDoNotSaveHSASessionInKeychain:(bool)arg1;
- (void)setEncryptedContent:(id)arg1;
- (void)setEncryptedContentHMAC:(id)arg1;
- (void)setGeneratedWithTouchID:(bool)arg1;
- (void)setIdleExpirationTimeout:(id)arg1;
- (void)setIgnoreHSASessionInKeychain:(bool)arg1;
- (void)setIsInApp2SVEnabledOption:(bool)arg1;
- (void)setLavaFailoverAuthenticateAPIAddress:(id)arg1;
- (void)setLavaFailoverRetrieveSaltAPIAddress:(id)arg1;
- (void)setLavaForceUseFailoverServerAddress:(bool)arg1;
- (void)setManagerSignIn:(bool)arg1;
- (void)setManagerSignInPromptString:(id)arg1;
- (void)setPersonDSID:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setPersonId:(id)arg1;
- (void)setPrincipal:(id)arg1;
- (void)setPublicKeyVersion:(id)arg1;
- (void)setRawResponseData:(id)arg1;
- (void)setRealm:(id)arg1;
- (void)setServerResponseTimeout:(id)arg1;
- (void)setServiceApplicationId:(id)arg1;
- (void)setServiceApplicationIdKey:(id)arg1;
- (void)setServiceHost:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setServiceTicketString:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setShouldUseHSAToken:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setUseAlertView:(bool)arg1;
- (void)setUser2SVEnrolled:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserNameFieldEditable:(bool)arg1;
- (id)shouldUseHSAToken;
- (id)token;
- (bool)useAlertView;
- (id)user2SVEnrolled;
- (id)userInfo;
- (id)userName;
- (bool)userNameFieldEditable;

@end
