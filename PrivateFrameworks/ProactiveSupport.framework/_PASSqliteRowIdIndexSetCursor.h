
@interface _PASSqliteRowIdIndexSetCursor : _PASSqliteRowIdCursor {
    unsigned long long  _currentIndex;
    NSIndexSet * _indexSet;
    bool  _isDescending;
    NSMutableIndexSet * _mutableIndexSet;
}

@property (nonatomic, readonly) NSMutableIndexSet *mutableIndexSet;

+ (bool)canOrderByRowId:(bool)arg1;
+ (double)costFactorForRandomAccess;
+ (id)planningInfoForRowIdConstraint:(int)arg1;

- (void).cxx_destruct;
- (void)applyRowIdConstraint:(int)arg1 withArgument:(id)arg2;
- (void)applyRowIdSort:(bool)arg1;
- (unsigned long long)currentIndexedRowId;
- (void)finalizeConstraints;
- (id)init;
- (void)matchNoRows;
- (void)matchOneRow:(unsigned long long)arg1;
- (id)mutableIndexSet;
- (void)setIndexSet:(id)arg1;
- (void)stepIndexedRow;

@end
