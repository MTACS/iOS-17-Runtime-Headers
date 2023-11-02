
@interface SAIntentGroupSiriKitAppSelectionState : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *appConfirmationState;
@property (nonatomic, copy) NSString *appCorrectionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *eligibleApps;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SASyncAppIdentifyingInfo *requestedApp;
@property (readonly) Class superclass;

+ (id)siriKitAppSelectionState;
+ (id)siriKitAppSelectionStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)appConfirmationState;
- (id)appCorrectionState;
- (id)eligibleApps;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)requestedApp;
- (void)setAppConfirmationState:(id)arg1;
- (void)setAppCorrectionState:(id)arg1;
- (void)setEligibleApps:(id)arg1;
- (void)setRequestedApp:(id)arg1;

@end
