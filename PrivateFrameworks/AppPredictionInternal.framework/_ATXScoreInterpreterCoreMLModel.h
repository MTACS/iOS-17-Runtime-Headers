
@interface _ATXScoreInterpreterCoreMLModel : NSObject {
    NSArray * _coreMLInputFeatures;
    NSString * _coreMLModelOutputName;
    bool  _hasOutputIndexedSubscript;
    _PASLock * _lock;
}

@property (nonatomic, readonly) bool hasOutputIndexedSubscript;
@property (nonatomic, readonly) unsigned long long numberOfFeatures;

+ (id)coreMLModelForCoreMLModelName:(id)arg1;
+ (double)scoreForOutputValue:(id)arg1 outputIndexedSubscript:(long long)arg2;

- (void).cxx_destruct;
- (id)featureAtIndex:(unsigned long long)arg1;
- (id)getArgumentsToEvaluateByInitializingInstanceVariablesFromFeatures:(id)arg1 outputSpecification:(id)arg2;
- (bool)hasOutputIndexedSubscript;
- (id)init;
- (id)initWithModelName:(id)arg1 features:(id)arg2 outputSpecification:(id)arg3;
- (unsigned long long)numberOfFeatures;
- (double)predictionForEvaluatedFeatures:(id)arg1 withOutputIndexedSubscript:(long long)arg2;

@end
