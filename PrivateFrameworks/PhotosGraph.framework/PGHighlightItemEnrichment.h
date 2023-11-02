
@interface PGHighlightItemEnrichment : NSObject {
    <PGHighlightItemListModelWriter> * _modelWriter;
    PGNeighborScoreComputer * _neighborScoreComputer;
    <PGHighlightItemEnrichmentRule> * _rule;
}

@property (nonatomic, readonly) <PGHighlightItemListModelWriter> *modelWriter;
@property (nonatomic, retain) PGNeighborScoreComputer *neighborScoreComputer;
@property (nonatomic, readonly) <PGHighlightItemEnrichmentRule> *rule;

- (void).cxx_destruct;
- (void)_contextualKeyAssetForYearHighlightItemList:(id)arg1 sharingFilter:(unsigned short)arg2 curationContext:(id)arg3 contextualOptions:(id)arg4 options:(id)arg5 availableContextualRules:(id)arg6 progressBlock:(id /* block */)arg7;
- (void)contextualKeyAssetForYearHighlightItemLists:(id)arg1 withManager:(id)arg2 curationContext:(id)arg3 options:(id)arg4 progressBlock:(id /* block */)arg5;
- (void)enrichHighlightItemLists:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)initWithRule:(id)arg1 modelWriter:(id)arg2;
- (id)modelWriter;
- (id)neighborScoreComputer;
- (id)rule;
- (void)setNeighborScoreComputer:(id)arg1;
- (void)updateVisibilityStateForHighlightItemLists:(id)arg1 withManager:(id)arg2 progressBlock:(id /* block */)arg3;

@end
