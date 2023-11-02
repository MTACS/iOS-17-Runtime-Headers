
@interface MapsSuggestionsSignalPackCache : NSObject {
    NSMutableArray * _entries;
    NSMutableArray * _mapItems;
    NSMutableArray * _signalPacks;
}

- (void).cxx_destruct;
- (id)init;
- (bool)insertMapItem:(id)arg1 signalPack:(id)arg2 entry:(id)arg3;
- (id)signalPackForMapItem:(id)arg1;

@end
