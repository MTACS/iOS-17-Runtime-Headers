
@interface SSRUtils : NSObject

+ (id)_getUtterancesFromDirectory:(id)arg1;
+ (void)cleanupOrphanedVoiceIdGradingFiles;
+ (id)combineScoreFromPSR:(id)arg1 fromSAT:(id)arg2 withCombinedWt:(float)arg3;
+ (void)createDirectoryIfDoesNotExist:(id)arg1;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)arg1;
+ (id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1;
+ (void)dumpFilesInDirectory:(id)arg1;
+ (bool)encryptFileAt:(id)arg1 andSaveTo:(id)arg2 error:(id*)arg3;
+ (unsigned long long)explicitSpIdTypeForSpId:(unsigned long long)arg1;
+ (id)getContentsOfDirectory:(id)arg1;
+ (void)getEnrollmentUtterancesCountFromDirectory:(id)arg1 withCountBlock:(id /* block */)arg2;
+ (id)getEnrollmentUtterancesFromDirectory:(id)arg1;
+ (id)getExplicitEnrollmentUtterancesFromDirectory:(id)arg1;
+ (id)getExplicitMarkedEnrollmentUtterancesFromDirectory:(id)arg1;
+ (void)getHomeUserIdForVoiceProfile:(id)arg1 withCompletion:(id /* block */)arg2;
+ (id)getImplicitEnrollmentUtterancesFromDirectory:(id)arg1;
+ (id)getImplicitUtteranceCacheDirectory;
+ (long long)getNumberOfAudioFilesInDirectory:(id)arg1;
+ (id)getVoiceProfileForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2;
+ (id)getVoiceProfileIdentityFromVersionFilePath:(id)arg1;
+ (unsigned long long)getVoiceProfileProductCategoryFromVersionFilePath:(id)arg1;
+ (id)getVoiceProfilesForSiriProfileId:(id)arg1;
+ (bool)isCurrentDeviceCompatibleWithNewerVoiceProfileAt:(id)arg1;
+ (bool)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg1;
+ (bool)isMphVTUIKeywordDetectorSupportedPlatform;
+ (bool)isSpeakerRecognitionSupportedInLocale:(id)arg1;
+ (void)logSpeakerRecognitionGradingMetadataAtFilepath:(id)arg1 withScoreInfo:(id)arg2;
+ (id)moveContentsOfSrcDirectory:(id)arg1 toDestDirectory:(id)arg2;
+ (id)psrConfigFileNameForCSSpIdType:(unsigned long long)arg1;
+ (id)readJsonFileAtPath:(id)arg1;
+ (id)removeItemAtPath:(id)arg1;
+ (id)satConfigFileNameForCSSpIdType:(unsigned long long)arg1;
+ (id)satConfigFileNameForCSSpIdType:(unsigned long long)arg1 forModelType:(unsigned long long)arg2 forAssetType:(unsigned long long)arg3;
+ (void)segmentVoiceTriggerFromAudioFile:(id)arg1 withVTEventInfo:(id)arg2 withStorePayloadPortion:(bool)arg3 withCompletion:(id /* block */)arg4;
+ (unsigned long long)spIdTypeForString:(id)arg1;
+ (id)spIdVoiceProfileImportRootDir;
+ (id)spidAudioTrainUtterancesDir;
+ (bool)ssrAudioLogsCountWithinPrivacyLimit;
+ (id)ssrAudioLogsDir;
+ (void)streamAudioFromFileUrl:(id)arg1 audioStreamBasicDescriptor:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 samplesPerStreamChunk:(unsigned long long)arg3 audioDataAvailableHandler:(id /* block */)arg4;
+ (id)stringForCSSpIdType:(unsigned long long)arg1;
+ (id)stringForInvocationStyle:(unsigned long long)arg1;
+ (id)stringForSpeakerRecognizerType:(unsigned long long)arg1;
+ (id)stringForVoiceProfileRetrainerType:(unsigned long long)arg1;

@end
