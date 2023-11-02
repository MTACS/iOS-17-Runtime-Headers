
@interface SGQuickResponsesPredictionParameters : NSObject {
    double  _classDiscount;
    unsigned long long  _defaultResponsesToReturn;
    bool  _dynamicLabelsEnabled;
    bool  _filterNonConfident;
    bool  _hasNegativeClass;
    bool  _isPerCategory;
    bool  _isPersonalizationDisabled;
    bool  _isReplyTextRandomized;
    unsigned long long  _maxPromptLength;
    double  _maxPromptWindowSeconds;
    double  _minToShowThreshold;
    bool  _modelFeaturizationFormatOptionIsDense;
    NSString * _modelTypeName;
    double  _negativeClassMaximumToPredict;
    double  _personalizationDisplayedPseudocount;
    double  _personalizationExplorationFactor;
    double  _personalizationSelectedPseudocountPerSemanticClass;
    NSString * _promptJoiningString;
    double  _responsesBonus;
    unsigned long long  _responsesToShowAtTopForDiversity;
    NSString * _subModelKeyString;
    double  _weightForCategoryAverage;
    double  _weightForCategoryMax;
    double  _weightForIndividualModel;
}

@property (nonatomic, readonly) double classDiscount;
@property (nonatomic, readonly) unsigned long long defaultResponsesToReturn;
@property (nonatomic, readonly) bool dynamicLabelsEnabled;
@property (nonatomic, readonly) bool filterNonConfident;
@property (nonatomic, readonly) bool hasNegativeClass;
@property (nonatomic, readonly) bool isPerCategory;
@property (nonatomic, readonly) bool isPersonalizationDisabled;
@property (nonatomic, readonly) bool isReplyTextRandomized;
@property (nonatomic, readonly) unsigned long long maxPromptLength;
@property (nonatomic, readonly) double maxPromptWindowSeconds;
@property (nonatomic, readonly) double minToShowThreshold;
@property (nonatomic, readonly) bool modelFeaturizationFormatOptionIsDense;
@property (nonatomic, readonly) NSString *modelTypeName;
@property (nonatomic, readonly) double negativeClassMaximumToPredict;
@property (nonatomic, readonly) double personalizationDisplayedPseudocount;
@property (nonatomic, readonly) double personalizationExplorationFactor;
@property (nonatomic, readonly) double personalizationSelectedPseudocountPerSemanticClass;
@property (nonatomic, readonly) NSString *promptJoiningString;
@property (nonatomic, readonly) double responsesBonus;
@property (nonatomic, readonly) unsigned long long responsesToShowAtTopForDiversity;
@property (nonatomic, readonly) NSString *subModelKeyString;
@property (nonatomic, readonly) double weightForCategoryAverage;
@property (nonatomic, readonly) double weightForCategoryMax;
@property (nonatomic, readonly) double weightForIndividualModel;

+ (id)_modelTypeNameForDictionary:(id)arg1;
+ (id)_subModelKeyStringForDictionary:(id)arg1;

- (void).cxx_destruct;
- (double)classDiscount;
- (unsigned long long)defaultResponsesToReturn;
- (bool)dynamicLabelsEnabled;
- (bool)filterNonConfident;
- (bool)hasNegativeClass;
- (id)initWithDictionary:(id)arg1;
- (bool)isPerCategory;
- (bool)isPersonalizationDisabled;
- (bool)isReplyTextRandomized;
- (unsigned long long)maxPromptLength;
- (double)maxPromptWindowSeconds;
- (double)minToShowThreshold;
- (bool)modelFeaturizationFormatOptionIsDense;
- (id)modelTypeName;
- (double)negativeClassMaximumToPredict;
- (double)personalizationDisplayedPseudocount;
- (double)personalizationExplorationFactor;
- (double)personalizationSelectedPseudocountPerSemanticClass;
- (id)promptJoiningString;
- (double)responsesBonus;
- (unsigned long long)responsesToShowAtTopForDiversity;
- (id)subModelKeyString;
- (double)weightForCategoryAverage;
- (double)weightForCategoryMax;
- (double)weightForIndividualModel;

@end
