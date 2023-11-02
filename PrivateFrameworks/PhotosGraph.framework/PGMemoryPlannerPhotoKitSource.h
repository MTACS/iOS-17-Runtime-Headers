
@interface PGMemoryPlannerPhotoKitSource : NSObject <PGMemoryPlannerPastSource> {
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)translateLegacyMemoryCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 toNewMemoryCategory:(unsigned long long*)arg3 triggerType:(unsigned long long*)arg4;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
- (id)memoriesToAvoidForConfiguration:(id)arg1 withGraph:(id)arg2 progressReporter:(id)arg3;
- (id)pastMemoriesForConfiguration:(id)arg1 withGraph:(id)arg2 progressReporter:(id)arg3;
- (id)triggeredMemoriesFromPersistedMemories:(id)arg1 withGraph:(id)arg2 progressReporter:(id)arg3;

@end
