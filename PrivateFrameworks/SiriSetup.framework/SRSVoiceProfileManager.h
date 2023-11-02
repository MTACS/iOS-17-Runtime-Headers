
@interface SRSVoiceProfileManager : NSObject {
    SSRVoiceProfileManager * _voiceProfileManager;
}

- (void).cxx_destruct;
- (void)deleteUserVoiceProfile:(id)arg1;
- (bool)hasVoiceProfileIniCloudForLanguageCode:(id)arg1 backupMetaBlob:(id)arg2;
- (id)init;
- (bool)isSATEnrolledForSiriProfileId:(id)arg1 languageCode:(id)arg2;
- (void)markSATEnrollmentSuccessForVoiceProfile:(id)arg1;

@end
