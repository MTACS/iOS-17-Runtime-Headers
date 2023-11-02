
@interface ATXMagicalMomentsPredictionTable : NSObject <NSSecureCoding> {
    NSMutableArray * _predictionTableEntries;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addPrediction:(id)arg1 withApplicablePredicates:(id)arg2;
- (void)addPredictions:(id)arg1 withApplicablePredicates:(id)arg2;
- (id)deduplicatePredictions:(id)arg1;
- (id)describeTable;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictionTableEntries:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predictionTableEntries;
- (id)predictionsForTriggerEvent:(id)arg1;
- (id)removeRestrictedPredictions:(id)arg1;
- (id)validPredictionsFromTableEntries:(id)arg1 event:(id)arg2;

@end
