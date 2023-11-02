
@interface PXSearchQueryResultsProcessor : NSObject <PHPhotoLibraryChangeObserver> {
    NSArray * _curatedAssetsSearchResults;
    PXSearchQueryResult * _currentSearchQueryResult;
    NSArray * _hiddenObjects;
    NSDictionary * _personSearchResultsMap;
    PHPhotoLibrary * _photoLibrary;
    id /* block */  _processingHandler;
    NSArray * _removedObjects;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) NSArray *curatedAssetsSearchResults;
@property (nonatomic, retain) PXSearchQueryResult *currentSearchQueryResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *hiddenObjects;
@property (nonatomic, copy) NSDictionary *personSearchResultsMap;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly, copy) id /* block */ processingHandler;
@property (nonatomic, copy) NSArray *removedObjects;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_fetchPersonsForPersonSearchResults:(id)arg1 photoLibrary:(id)arg2;
+ (bool)_isBootstrapNameChange:(id)arg1;
+ (id)_reloadItemIdentifiersForChangedObjects:(id)arg1 inAssetSearchResults:(id)arg2;
+ (bool)_verifyExpectedWorkQueue;

- (void).cxx_destruct;
- (void)_executeResultsHandlerForUpdatedSearchQueryResult:(id)arg1 curatedAssetsSearchResults:(id)arg2;
- (id)_generateUpdatedPersonSearchResultsFromPersonSearchResults:(id)arg1 persons:(id)arg2;
- (id)_localIdentifierForPersonUUID:(id)arg1;
- (void)_performCurationAndUpdateChangedObjects:(id)arg1;
- (void)_processPeopleChangesFromNotification:(id)arg1;
- (void)_processPersonMergeFromNotification:(id)arg1 searchQueryResult:(id)arg2;
- (void)_processPersonNameChangeFromConfirmationInfo:(id)arg1 searchQueryResult:(id)arg2;
- (bool)_shouldRecurateForChangeDetails:(id)arg1;
- (void)_updatePersonSearchResultsForSearchQueryResult:(id)arg1 withMergeTargetPerson:(id)arg2 sourcePerson:(id)arg3 tombstonedCandidatesLocalIdentifiers:(id)arg4;
- (void)_updateSearchQueryResult:(id)arg1 updatedPersonSearchResultsMap:(id)arg2;
- (void)addObserverForCuratedAssetsLibraryChanges;
- (void)addObserverForPeopleChangeHandlingNotifications;
- (id)curatedAssetsSearchResults;
- (id)currentSearchQueryResult;
- (void)dealloc;
- (id)hiddenObjects;
- (id)initForUnitTesting;
- (id)initWithPhotoLibrary:(id)arg1 dispatchQueue:(id)arg2 resultsProcessingHandler:(id /* block */)arg3;
- (id)personSearchResultsMap;
- (id)photoLibrary;
- (void)photoLibraryDidChange:(id)arg1;
- (void)processCollectionSearchResults:(id)arg1 assetSearchResults:(id)arg2 personSearchResults:(id)arg3 searchSuggestions:(id)arg4 searchQueryMatchInfo:(id)arg5 forSearchQuery:(id)arg6;
- (id /* block */)processingHandler;
- (id)removedObjects;
- (void)setCuratedAssetsSearchResults:(id)arg1;
- (void)setCurrentSearchQueryResult:(id)arg1;
- (void)setHiddenObjects:(id)arg1;
- (void)setPersonSearchResultsMap:(id)arg1;
- (void)setRemovedObjects:(id)arg1;
- (id)workQueue;

@end
