
@interface PGMeaningActionCriteria : NSObject <PGMeaningCriteria> {
    NSString * _actionName;
    long long  _actionValue;
    NSArray * _descendingSortedMediaAnalysisVersion;
    NSDictionary * _highPrecisionThresholdByMediaAnalysisVersion;
    NSDictionary * _highRecallThresholdByMediaAnalysisVersion;
}

@property (nonatomic, retain) NSString *actionName;
@property (nonatomic) long long actionValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *descendingSortedMediaAnalysisVersion;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *highPrecisionThresholdByMediaAnalysisVersion;
@property (nonatomic, retain) NSDictionary *highRecallThresholdByMediaAnalysisVersion;
@property (readonly) Class superclass;

+ (double)actionHighRecallThresholdForAssetMediaAnalysisVersion:(unsigned long long)arg1 usingActionCriteriaByValidPersonActivityMeaningLabel:(id)arg2 andValidPersonActivity:(id)arg3;
+ (id)actionValueStringUsingActionCriteriaByValidPersonActivityMeaningLabel:(id)arg1 withPersonActivityMeaningLabel:(id)arg2;
+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;
+ (id)descendingSortedMediaAnalysisVersionFromCriteriaDictionary:(id)arg1 usingActionThresholdKey:(id)arg2;
+ (id)parseThresholdFromCriteriaDictionary:(id)arg1 usingActionThresholdKey:(id)arg2;

- (void).cxx_destruct;
- (id)actionName;
- (double)actionThresholdForAssetMediaAnalysisVersion:(unsigned long long)arg1 withActionThresholdByMediaAnalysisVersion:(id)arg2;
- (long long)actionValue;
- (id)descendingSortedMediaAnalysisVersion;
- (id)description;
- (id)highPrecisionThresholdByMediaAnalysisVersion;
- (id)highRecallThresholdByMediaAnalysisVersion;
- (bool)isValid;
- (bool)passesCriteriaWithTrait:(id)arg1 withHighPrecisionThreshold:(double)arg2;
- (bool)passesForAssets:(id)arg1;
- (bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (void)setActionName:(id)arg1;
- (void)setActionValue:(long long)arg1;
- (void)setDescendingSortedMediaAnalysisVersion:(id)arg1;
- (void)setHighPrecisionThresholdByMediaAnalysisVersion:(id)arg1;
- (void)setHighRecallThresholdByMediaAnalysisVersion:(id)arg1;

@end
