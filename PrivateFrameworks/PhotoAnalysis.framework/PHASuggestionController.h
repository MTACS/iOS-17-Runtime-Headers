
@interface PHASuggestionController : NSObject {
    NSArray * _cachedFeaturedSuggestions;
    NSArray * _existingMemories;
    NSMutableArray * _existingSuggestions;
    PGManager * _graphManager;
    NSObject<OS_os_log> * _loggingConnection;
    unsigned long long  _newFeaturedSuggestionsCount;
    NSMutableArray * _suggestionsToDelete;
    NSMutableArray * _suggestionsToRetire;
}

@property (nonatomic, retain) NSArray *existingMemories;
@property (nonatomic, readonly) NSArray *existingSuggestions;
@property (nonatomic, readonly) PGManager *graphManager;
@property (nonatomic, readonly) unsigned long long newFeaturedSuggestionsCount;

+ (double)_maximumDurationBeforeDeletionForSuggestionType:(unsigned short)arg1 andSubtype:(unsigned short)arg2;
+ (unsigned long long)_retirementDelayInDaysForSuggestionType:(unsigned short)arg1 andSubtype:(unsigned short)arg2;
+ (bool)_shouldCheckSuggestionRecylingForProfile:(unsigned char)arg1;
+ (id)availableSuggestionTypeInfosWithProfile:(unsigned char)arg1;

- (void).cxx_destruct;
- (bool)_canFeatureSuggestion:(id)arg1;
- (id)_createSuggestionSessionWithProfile:(unsigned char)arg1;
- (id)_existingSuggestionsForProfile:(unsigned char)arg1;
- (id)_forbiddenAssetUUIDs;
- (id)_suggestionsToReuseWithSuggestionSession:(id)arg1 numberOfSuggestionsToReuse:(unsigned long long)arg2;
- (void)cacheWidgetSuggestionsWithCurrentlyFeaturedState;
- (id)collidableMemoriesWithReferenceDate:(id)arg1 andDelay:(double)arg2;
- (id)collidableSuggestionsWithOptions:(id)arg1;
- (id)commitSuggestions:(id)arg1 retiringSuggestions:(id)arg2 deletingSuggestions:(id)arg3 withOptions:(id)arg4 error:(id*)arg5;
- (id)deniedSuggestionsForProfile:(unsigned char)arg1;
- (id)existingMemories;
- (bool)existingSuggestion:(id)arg1 matchesSuggestion:(id)arg2;
- (id)existingSuggestionByKeyAssetUUIDWithType:(unsigned short)arg1 subtypes:(id)arg2;
- (id)existingSuggestions;
- (id)generateAmbientSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)generateOnThisDayAssetSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)generateSharingSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)generateSingleAssetSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)generateSuggestionsWithProfile:(unsigned char)arg1 options:(id)arg2 progress:(id /* block */)arg3;
- (id)generateWallpaperSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)generateWidgetSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)graphManager;
- (void)ingestExistingSuggestionsWithOptions:(id)arg1;
- (void)ingestSuggestions:(id)arg1 atDate:(id)arg2;
- (id)initWithGraphManager:(id)arg1;
- (unsigned long long)newFeaturedSuggestionsCount;
- (id)pendingOnThisDayMemories;
- (void)processSuggestions:(id)arg1 forRecyclingWithExistingSuggestionByKeyAssetUUID:(id)arg2 resultBlock:(id /* block */)arg3;
- (void)recordCreatedSuggestions:(id)arg1 duringSession:(id)arg2;
- (void)recordDeletedSuggestions:(id)arg1;
- (void)recordRetiredSuggestions:(id)arg1;
- (void)setExistingMemories:(id)arg1;
- (bool)shouldDeleteSuggestion:(id)arg1 atDate:(id)arg2;
- (bool)shouldRetireSuggestion:(id)arg1 atDate:(id)arg2;
- (id)suggestionInfosWithOptions:(id)arg1;

@end
