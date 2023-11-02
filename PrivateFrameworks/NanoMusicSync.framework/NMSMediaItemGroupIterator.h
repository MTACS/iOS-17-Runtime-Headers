
@interface NMSMediaItemGroupIterator : NSObject {
    unsigned long long  _currentContainerIndex;
    unsigned long long  _currentItemIndex;
    unsigned long long  _estimatedItemSize;
    NSMutableArray * _indexesToBeRemoved;
    NSArray * _itemGroups;
    NSMutableOrderedSet * _mutableItemListWithinQuota;
    unsigned long long  _nominatedItemSize;
    NSMutableArray * _remainingContainers;
    NSMutableArray * _remainingItemLists;
    unsigned long long  _sizeForItemListWithinQuota;
}

@property (nonatomic) unsigned long long currentContainerIndex;
@property (nonatomic) unsigned long long currentItemIndex;
@property (nonatomic, readonly) unsigned long long estimatedItemSize;
@property (nonatomic, readonly) NMSQuotaEvaluationState_Legacy *evaluationState;
@property (nonatomic, readonly) NMSQuotaEvaluationState *evaluationState;
@property (nonatomic, retain) NSMutableArray *indexesToBeRemoved;
@property (nonatomic, retain) NSArray *itemGroups;
@property (nonatomic, readonly) unsigned long long iteratingOrder;
@property (nonatomic, retain) NSMutableOrderedSet *mutableItemListWithinQuota;
@property (nonatomic) unsigned long long nominatedItemSize;
@property (nonatomic, retain) NSMutableArray *remainingContainers;
@property (nonatomic, retain) NSMutableArray *remainingItemLists;
@property (nonatomic, readonly) unsigned long long sizeForCurrentIdentifier;
@property (nonatomic) unsigned long long sizeForItemListWithinQuota;

- (void).cxx_destruct;
- (void)_continueToNextContainer;
- (void)_continueToNextIdentifier;
- (void)_generateItemListAndSizesDictIfNecessary;
- (void)_markToBeRemoved;
- (void)addCurrentIdentifierToWithinQuotaListAndCountSizeTowardsQuota:(bool)arg1;
- (unsigned long long)currentContainerIndex;
- (id)currentItem;
- (unsigned long long)currentItemIndex;
- (id)downloadInfoWithinQuota;
- (unsigned long long)estimatedItemSize;
- (id)evaluationState;
- (id)evaluationState;
- (id)identifiersForContainersOfType:(unsigned long long)arg1;
- (id)indexesToBeRemoved;
- (id)initWithItemGroups:(id)arg1 estimatedItemSize:(unsigned long long)arg2;
- (bool)isCurrentIdentifierEstimate;
- (id)itemGroups;
- (unsigned long long)iteratingOrder;
- (void)markAllRemainingContainersAsSkipped;
- (id)mediaContainersAboveQuota;
- (id)mutableItemListWithinQuota;
- (unsigned long long)nominatedItemSize;
- (id)remainingContainers;
- (id)remainingItemLists;
- (void)removeCurrentIdentifier;
- (void)resetToIterateOverQuotaIdentifiers;
- (void)setCurrentContainerIndex:(unsigned long long)arg1;
- (void)setCurrentItemIndex:(unsigned long long)arg1;
- (void)setIndexesToBeRemoved:(id)arg1;
- (void)setItemGroups:(id)arg1;
- (void)setMutableItemListWithinQuota:(id)arg1;
- (void)setNominatedItemSize:(unsigned long long)arg1;
- (void)setRemainingContainers:(id)arg1;
- (void)setRemainingItemLists:(id)arg1;
- (void)setSizeForItemListWithinQuota:(unsigned long long)arg1;
- (unsigned long long)sizeForCurrentIdentifier;
- (unsigned long long)sizeForItemListWithinQuota;
- (void)skipCurrentIdentifier;

@end
