
@interface BLSHInactiveBudgetBucketEntryCount : NSObject <NSCopying> {
    int  _count;
    NSDate * _lastEntryFinalDate;
    NSDate * _lastEntryInitialDate;
    bool  _secondsFidelity;
}

@property (nonatomic, readonly) int count;
@property (nonatomic, readonly) NSDate *lastEntryFinalDate;
@property (nonatomic, readonly) NSDate *lastEntryInitialDate;
@property (getter=isSecondsFidelity, nonatomic, readonly) bool secondsFidelity;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)count;
- (bool)countSpecifier:(id)arg1 hasSecondsBudget:(bool)arg2 isCoalesceAllowed:(bool)arg3;
- (id)description;
- (id)init;
- (bool)isSecondsFidelity;
- (id)lastEntryFinalDate;
- (id)lastEntryInitialDate;
- (double)timeIntervalFromLastEntryToDate:(id)arg1;

@end
