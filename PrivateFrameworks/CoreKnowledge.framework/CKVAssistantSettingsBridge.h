
@interface CKVAssistantSettingsBridge : NSObject

+ (id)_getConformingSharedUserIdsIsATV:(bool)arg1;
+ (id)currentDictationLanguageCodes;
+ (id)currentSiriLanguageCode;
+ (id)getConformingSharedUserIds;
+ (bool)isASRSupported;
+ (bool)isAssistantEnabled;
+ (bool)isCustomerInstall;
+ (bool)isDictationEnabled;
+ (bool)isLinkVocabularyEnabled;
+ (bool)isSiriMuxSupported;
+ (bool)isSiriUODSupported;
+ (bool)isSiriUODwithASROnServerSupported;
+ (bool)isSpeechProfileEnabled;

- (id)init;

@end
