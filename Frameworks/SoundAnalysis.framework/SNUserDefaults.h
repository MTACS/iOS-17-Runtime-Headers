
@interface SNUserDefaults : NSObject

+ (id)boolForKey:(id)arg1 fromUserDefaultsSnapshot:(id)arg2;
+ (bool)boolForKey:(id)arg1 orDefault:(bool)arg2 fromUserDefaultsSnapshot:(id)arg3;
+ (id)builtInMicrophoneAnalysisChannelNumber;
+ (id)builtInMicrophoneAnalysisChannelNumberFromUserDefaultsSnapshot:(id)arg1;
+ (id)coerceDoubleFromValue:(id)arg1 error:(id*)arg2;
+ (id)coerceIntegerArrayFromValue:(id)arg1 error:(id*)arg2;
+ (id)coerceIntegerFromValue:(id)arg1 error:(id*)arg2;
+ (id)coerceNumberFromValue:(id)arg1 error:(id*)arg2;
+ (id)coerceStringFromValue:(id)arg1 error:(id*)arg2;
+ (id)daemonRecordingPath;
+ (id)daemonRecordingPathFromUserDefaultsSnapshot:(id)arg1;
+ (id)defaultDaemonRecordingPath;
+ (bool)deleteRecordingsWithoutDetection;
+ (bool)deleteRecordingsWithoutDetectionFromUserDefaultsSnapshot:(id)arg1;
+ (id)doubleForKey:(id)arg1 fromUserDefaultsSnapshot:(id)arg2;
+ (id)doubleForKey:(id)arg1 fromUserDefaultsSnapshot:(id)arg2 error:(id*)arg3;
+ (double)doubleForKey:(id)arg1 orDefault:(double)arg2 fromUserDefaultsSnapshot:(id)arg3;
+ (bool)enableFileServer;
+ (bool)enableFileServerFromUserDefaultsSnapshot:(id)arg1;
+ (bool)enableSecondPassRecordingInDaemon;
+ (bool)enableSecondPassRecordingInDaemonFromUserDefaultsSnapshot:(id)arg1;
+ (id)fileServerRootDirectory;
+ (id)fileServerRootDirectoryFromUserDefaultsSnapshot:(id)arg1;
+ (double)firstPassRecordingHistoryDuration;
+ (double)firstPassRecordingHistoryDurationFromUserDefaultsSnapshot:(id)arg1;
+ (id)firstPassRecordingPredicate;
+ (id)firstPassRecordingPredicateFromUserDefaultsSnapshot:(id)arg1;
+ (id)integerArrayForKey:(id)arg1 fromUserDefaultsSnapshot:(id)arg2;
+ (id)integerArrayForKey:(id)arg1 fromUserDefaultsSnapshot:(id)arg2 error:(id*)arg3;
+ (id)integerForKey:(id)arg1 fromUserDefaultsSnapshot:(id)arg2;
+ (id)integerForKey:(id)arg1 fromUserDefaultsSnapshot:(id)arg2 error:(id*)arg3;
+ (long long)integerForKey:(id)arg1 orDefault:(long long)arg2 fromUserDefaultsSnapshot:(id)arg3;
+ (id)microphoneArrayChannelMap;
+ (id)microphoneArrayChannelMapFromUserDefaultsSnapshot:(id)arg1;
+ (id)microphoneInjectionFilePath;
+ (id)microphoneInjectionFilePathFromUserDefaultsSnapshot:(id)arg1;
+ (id)numberForKey:(id)arg1 fromUserDefaultsSnapshot:(id)arg2 error:(id*)arg3;
+ (id)stringForKey:(id)arg1 fromUserDefaultsSnapshot:(id)arg2;
+ (id)stringForKey:(id)arg1 fromUserDefaultsSnapshot:(id)arg2 error:(id*)arg3;
+ (id)stringForKey:(id)arg1 orDefault:(id)arg2 fromUserDefaultsSnapshot:(id)arg3;
+ (double)sysdiagnoseHistoricalResultsDuration;
+ (double)sysdiagnoseHistoricalResultsDurationFromUserDefaultsSnapshot:(id)arg1;
+ (id)userDefaultsSingleton;
+ (id)userDefaultsSnapshot;

@end
