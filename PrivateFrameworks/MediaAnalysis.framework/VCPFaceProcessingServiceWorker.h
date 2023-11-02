
@interface VCPFaceProcessingServiceWorker : NSObject {
    VCPClusterer * _clusterer;
    VCPPhotosFaceProcessingContext * _context;
    VCPPhotosPersistenceDelegate * _persistenceDelegate;
    PHPhotoLibrary * _photoLibrary;
    NSURL * _suggestionLoggingDirectory;
    bool  _suggestionLoggingSessionOpen;
    bool  _suggestionsLoggingEnabled;
    GDVUVisualUnderstandingService * _vuService;
}

+ (bool)_includeTorsoOnlyFaces;
+ (float)_similarityScoreThreshold;
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)workerWithPhotoLibrary:(id)arg1 andContext:(id)arg2;

- (void).cxx_destruct;
- (void)_appendToSuggestionsLog:(id)arg1;
- (void)_closeSuggestionsLoggingSession;
- (void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg1;
- (bool)_deleteAllVerifiedPersonsWithError:(id*)arg1;
- (void)_finalizeSuggestionsLog;
- (void)_logFaceToSuggestionsLog:(id)arg1;
- (void)_openSuggestionsLoggingSession;
- (void)_startAndSyncClusterCacheWithLibrary:(bool)arg1 reply:(id /* block */)arg2;
- (id)_suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 context:(id)arg4 cancelOrExtendTimeoutBlock:(id /* block */)arg5 error:(id*)arg6;
- (id)_suggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 cancelOrExtendTimeoutBlock:(id /* block */)arg4 error:(id*)arg5;
- (void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2;
- (void)personPromoterStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)rebuildPersonsWithContext:(id)arg1 reply:(id /* block */)arg2 extendTimeout:(id /* block */)arg3 cancel:(id /* block */)arg4;
- (void)reclusterFacesWithContext:(id)arg1 reply:(id /* block */)arg2 extendTimeout:(id /* block */)arg3 cancel:(id /* block */)arg4;
- (void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)resetFaceClusteringStateWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)resetPersonPromoterStatusWithReply:(id /* block */)arg1;
- (void)resetPersonsModelWithReply:(id /* block */)arg1;
- (void)resetPetsModelWithReply:(id /* block */)arg1;
- (void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 cancelOrExtendTimeoutBlock:(id /* block */)arg5 reply:(id /* block */)arg6;
- (void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(bool)arg2 context:(id)arg3 cancelOrExtendTimeoutBlock:(id /* block */)arg4 reply:(id /* block */)arg5;
- (void)validateClusterCacheWithContext:(id)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2 reply:(id /* block */)arg3;

@end
