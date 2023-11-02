
@interface SGModelAsset : NSObject

+ (id)_assetWithName:(id)arg1 andLoadBlock:(id /* block */)arg2;
+ (void)_invokeOnUpdateBlock;
+ (void)_reset;
+ (id)asset;
+ (id)dictionaryWithPlistFilename:(id)arg1;
+ (id)dpRecorderRules;
+ (id)mappings;
+ (id)metricsConfig;
+ (id)nameDetectorRules;
+ (id)quickResponses;
+ (id)quickResponsesVocab;
+ (void)registerOnUpdateBlock:(id /* block */)arg1;
+ (id)rules;
+ (id)signatureRules;
+ (id)vocabWithTrieFilename:(id)arg1;

@end
