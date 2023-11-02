
@interface CSVoiceTriggerPhraseConfigDecoder : NSObject

+ (float)adjustTwoShotDelay:(float)arg1;
+ (id)decodeConfigFrom:(id)arg1 category:(id)arg2;
+ (id)decodeConfigV1:(id)arg1 category:(id)arg2;
+ (id)decodeConfigV2:(id)arg1 category:(id)arg2;
+ (float)defaultRemoraTwoShotDelay;
+ (float)defaultTwoShotDelay;
+ (id)twoShotDelayConfigKey;

@end
