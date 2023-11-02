
@interface PGMemoryPhotoKitPersister : NSObject {
    bool  _isAppleMusicSubscriber;
    NSObject<OS_os_log> * _loggingConnection;
    PGNeighborScoreComputer * _neighborScoreComputer;
    PHPhotoLibrary * _photoLibrary;
}

+ (void)setStoryColorGradeKindFromPhotosGraphProperties:(id)arg1 onMemoryChangeRequest:(id)arg2;

- (void).cxx_destruct;
- (id)_encodedFeaturesFromFeatureNodes:(id)arg1;
- (bool)_enforceUniqueCreationDatesWithPendingState:(unsigned short)arg1;
- (id)_memoryCreationRequestForEnrichedMemory:(id)arg1 pendingState:(unsigned short)arg2 creationDate:(id)arg3 photosGraphDataDictionary:(id)arg4;
- (unsigned long long)_memoryIndexOffsetOnDate:(id)arg1 includePendingMemories:(bool)arg2;
- (id)_photosGraphDataDictionaryByEnrichedMemoryIdentifierForEnrichedMemories:(id)arg1;
- (id)_photosGraphDataDictionaryForEnrichedMemory:(id)arg1;
- (bool)_shouldPrefetchAudioForMemoriesInPhotoLibrary:(id)arg1 withConfiguration:(id)arg2;
- (bool)_shouldPrefetchMetadataForMemoriesInPhotoLibrary:(id)arg1 withConfiguration:(id)arg2;
- (void)cacheMusicAudioAndArtworkForEnrichedMemories:(id)arg1 inflationContext:(id)arg2 photoLibrary:(id)arg3;
- (id)initWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
- (id)memoryLocalIdentifiersFromPersistingEnrichedMemories:(id)arg1 withPendingState:(unsigned short)arg2 graph:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
- (bool)persistGraphEphemeralMemoriesFromEnrichedMemories:(id)arg1 ephemeralMemoriesToDelete:(id)arg2 graph:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
- (bool)updateExistingMemories:(id)arg1 ephemeralMemoryByUniqueIdentifier:(id)arg2 progressReporter:(id)arg3;

@end
