
@interface CEMApplicationSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowActivityContinuation;
    NSNumber * _payloadAllowAutomaticAppUpdates;
    NSNumber * _payloadAllowAutomaticAppUpdatesModification;
    NSNumber * _payloadAllowDiagnosticSubmission;
    NSNumber * _payloadAllowDiagnosticSubmissionModification;
    NSNumber * _payloadAllowEnterpriseAppTrust;
    NSNumber * _payloadAppAnalytics;
    NSArray * _payloadAutonomousSingleAppModePermittedAppIDs;
    NSNumber * _payloadDiagnosticSubmission;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowActivityContinuation;
@property (nonatomic, copy) NSNumber *payloadAllowAutomaticAppUpdates;
@property (nonatomic, copy) NSNumber *payloadAllowAutomaticAppUpdatesModification;
@property (nonatomic, copy) NSNumber *payloadAllowDiagnosticSubmission;
@property (nonatomic, copy) NSNumber *payloadAllowDiagnosticSubmissionModification;
@property (nonatomic, copy) NSNumber *payloadAllowEnterpriseAppTrust;
@property (nonatomic, copy) NSNumber *payloadAppAnalytics;
@property (nonatomic, copy) NSArray *payloadAutonomousSingleAppModePermittedAppIDs;
@property (nonatomic, copy) NSNumber *payloadDiagnosticSubmission;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withDiagnosticSubmission:(id)arg2 withAppAnalytics:(id)arg3 withAllowDiagnosticSubmission:(id)arg4 withAutonomousSingleAppModePermittedAppIDs:(id)arg5 withAllowActivityContinuation:(id)arg6 withAllowEnterpriseAppTrust:(id)arg7 withAllowDiagnosticSubmissionModification:(id)arg8 withAllowAutomaticAppUpdates:(id)arg9 withAllowAutomaticAppUpdatesModification:(id)arg10;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAllowActivityContinuation;
- (id)payloadAllowAutomaticAppUpdates;
- (id)payloadAllowAutomaticAppUpdatesModification;
- (id)payloadAllowDiagnosticSubmission;
- (id)payloadAllowDiagnosticSubmissionModification;
- (id)payloadAllowEnterpriseAppTrust;
- (id)payloadAppAnalytics;
- (id)payloadAutonomousSingleAppModePermittedAppIDs;
- (id)payloadDiagnosticSubmission;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowActivityContinuation:(id)arg1;
- (void)setPayloadAllowAutomaticAppUpdates:(id)arg1;
- (void)setPayloadAllowAutomaticAppUpdatesModification:(id)arg1;
- (void)setPayloadAllowDiagnosticSubmission:(id)arg1;
- (void)setPayloadAllowDiagnosticSubmissionModification:(id)arg1;
- (void)setPayloadAllowEnterpriseAppTrust:(id)arg1;
- (void)setPayloadAppAnalytics:(id)arg1;
- (void)setPayloadAutonomousSingleAppModePermittedAppIDs:(id)arg1;
- (void)setPayloadDiagnosticSubmission:(id)arg1;

@end
