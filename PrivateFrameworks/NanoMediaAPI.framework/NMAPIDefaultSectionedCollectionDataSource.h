
@interface NMAPIDefaultSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    NSCache * _cachedItems;
    NSCache * _cachedSections;
    NSMutableDictionary * _importedIdentifierSets;
    NSMutableDictionary * _itemResults;
    NMAPIRequest * _request;
    NSArray * _results;
    NSMutableArray * _sectionResultIDs;
    NSMutableDictionary * _sectionResults;
    NSMutableArray * _sectionedItemResultIDs;
    ICURLBag * _storeURLBag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addItemsFromArray:(id)arg1;
- (void)_addSectionWithIdentifier:(id)arg1 dictionary:(id)arg2;
- (bool)_isSupportedItem:(id)arg1;
- (id)_musicURLWithPartialURLString:(id)arg1;
- (void)_parseResults;
- (id)_storeBrowseSectionWithDictionary:(id)arg1;
- (void)_updateImportedIdentifierSetsWithIdentifier:(id)arg1 dictionary:(id)arg2;
- (id)initWithRequest:(id)arg1 results:(id)arg2 storeURLBag:(id)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;

@end
