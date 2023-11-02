
@interface AMDMiscHelpers : NSObject

+ (void)AMDInitialize:(id)arg1;
+ (void)AMDPerformCleanup;
+ (id)convertDataArrayToBase64StringArray:(id)arg1;
+ (bool)createOrMoveSymbolicLinkAtURL:(id)arg1 toDestinationURL:(id)arg2;
+ (bool)ensureDir:(id)arg1 removeIfExists:(bool)arg2;
+ (id)extractPECSimilarityScores:(id)arg1 error:(id*)arg2;
+ (id)getCurrentEpochSeconds;
+ (bool)isValidDSID:(id)arg1;
+ (id)logAndCreateError:(long long)arg1 errorMessage:(id)arg2;
+ (void)printInput:(id)arg1 withRawData:(void*)arg2 withType:(long long)arg3 andSize:(int)arg4;
+ (void)setAppStoreDirAttributes;
+ (id)sortArrayElements:(id)arg1 inDescendingOrder:(bool)arg2 withComparisonKey:(id)arg3 isKeyString:(bool)arg4;

@end
