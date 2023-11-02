
@interface PGEnrichedMemoryFactory : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
    PGMemoryCurationSession * _memoryCurationSession;
    PGMoodKeywordComputer * _moodKeywordComputer;
    PGTitleGenerationContext * _titleGenerationContext;
}

+ (long long)notificationLevelForTriggeredMemory:(id)arg1 withLocalDate:(id)arg2 graph:(id)arg3;
+ (double)notificationScoreForNotificationLevel:(long long)arg1 electionScore:(double)arg2;
+ (void)requestFlexMusicCurationForEnrichedMemories:(id)arg1 context:(id)arg2 photoLibrary:(id)arg3 graph:(id)arg4 progressReporter:(id)arg5 resultHandler:(id /* block */)arg6;
+ (void)requestMusicCurationForEnrichedMemories:(id)arg1 context:(id)arg2 graph:(id)arg3 progressReporter:(id)arg4 resultHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)_curatedAssetsWithFeeder:(id)arg1 options:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)_extendedCuratedAssetsWithFeeder:(id)arg1 options:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)_keyAssetWithFeeder:(id)arg1 options:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)_memoryEnricherFromTriggeredMemory:(id)arg1;
- (unsigned long long)_numberOfGuestAssetInAssets:(id)arg1;
- (id)curatedAssetUUIDsWithTriggeredMemory:(id)arg1 keyAsset:(id)arg2 extendedCuratedAssetUUIDs:(id)arg3 targetCurationDuration:(double)arg4 graph:(id)arg5 allowGuestAsset:(bool)arg6 progressReporter:(id)arg7;
- (id)debugEnrichedMemoryWithTriggeredMemory:(id)arg1 withConfiguration:(id)arg2 graph:(id)arg3 progressReporter:(id)arg4;
- (id)enrichedMemoryWithTriggeredMemory:(id)arg1 withConfiguration:(id)arg2 graph:(id)arg3 progressReporter:(id)arg4;
- (id)enrichedMemoryWithTriggeredMemory:(id)arg1 withConfiguration:(id)arg2 graph:(id)arg3 progressReporter:(id)arg4 debug:(bool)arg5;
- (id)initWithMemoryCurationSession:(id)arg1 graph:(id)arg2 loggingConnection:(id)arg3;

@end
