
@interface VTInvalidSATEntriesCleaner : NSObject

+ (id)cleanupInvalidSATEntriesAtSATRoot:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(bool)arg3;
+ (id)cleanupOrphanedMetafilesAtURL:(id)arg1 dryRun:(bool)arg2;
+ (id)cleanupOrphanedMetafilesForLanguage:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(bool)arg3;
+ (id)cleanupPayloadUtterancesExceedingLifeTimeInDays:(long long)arg1 forType:(unsigned long long)arg2 forLanguageCode:(id)arg3 dryRun:(bool)arg4;

@end
