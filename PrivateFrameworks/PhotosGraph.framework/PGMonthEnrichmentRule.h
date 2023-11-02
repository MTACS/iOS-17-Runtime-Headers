
@interface PGMonthEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule> {
    NSObject<OS_os_log> * _loggingConnection;
    <PGHighlightItemModelReader> * _modelReader;
    PGGraphMomentNodeCollection * _momentNodesAtWork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) <PGHighlightItemModelReader> *modelReader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_momentNodesAtWorkWithGraph:(id)arg1;
- (id)bestItemsFromSortedItemsByWeekOfMonth:(id)arg1 previouslySelectedItemsCountByWeek:(id)arg2 maximumNumberOfItems:(unsigned long long)arg3 sortDescriptors:(id)arg4;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 sharingFilter:(unsigned short)arg2 withGraph:(id)arg3 neighborScoreComputer:(id)arg4 usingBlock:(id /* block */)arg5;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 sharingFilter:(unsigned short)arg2 withGraph:(id)arg3 neighborScoreComputer:(id)arg4 usingBlock:(id /* block */)arg5 maximumNumberOfVisibleItems:(unsigned long long)arg6 maximumNumberOfVisibleRegularItems:(unsigned long long)arg7;
- (id)fallbackKeyAssetWithHighlightItemList:(id)arg1 sharingFilter:(unsigned short)arg2;
- (id)initWithModelReader:(id)arg1 loggingConnection:(id)arg2;
- (id)keyAssetForHighlightItemList:(id)arg1 sharingFilter:(unsigned short)arg2;
- (id)loggingConnection;
- (id)modelReader;
- (double)promotionScoreForHighlightItemList:(id)arg1;
- (id)sortedItemsByWeekOfMonthFromItems:(id)arg1 sortDescriptors:(id)arg2;

@end
