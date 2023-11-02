
@interface ACMExternalAuthenticationRequestImpl : ACMBaseAuthenticationRequestImpl <ACMExternalAuthenticationRequest>

@property (retain) NSString *alertViewPrompt;
@property (nonatomic, retain) NSNumber *appID;
@property (nonatomic, retain) NSString *appIDKey;
@property bool automaticallyCancelWhenSwitchingToBackground;
@property bool canUseTouchID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *realm;
@property (nonatomic, retain) NSNumber *serverResponseTimeout;
@property (readonly) Class superclass;
@property bool useAlertView;
@property (nonatomic, retain) NSString *userName;
@property bool userNameFieldEditable;

- (id)init;

@end
