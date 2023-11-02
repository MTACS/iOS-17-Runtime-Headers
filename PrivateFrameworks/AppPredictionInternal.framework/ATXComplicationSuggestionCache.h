
@interface ATXComplicationSuggestionCache : NSObject {
    _PASQueueLock * _lock;
}

- (void).cxx_destruct;
- (id)_fetchCachedRankedComplicationDescriptorsWithPath:(id)arg1 error:(id*)arg2;
- (bool)_writeComplicationsCache:(id)arg1 path:(id)arg2 withError:(id*)arg3;
- (id)fetchInlineSetComplicationDescriptors;
- (id)fetchLandscapeModularSetComplicationDescriptors;
- (id)fetchModularSetComplicationDescriptors;
- (id)init;
- (bool)writeComplicationsInlineSetCache:(id)arg1;
- (bool)writeComplicationsLandscapeModularSetCache:(id)arg1;
- (bool)writeComplicationsModularSetCache:(id)arg1;

@end
