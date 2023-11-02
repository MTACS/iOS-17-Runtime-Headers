
@interface SFUtilities : NSObject

+ (bool)canAccessPathAt:(id)arg1 methodName:(id)arg2 error:(id*)arg3;
+ (void)createDirPath:(id)arg1;
+ (id)defaultClientID;
+ (void)initialize;
+ (bool)isCacheDirInternal;
+ (bool)isSpeechXPCEnabled;
+ (id)issueReadSandboxExtensionForFilePath:(id)arg1 error:(id*)arg2;
+ (id)issueReadWriteSandboxExtensionForDirectoryPath:(id)arg1 error:(id*)arg2;
+ (id)languageStringForLocaleString:(id)arg1;
+ (id)localeStringForLanguageString:(id)arg1;
+ (id)recognitionMetadataFromSpeechPhrases:(id)arg1 afAudioAnalytics:(id)arg2 utteranceStart:(double)arg3;
+ (id)recognizedResultFromPackage:(id)arg1;
+ (id)sandboxExtensionsForUsingANEAndAssets;
+ (void)supportedLocalesWithCompletion:(id /* block */)arg1;
+ (id)taskNameFromTaskHint:(long long)arg1;
+ (id)transcriptionFromSpeechPhrases:(id)arg1 afAudioAnalytics:(id)arg2 utteranceStart:(double)arg3;
+ (id)transcriptionsWithTokens:(id)arg1;

@end
