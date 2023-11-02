
@interface SSREnrollmentDataManager : NSObject

+ (id)_getBaseMetaDictionaryForUtterancePath:(id)arg1;
+ (bool)saveMetadata:(id)arg1 isExplicitEnrollment:(bool)arg2;
+ (void)saveRawUtteranceAndMetadata:(id)arg1 to:(id)arg2 isExplicitEnrollment:(bool)arg3;
+ (bool)saveUtterance:(id)arg1 utteranceAudioPath:(id)arg2 numSamplesToWrite:(unsigned long long)arg3 isExplicitEnrollment:(bool)arg4;
+ (bool)saveUtteranceAndMetadata:(id)arg1 atDirectory:(id)arg2 isExplicitEnrollment:(bool)arg3;
+ (bool)writeMetaDict:(id)arg1 atMetaPath:(id)arg2;

@end
