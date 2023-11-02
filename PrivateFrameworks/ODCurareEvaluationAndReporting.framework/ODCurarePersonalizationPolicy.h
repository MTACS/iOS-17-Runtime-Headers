
@interface ODCurarePersonalizationPolicy : NSObject {
    NSArray * _hyperparameterSelectionPolicy;
    NSNumber * _minimumNumberOfSamplesForPersonalization;
    NSNumber * _minimumNumberOfSamplesForPersonalizationSelection;
}

@property (nonatomic, retain) NSArray *hyperparameterSelectionPolicy;
@property (nonatomic, retain) NSNumber *minimumNumberOfSamplesForPersonalization;
@property (nonatomic, retain) NSNumber *minimumNumberOfSamplesForPersonalizationSelection;

- (void).cxx_destruct;
- (id)hyperparameterSelectionPolicy;
- (id)initWithModelSelectionParameters:(id)arg1 minimumNumberOfSamplesForPersonalization:(id)arg2 minimumNumberOfSamplesForPersonalizationSelection:(id)arg3;
- (id)minimumNumberOfSamplesForPersonalization;
- (id)minimumNumberOfSamplesForPersonalizationSelection;
- (void)setHyperparameterSelectionPolicy:(id)arg1;
- (void)setMinimumNumberOfSamplesForPersonalization:(id)arg1;
- (void)setMinimumNumberOfSamplesForPersonalizationSelection:(id)arg1;

@end
