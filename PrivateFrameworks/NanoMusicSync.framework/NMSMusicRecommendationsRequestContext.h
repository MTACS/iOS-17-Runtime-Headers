
@interface NMSMusicRecommendationsRequestContext : NSObject {
    MPModelStoreBrowseResponse * _editorialBrowseResponse;
    MPModelForYouRecommendationsResponse * _forYouResponse;
    MPModelResponse * _heavyRotationResponse;
    NSArray * _importedObjects;
    MPModelResponse * _libraryRecentMusicResponse;
    MPModelResponse * _lookupResponse;
    unsigned long long  _minimumNumberOfRecentMusicModelObjects;
    NSMapTable * _modelObjectSectionMap;
    NSMutableOrderedSet * _recentMusicModelObjects;
    MPModelResponse * _starterPackResponse;
}

@property (nonatomic, retain) MPModelStoreBrowseResponse *editorialBrowseResponse;
@property (nonatomic, retain) MPModelForYouRecommendationsResponse *forYouResponse;
@property (nonatomic, retain) MPModelResponse *heavyRotationResponse;
@property (nonatomic, retain) NSArray *importedObjects;
@property (nonatomic, readonly) NMSMutableMediaSyncInfo *importedStoreContainerItemMappings;
@property (nonatomic, retain) MPModelResponse *libraryRecentMusicResponse;
@property (nonatomic, retain) MPModelResponse *lookupResponse;
@property (nonatomic) unsigned long long minimumNumberOfRecentMusicModelObjects;
@property (nonatomic, readonly) NSSet *modelObjects;
@property (nonatomic, readonly) unsigned long long numberOfRecentMusicModelObjects;
@property (nonatomic, readonly) NSOrderedSet *recommendations;
@property (nonatomic, retain) MPModelResponse *starterPackResponse;

- (void).cxx_destruct;
- (bool)_hasDownloadableSongsForModelObject:(id)arg1;
- (void)_processItem:(id)arg1 section:(id)arg2 identifier:(id)arg3;
- (void)_processResponsesIfNeeded;
- (bool)_recentMusicContainsModelObject:(id)arg1;
- (id)editorialBrowseResponse;
- (id)forYouResponse;
- (id)heavyRotationResponse;
- (id)importedObjects;
- (id)importedStoreContainerItemMappings;
- (id)libraryRecentMusicResponse;
- (id)lookupResponse;
- (unsigned long long)minimumNumberOfRecentMusicModelObjects;
- (id)modelObjects;
- (unsigned long long)numberOfRecentMusicModelObjects;
- (id)recommendations;
- (void)setEditorialBrowseResponse:(id)arg1;
- (void)setForYouResponse:(id)arg1;
- (void)setHeavyRotationResponse:(id)arg1;
- (void)setImportedObjects:(id)arg1;
- (void)setLibraryRecentMusicResponse:(id)arg1;
- (void)setLookupResponse:(id)arg1;
- (void)setMinimumNumberOfRecentMusicModelObjects:(unsigned long long)arg1;
- (void)setStarterPackResponse:(id)arg1;
- (id)starterPackResponse;

@end
