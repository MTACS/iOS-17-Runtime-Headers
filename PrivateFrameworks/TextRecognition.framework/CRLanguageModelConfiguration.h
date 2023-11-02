
@interface CRLanguageModelConfiguration : NSObject {
    NSNumber * _characterLMWeight;
    float  _filteringActivationThreshold;
    NSArray * _filteringCharLengths;
    long long  _filteringMinimumLength;
    NSNumber * _lexiconWeight;
    NSArray * _lmFilteringThresholds;
    NSNumber * _wordLMWeight;
}

@property (readonly) NSNumber *characterLMWeight;
@property (readonly) float filteringActivationThreshold;
@property (retain) NSArray *filteringCharLengths;
@property (readonly) long long filteringMinimumLength;
@property (readonly) NSNumber *lexiconWeight;
@property (retain) NSArray *lmFilteringThresholds;
@property (readonly) NSNumber *wordLMWeight;

+ (id)configurationForLanguageIdentifier:(id)arg1 rev:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)characterLMWeight;
- (float)filteringActivationThreshold;
- (id)filteringCharLengths;
- (long long)filteringMinimumLength;
- (id)initWithDictionary:(id)arg1;
- (id)lexiconWeight;
- (id)lmFilteringThresholds;
- (float)lmThresholdForLength:(long long)arg1;
- (void)setFilteringCharLengths:(id)arg1;
- (void)setLmFilteringThresholds:(id)arg1;
- (id)wordLMWeight;

@end
