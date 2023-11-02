
@interface PXSidebarItemChangeDetails : NSObject {
    PXArrayChangeDetails * _arrayChangeDetails;
    NSArray * _changedItems;
    bool  _hasContentChanges;
    bool  _needsReload;
    PXDataSection * _previousDataSection;
    NSArray * _removedItems;
}

@property (nonatomic, readonly) PXArrayChangeDetails *arrayChangeDetails;
@property (nonatomic, readonly) NSArray *changedItems;
@property (nonatomic, readonly) bool hasContentChanges;
@property (nonatomic, readonly) bool hasMoves;
@property (nonatomic, readonly, copy) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) bool needsReload;
@property (nonatomic, readonly) PXDataSection *previousDataSection;
@property (nonatomic, readonly, copy) NSIndexSet *removedIndexes;
@property (nonatomic, readonly) NSArray *removedItems;

+ (void)makeArrayIndexMovesIncremental:(struct { unsigned long long x1; unsigned long long x2; }*)arg1 count:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)arrayChangeDetails;
- (id)changedIndexes;
- (id)changedItems;
- (id)description;
- (void)enumerateMovedIndexesUsingBlock:(id /* block */)arg1;
- (bool)hasContentChanges;
- (bool)hasMoves;
- (id)initWithArrayChangeDetails:(id)arg1 previousDataSection:(id)arg2;
- (id)insertedIndexes;
- (bool)needsReload;
- (id)previousDataSection;
- (id)removedIndexes;
- (id)removedItems;

@end
