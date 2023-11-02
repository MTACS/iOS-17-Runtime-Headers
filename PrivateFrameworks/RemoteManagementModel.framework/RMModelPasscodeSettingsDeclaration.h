
@interface RMModelPasscodeSettingsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSNumber * _payloadChangeAtNextAuth;
    RMModelPasscodeSettingsDeclaration_CustomRegex * _payloadCustomRegex;
    NSNumber * _payloadFailedAttemptsResetInMinutes;
    NSNumber * _payloadMaximumFailedAttempts;
    NSNumber * _payloadMaximumGracePeriodInMinutes;
    NSNumber * _payloadMaximumInactivityInMinutes;
    NSNumber * _payloadMaximumPasscodeAgeInDays;
    NSNumber * _payloadMinimumComplexCharacters;
    NSNumber * _payloadMinimumLength;
    NSNumber * _payloadPasscodeReuseLimit;
    NSNumber * _payloadRequireAlphanumericPasscode;
    NSNumber * _payloadRequireComplexPasscode;
    NSNumber * _payloadRequirePasscode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadChangeAtNextAuth;
@property (nonatomic, copy) RMModelPasscodeSettingsDeclaration_CustomRegex *payloadCustomRegex;
@property (nonatomic, copy) NSNumber *payloadFailedAttemptsResetInMinutes;
@property (nonatomic, copy) NSNumber *payloadMaximumFailedAttempts;
@property (nonatomic, copy) NSNumber *payloadMaximumGracePeriodInMinutes;
@property (nonatomic, copy) NSNumber *payloadMaximumInactivityInMinutes;
@property (nonatomic, copy) NSNumber *payloadMaximumPasscodeAgeInDays;
@property (nonatomic, copy) NSNumber *payloadMinimumComplexCharacters;
@property (nonatomic, copy) NSNumber *payloadMinimumLength;
@property (nonatomic, copy) NSNumber *payloadPasscodeReuseLimit;
@property (nonatomic, copy) NSNumber *payloadRequireAlphanumericPasscode;
@property (nonatomic, copy) NSNumber *payloadRequireComplexPasscode;
@property (nonatomic, copy) NSNumber *payloadRequirePasscode;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 requirePasscode:(id)arg2 requireAlphanumericPasscode:(id)arg3 requireComplexPasscode:(id)arg4 minimumLength:(id)arg5 minimumComplexCharacters:(id)arg6 maximumFailedAttempts:(id)arg7 failedAttemptsResetInMinutes:(id)arg8 maximumGracePeriodInMinutes:(id)arg9 maximumInactivityInMinutes:(id)arg10 maximumPasscodeAgeInDays:(id)arg11 passcodeReuseLimit:(id)arg12 changeAtNextAuth:(id)arg13 customRegex:(id)arg14;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (void)combineWithOther:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadChangeAtNextAuth;
- (id)payloadCustomRegex;
- (id)payloadFailedAttemptsResetInMinutes;
- (id)payloadMaximumFailedAttempts;
- (id)payloadMaximumGracePeriodInMinutes;
- (id)payloadMaximumInactivityInMinutes;
- (id)payloadMaximumPasscodeAgeInDays;
- (id)payloadMinimumComplexCharacters;
- (id)payloadMinimumLength;
- (id)payloadPasscodeReuseLimit;
- (id)payloadRequireAlphanumericPasscode;
- (id)payloadRequireComplexPasscode;
- (id)payloadRequirePasscode;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadChangeAtNextAuth:(id)arg1;
- (void)setPayloadCustomRegex:(id)arg1;
- (void)setPayloadFailedAttemptsResetInMinutes:(id)arg1;
- (void)setPayloadMaximumFailedAttempts:(id)arg1;
- (void)setPayloadMaximumGracePeriodInMinutes:(id)arg1;
- (void)setPayloadMaximumInactivityInMinutes:(id)arg1;
- (void)setPayloadMaximumPasscodeAgeInDays:(id)arg1;
- (void)setPayloadMinimumComplexCharacters:(id)arg1;
- (void)setPayloadMinimumLength:(id)arg1;
- (void)setPayloadPasscodeReuseLimit:(id)arg1;
- (void)setPayloadRequireAlphanumericPasscode:(id)arg1;
- (void)setPayloadRequireComplexPasscode:(id)arg1;
- (void)setPayloadRequirePasscode:(id)arg1;

@end
