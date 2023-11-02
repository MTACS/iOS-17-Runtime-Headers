
@interface PGMemoryPhotosGraphProperties : NSObject {
    <PGEnrichedMemoryProtocol> * _enrichedMemory;
    bool  _isAppleMusicSubscriber;
    NSObject<OS_os_log> * _loggingConnection;
    PGNeighborScoreComputer * _neighborScoreComputer;
    PHPhotoLibrary * _photoLibrary;
}

+ (id)_storyRecipeSongCatalogForAppleMusicSubscriber:(bool)arg1;

- (void).cxx_destruct;
- (id)_recipeFromEnrichedMemory:(id)arg1 subscriberCatalog:(id)arg2 applyColorGrading:(bool)arg3 loggingConnection:(id)arg4;
- (id)dictionary;
- (id)encodedBlockableFeatures;
- (id)encodedFeatures;
- (id)featureVectorV1;
- (id)featureVectorV2;
- (id)infoDictionary;
- (id)infoForBackingMoments;
- (id)infoForChapterTitles;
- (id)infoForGraphCollection;
- (id)initWithEnrichedMemory:(id)arg1 neighborScoreComputer:(id)arg2 isAppleMusicSubscriber:(bool)arg3 photoLibrary:(id)arg4 loggingConnection:(id)arg5;
- (bool)isTriggered;
- (id)musicGenreDistribution;
- (unsigned long long)numberOfMoments;
- (id)personLocalIdentifiers;
- (long long)phTitleCategory;
- (long long)sourceType;
- (id)triggerTypesArray;

@end
