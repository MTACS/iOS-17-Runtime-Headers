
@interface CSVoiceTriggerSecondPassConfigDecoder : NSObject

+ (id)categoryForFirstPass:(unsigned long long)arg1;
+ (id)decodeConfigFileNDAPI:(id)arg1 fromCategory:(id)arg2;
+ (id)decodeConfigFileRecognizer:(id)arg1 fromCategory:(id)arg2;
+ (id)decodeConfigFrom:(id)arg1 forFirstPassSource:(unsigned long long)arg2;
+ (float)decodePreTriggerAudioTime:(id)arg1 fromCategory:(id)arg2;
+ (float)decodePrependingAudioTime:(id)arg1 fromCategory:(id)arg2;
+ (id)decodeQuasarCheckerResultCutOffCount:(id)arg1 fromCategory:(id)arg2;
+ (float)decodeTrailingAudioTime:(id)arg1 fromCategory:(id)arg2;
+ (bool)decodeUseKeywordSpotting:(id)arg1 fromCategory:(id)arg2;
+ (bool)decodeUseRecognizerCombination:(id)arg1 fromCategory:(id)arg2;
+ (id)decodeWearerDetectionConfig:(id)arg1 fromCategory:(id)arg2;
+ (bool)decodeuseTimeBasedTriggerLength:(id)arg1 fromCategory:(id)arg2;
+ (id)fetchAllVoiceTriggerSecondPassRecognizer:(id)arg1;
+ (id)getDefaultRecognizerForB238;
+ (id)getDefaultRecognizerNameForB238;

@end
