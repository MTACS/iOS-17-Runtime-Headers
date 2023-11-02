
@interface BLSHInactiveBudgetBucket : NSObject {
    bool  _containsInvalidation;
    BLSHInactiveBudgetBucketEntryCount * _entryCount;
    BLSHInactiveBudgetBucketEntryCount * _invalidatedEntryCount;
    NSDate * _minuteBoundaryDate;
    bool  _rendered;
    BLSHInactiveBudgetBucketEntryCount * _renderedEntryCount;
    NSDate * _startDate;
}

@property (nonatomic, readonly) bool containsInvalidation;
@property (nonatomic, readonly) BLSHInactiveBudgetBucketEntryCount *entryCount;
@property (nonatomic, readonly) BLSHInactiveBudgetBucketEntryCount *invalidatedEntryCount;
@property (nonatomic, readonly) NSDate *minuteBoundaryDate;
@property (getter=hasBeenRendered, nonatomic, readonly) bool rendered;
@property (nonatomic, readonly) BLSHInactiveBudgetBucketEntryCount *renderedEntryCount;
@property (getter=isSecondsFidelity, nonatomic, readonly) bool secondsFidelity;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (double)addFutureSpecifier:(id)arg1 hasSecondsBudget:(bool)arg2 allowBeforeStart:(bool)arg3;
- (double)addInvalidation:(id)arg1 hasSecondsBudget:(bool)arg2 allowBeforeStart:(bool)arg3;
- (double)applyRenderedSpecifier:(id)arg1 allowBeforeStart:(bool)arg2;
- (long long)compare:(id)arg1;
- (bool)containsInvalidation;
- (id)debugDescription;
- (id)description;
- (id)entryCount;
- (bool)hasBeenRendered;
- (id)initWithFutureSpecifier:(id)arg1;
- (id)initWithInvalidation:(id)arg1;
- (id)invalidatedEntryCount;
- (bool)isSecondsFidelity;
- (id)minuteBoundaryDate;
- (id)renderedEntryCount;
- (void)resetFutureAndRenderedSpecifiers;
- (void)resetFutureSpecifiers;
- (id)shortLoggingString;
- (id)startDate;
- (bool)validAtDate:(id)arg1;

@end
