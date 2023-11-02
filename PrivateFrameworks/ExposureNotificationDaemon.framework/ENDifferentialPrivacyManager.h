
@interface ENDifferentialPrivacyManager : NSObject {
    NSDictionary * _metadata;
    _DPBitValueRecorder * _userBeaconCountRecorder;
    _DPBitValueRecorder * _userCodeVerifiedRecorder;
    _DPBitValueRecorder * _userCodeVerifiedV2Recorder;
    _DPBitValueRecorder * _userDateExposureRecorder;
    _DPBitValueRecorder * _userDateExposureV2Recorder;
    _DPBitValueRecorder * _userDiagnosedVaccineStatusRecorder;
    _DPBitValueRecorder * _userDiagnosedVaccineStatusV2Recorder;
    _DPBitValueRecorder * _userKeysUploadedRecorder;
    _DPBitValueRecorder * _userKeysUploadedV2Recorder;
    _DPBitValueRecorder * _userNotificationInteractionRecorder;
    _DPBitValueRecorder * _userNotificationRecorder;
    _DPBitValueRecorder * _userNotificationV2Recorder;
    _DPBitValueRecorder * _userRiskParametersRecorder;
    _DPBitValueRecorder * _userRiskRecorder;
    _DPBitValueRecorder * _userSecondaryAttackV2Recorder;
}

@property (nonatomic, readonly, copy) NSDictionary *metadata;

+ (id)hashForServerExposureConfiguration:(id)arg1;
+ (unsigned short)userRiskScoreForExposureDetectionSummary:(id)arg1;

- (void).cxx_destruct;
- (void)_submitValue:(id)arg1 toRecorder:(id)arg2 description:(const char *)arg3;
- (bool)_submitVectorValue:(id)arg1 toRecorder:(id)arg2 description:(const char *)arg3;
- (id)initWithServerConfiguration:(id)arg1 serverExposureConfiguration:(id)arg2;
- (id)metadata;
- (void)reportUserBeaconCount:(id)arg1;
- (void)reportUserCodeVerified:(unsigned char)arg1 reportType:(unsigned int)arg2;
- (void)reportUserDiagnosedVaccineStatus:(id)arg1;
- (void)reportUserExposureNotificationTapped:(bool)arg1 classificationIndex:(unsigned char)arg2;
- (void)reportUserExposureNotificationWithClassificationIndex:(unsigned char)arg1 daysDelay:(unsigned char)arg2;
- (void)reportUserKeysUploaded:(unsigned char)arg1 reportType:(unsigned int)arg2;
- (void)reportUserRiskParameters:(id)arg1;
- (void)reportUserRiskScoreWithSummary:(id)arg1;
- (void)updatedServerConfiguration:(id)arg1 serverExposureConfiguration:(id)arg2;

@end
