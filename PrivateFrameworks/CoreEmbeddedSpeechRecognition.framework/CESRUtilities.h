
@interface CESRUtilities : NSObject

+ (id)AFSpeechInfoPackageForEARSpeechRecognitionResult:(id)arg1;
+ (id)AFSpeechInfoPackageForEARSpeechRecognitionResultPackage:(id)arg1;
+ (id)_alignTokenToFirstSeenPartialResult:(id)arg1 tokenIndex:(unsigned long long)arg2 firstSeenPartialResultTokens:(id)arg3 firstSeenPartialResultIndex:(unsigned long long)arg4;
+ (id)_firstSeenPartialResultIndicesForTokens:(id)arg1 firstSeenPartialResultTokens:(id)arg2;
+ (bool)aFEnableFeatureAndCheckPreferenceValueWithKey:(struct __CFString { }*)arg1;
+ (id)afRecognitionForEARSausage:(id)arg1 processedAudioDuration:(double)arg2;
+ (id)afSpeechPackageForEARPackage:(id)arg1 processedAudioDuration:(double)arg2 speechProfileUsed:(bool)arg3 recognizerModelInfo:(id)arg4 isVoiceCommandCandidatePackage:(bool)arg5;
+ (id)afTokensForEARTokens:(id)arg1 removeSpaceBefore:(bool)arg2;
+ (id)afVoiceCommandGrammarParseResultForEARTokenString:(id)arg1 withEARVoiceCommandInterpretations:(id)arg2;
+ (id)alignedPartialResultIndicesForTokens:(id)arg1 firstSeenPartialResultTokens:(id)arg2;
+ (id)audioData:(id)arg1 withBytesFromEnd:(unsigned long long)arg2;
+ (double)audioDurationInMs:(id)arg1 samplingRate:(unsigned long long)arg2;
+ (unsigned long long)audioLengthInBytes:(double)arg1 samplingRate:(unsigned long long)arg2;
+ (long long)calculateDiffInDaysFromTimestamp:(id)arg1;
+ (bool)cooldownDisabledForDevice;
+ (id)earTokensForAFTokens:(id)arg1 appendedAutoPunctuation:(bool)arg2;
+ (id)earTokensToString:(id)arg1;
+ (void)generateABCSnapshotForType:(id)arg1 subType:(id)arg2 context:(id)arg3;
+ (double)getHostClockFrequency;
+ (id)getNormString:(id)arg1;
+ (bool)hasRecognizedAnythingInAFSpeechPackage:(id)arg1;
+ (float)hostTimeToSeconds:(unsigned long long)arg1;
+ (bool)isFilePathValid:(id)arg1;
+ (bool)isTaskDictationSpecific:(id)arg1;
+ (id)languageStringForLocaleString:(id)arg1;
+ (void)loadSpeechProfiles:(id)arg1 language:(id)arg2;
+ (id)localeStringForLanguageString:(id)arg1;
+ (void)logToPowerLogForEventCategory:(id)arg1 eventDictionary:(id)arg2;
+ (unsigned long long)machAbsoluteTimeToMachContinuousTime:(unsigned long long)arg1;
+ (id)mapContextOptionToString:(unsigned long long)arg1;
+ (id)recognizerSourceForTask:(id)arg1;
+ (unsigned long long)secondsToHostTime:(float)arg1;
+ (id)speechProfileDateLastModifiedForLanguage:(id)arg1;
+ (id)speechProfilePathsWithLanguage:(id)arg1;
+ (id)speechProfileRootDirectories;
+ (id)voiceCommandsParamKeyBuilder:(unsigned long long)arg1;

@end
