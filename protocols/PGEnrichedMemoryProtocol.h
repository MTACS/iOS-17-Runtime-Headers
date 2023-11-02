
@protocol PGEnrichedMemoryProtocol <PGTriggeredMemoryProtocol>

@required

- (NSArray *)chapterTitles;
- (NSArray *)curatedAssetUUIDs;
- (NSString *)enrichedDescription;
- (NSArray *)extendedCuratedAssetUUIDs;
- (bool)failedEnrichment;
- (unsigned long long)failureReason;
- (bool)featuresGuestAssets;
- (PGFlexMusicCuration *)flexMusicCuration;
- (unsigned long long)forbiddenMoods;
- (NSString *)keyAssetUUID;
- (NSArray *)legacyMoodKeywords;
- (PGMusicCuration *)musicCuration;
- (long long)notificationLevel;
- (unsigned long long)numberOfRelevantAssets;
- (PGMoodVector *)positiveMoodVector;
- (unsigned long long)recommendedMoods;
- (NSArray *)representativeAssetUUIDs;
- (double)score;
- (void)setChapterTitles:(NSArray *)arg1;
- (void)setCuratedAssetUUIDs:(NSArray *)arg1;
- (void)setExtendedCuratedAssetUUIDs:(NSArray *)arg1;
- (void)setFailureReason:(unsigned long long)arg1;
- (void)setFeaturesGuestAssets:(bool)arg1;
- (void)setFlexMusicCuration:(PGFlexMusicCuration *)arg1;
- (void)setForbiddenMoods:(unsigned long long)arg1;
- (void)setKeyAssetUUID:(NSString *)arg1;
- (void)setLegacyMoodKeywords:(NSArray *)arg1;
- (void)setMusicCuration:(PGMusicCuration *)arg1;
- (void)setNotificationLevel:(long long)arg1;
- (void)setNumberOfRelevantAssets:(unsigned long long)arg1;
- (void)setPositiveMoodVector:(PGMoodVector *)arg1;
- (void)setRecommendedMoods:(unsigned long long)arg1;
- (void)setRepresentativeAssetUUIDs:(NSArray *)arg1;
- (void)setScore:(double)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setSuggestedMood:(unsigned long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTitleCategory:(long long)arg1;
- (NSString *)subtitle;
- (unsigned long long)suggestedMood;
- (NSString *)title;
- (long long)titleCategory;

@end
