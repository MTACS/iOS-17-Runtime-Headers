
@interface SSRVoiceProfileMetadataManager : NSObject

+ (id)_getBaseMetaDictionaryForUtterancePath:(id)arg1;
+ (void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2;
+ (id)getUtteranceEnrollmentType:(id)arg1;
+ (bool)isUtteranceImplicitlyTrained:(id)arg1;
+ (id)recordedTimeStampFromFileName:(id)arg1;
+ (id)recordedTimeStampOfFile:(id)arg1;
+ (void)saveUtteranceMetadataForUtterance:(id)arg1 enrollmentType:(id)arg2 isHandheldEnrollment:(bool)arg3 triggerSource:(id)arg4 audioInput:(id)arg5 otherBiometricResult:(unsigned long long)arg6 containsPayload:(bool)arg7;

@end
