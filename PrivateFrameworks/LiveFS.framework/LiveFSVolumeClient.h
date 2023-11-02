
@interface LiveFSVolumeClient : NSObject <LiveFSCoreClient> {
    NSMutableDictionary * _searchCompletionBlocks;
    NSMutableDictionary * _searchResultsBlocks;
    NSMapTable * _updateHandlers;
}

@property (retain) NSMutableDictionary *searchCompletionBlocks;
@property (retain) NSMutableDictionary *searchResultsBlocks;
@property (retain) NSMapTable *updateHandlers;

+ (id)exportedClientInterface;

- (void).cxx_destruct;
- (int)LISCAddSearchHandlers:(id)arg1 resultHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (int)LISCAddUpdateHandler:(id)arg1 forInterestedItem:(id)arg2;
- (void)LISCDropSearchHandlers:(id)arg1;
- (void)LISCDropUpdateHandlerForInterestedItem:(id)arg1;
- (void)connectionWasInterupted;
- (void)connectionWasInvalidated;
- (void)deletedItem:(id)arg1 name:(id)arg2 how:(int)arg3 interestedItem:(id)arg4;
- (void)deletedName:(id)arg1 item:(id)arg2 how:(int)arg3 interestedItem:(id)arg4;
- (void)historyResetItem:(id)arg1 interestedItem:(id)arg2;
- (void)historyResetName:(id)arg1 interestedItem:(id)arg2;
- (id)init;
- (void)renamedItem:(id)arg1 named:(id)arg2 fromDirectory:(id)arg3 intoDirectory:(id)arg4 newName:(id)arg5 atopItem:(id)arg6;
- (id)searchCompletionBlocks;
- (void)searchResults:(id)arg1 paths:(id)arg2 attributes:(id)arg3 attributeSize:(unsigned int)arg4 xAttrs:(id)arg5 resumePath:(id)arg6;
- (id)searchResultsBlocks;
- (void)setSearchCompletionBlocks:(id)arg1;
- (void)setSearchResultsBlocks:(id)arg1;
- (void)setUpdateHandlers:(id)arg1;
- (void)tokenDone:(id)arg1 result:(int)arg2;
- (id)updateHandlers;
- (void)updatedItem:(id)arg1 name:(id)arg2 interestedItem:(id)arg3;
- (void)updatedName:(id)arg1 interestedItem:(id)arg2;
- (void)updatesDoneFor:(id)arg1;
- (void)volumeWideDeletedName:(id)arg1 interestedItem:(id)arg2;
- (void)volumeWideUpdatedName:(id)arg1 interestedItem:(id)arg2;

@end
