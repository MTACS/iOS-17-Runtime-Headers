
@interface CVNLPCaptionRuntimeParameters : NSObject {
    NSArray * _blackListRules;
    double  _captionModelLengthNormalizationFactor;
    double  _captionModelMinimumConfidence;
    NSDictionary * _classifierRevisions;
    NSArray * _excludeGenderReplacements;
    int  _excludeGenderStrategy;
    NSArray * _excludeGenderTriggers;
    int  _genderOption;
    NSArray * _genderedTokens;
    NSArray * _replacements;
    NSDictionary * _sensitiveImageParameters;
}

@property (nonatomic, retain) NSArray *blackListRules;
@property (nonatomic) double captionModelLengthNormalizationFactor;
@property (nonatomic) double captionModelMinimumConfidence;
@property (nonatomic, retain) NSDictionary *classifierRevisions;
@property (nonatomic, retain) NSArray *excludeGenderReplacements;
@property (nonatomic) int excludeGenderStrategy;
@property (nonatomic, retain) NSArray *excludeGenderTriggers;
@property (nonatomic) int genderOption;
@property (nonatomic, retain) NSArray *genderedTokens;
@property (nonatomic, retain) NSArray *replacements;
@property (nonatomic, retain) NSDictionary *sensitiveImageParameters;

- (void).cxx_destruct;
- (void)_loadRuntimeParameters:(id)arg1;
- (id)blackListRules;
- (double)captionModelLengthNormalizationFactor;
- (double)captionModelMinimumConfidence;
- (id)classifierRevisions;
- (id)excludeGenderReplacements;
- (int)excludeGenderStrategy;
- (id)excludeGenderTriggers;
- (int)genderOption;
- (id)genderedTokens;
- (id)initWithOptions:(id)arg1;
- (id)replacements;
- (id)sensitiveImageParameters;
- (void)setBlackListRules:(id)arg1;
- (void)setCaptionModelLengthNormalizationFactor:(double)arg1;
- (void)setCaptionModelMinimumConfidence:(double)arg1;
- (void)setClassifierRevisions:(id)arg1;
- (void)setExcludeGenderReplacements:(id)arg1;
- (void)setExcludeGenderStrategy:(int)arg1;
- (void)setExcludeGenderTriggers:(id)arg1;
- (void)setGenderOption:(int)arg1;
- (void)setGenderedTokens:(id)arg1;
- (void)setReplacements:(id)arg1;
- (void)setSensitiveImageParameters:(id)arg1;

@end
