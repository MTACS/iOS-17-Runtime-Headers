
@interface PGGraphMemoriesEnrichmentProcessor : NSObject {
    unsigned long long  _numberOfMemoriesToEnrich;
}

+ (void)deleteNoLongerExistingMemoryNodes:(id)arg1 fromEphemeralMemoryByUniqueIdentifier:(id)arg2 inPhotoLibrary:(id)arg3 loggingConnection:(id)arg4 progressReporter:(id)arg5;
+ (id)enrichableMemoryNodesInGraph:(id)arg1;
+ (void)insertOrUpdateEphemeralMemoriesForEnrichedMemories:(id)arg1 ephemeralMemoryByUniqueIdentifier:(id)arg2 memoryPersister:(id)arg3 graph:(id)arg4 loggingConnection:(id)arg5 progressReporter:(id)arg6;

- (unsigned long long)_targetNumberOfMemoriesToEnrichWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
- (id)init;
- (id)initWithNumberOfMemoriesToEnrich:(unsigned long long)arg1;
- (bool)runWithGraphManager:(id)arg1 incrementalChange:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
- (id)sortedMemoryNodesToEnrichForIncrementalFromMemoryNodesInGraph:(id)arg1 ephemeralMemoryByUniqueIdentifier:(id)arg2 loggingConnection:(id)arg3;
- (id)sortedMemoryNodesToEnrichFromCollection:(id)arg1 ephemeralMemoryByUniqueIdentifier:(id)arg2 loggingConnection:(id)arg3;

@end
