
@interface PGGraphMemoryProcessorHelper : NSObject

+ (id)_fetchEphemeralMemoriesWithFetchOptions:(id)arg1 loggingConnection:(id)arg2;
+ (id)ephemeralMemoryByUniqueIdentifierInPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
+ (id)ephemeralMemoryByUniqueIdentifierWithGraphMemoryIdentifiers:(id)arg1 inPhotoLibrary:(id)arg2 loggingConnection:(id)arg3;
+ (void)resetEphemeralMemoryLastEnrichmentDateOfMemoriesWithEphemeralMemories:(id)arg1 inPhotoLibrary:(id)arg2 loggingConnection:(id)arg3;
+ (void)resetEphemeralMemoryLastEnrichmentDateOfMemoriesWithUniqueIdentifiers:(id)arg1 ephemeralMemoryByUniqueIdentifierCache:(id)arg2 inPhotoLibrary:(id)arg3 loggingConnection:(id)arg4;

@end
