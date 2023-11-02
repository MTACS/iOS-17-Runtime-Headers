
@interface VTEventTrackerManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id*)arg4;
- (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 sortedByDateWithResourceKey:(id)arg3 error:(id*)arg4;
- (id)_dictionaryToJson:(id)arg1;
- (id)_sortedURLsInDirectory:(id)arg1 matchingPattern:(id)arg2;
- (id)init;
- (void)voiceTriggerEvent:(id /* block */)arg1;

@end
