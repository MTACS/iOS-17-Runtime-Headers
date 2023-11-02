
@interface BMAprioriPatternMiner : NSObject <BMPatternMiner> {
    NSArray * _indexBaskets;
    NSArray * _items;
    unsigned long long  _maxItemsetSize;
    bool  _shouldStop;
}

@property (nonatomic, readonly) NSArray *indexBaskets;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) unsigned long long maxItemsetSize;
@property bool shouldStop;

- (void).cxx_destruct;
- (id)getItemIndexSetsWithMinSupport:(double)arg1 itemIndexSets:(id)arg2;
- (id)indexBaskets;
- (id)initWithBaskets:(id)arg1;
- (id)items;
- (unsigned long long)maxItemsetSize;
- (id)minePatternsWithMinSupport:(unsigned long long)arg1 constrainedToPatternsWithTypes:(id)arg2;
- (void)setMaxItemsetSize:(unsigned long long)arg1;
- (void)setShouldStop:(bool)arg1;
- (bool)shouldStop;
- (id)supportOfItemIndexSet:(id)arg1;
- (void)terminateEarly;

@end
