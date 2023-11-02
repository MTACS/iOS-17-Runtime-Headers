
@interface PSSearchableItemManifest : NSObject {
    NSMutableArray * _searchableItems;
}

@property (nonatomic, retain) NSMutableArray *searchableItems;

- (void).cxx_destruct;
- (id)_escapedStringForString:(id)arg1;
- (id)_stringKeyForString:(id)arg1;
- (void)addSearchableItem:(id)arg1;
- (void)addSearchableItems:(id)arg1;
- (id)init;
- (id)items;
- (void)removeSearchableItem:(id)arg1;
- (id)searchableItems;
- (void)setSearchableItems:(id)arg1;
- (bool)writeToPlistAndStringsFilesAtURL:(id)arg1 error:(id*)arg2;

@end
