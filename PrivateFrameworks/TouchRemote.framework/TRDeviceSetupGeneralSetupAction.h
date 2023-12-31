
@interface TRDeviceSetupGeneralSetupAction : TRDeviceSetupAction

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (getter=isDiagnosticsEnabled, nonatomic, readonly) bool diagnosticsEnabled;
@property (nonatomic, readonly, copy) NSString *homeSharingGroupID;
@property (nonatomic, readonly, copy) NSString *homeSharingID;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly) bool rememberPassword;

- (id)countryCode;
- (id)homeSharingGroupID;
- (id)homeSharingID;
- (id)init;
- (id)initWithCountryCode:(id)arg1 language:(id)arg2 homeSharingID:(id)arg3 homeSharingGroupID:(id)arg4 isDiagnosticsEnabled:(bool)arg5 rememberPassword:(bool)arg6;
- (bool)isDiagnosticsEnabled;
- (id)language;
- (bool)rememberPassword;

@end
