
@interface CADStatsStores : CADStatCollector {
    CADStatCollectionContext * _context;
    NSMutableArray * _storeInfos;
}

+ (id)eventName;

- (void).cxx_destruct;
- (id)eventDictionaries;
- (void)prepareWithContext:(id)arg1;
- (void)processStores:(id)arg1;
- (bool)wantsStores;

@end
