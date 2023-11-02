
@interface HDHealthRecordDocumentTypeConfiguration : NSObject {
    NSNumber * _extractionRulesetVersion;
    NSArray * _extractionRulesets;
}

@property (nonatomic, readonly, copy) NSNumber *extractionRulesetVersion;
@property (nonatomic, copy) NSArray *extractionRulesets;
@property (nonatomic, readonly, copy) HRSSupportedFHIRConfiguration *supportedFHIRConfiguration;

+ (id)_bundledPipelineConfigurationWithError:(id*)arg1;
+ (id)_rulesetDictionaryFromRulesetData:(id)arg1 error:(id*)arg2;
+ (id)configurationWithError:(id*)arg1;
+ (id)configurationWithExtractionVersionOverride:(id)arg1 rulesetOverrides:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)extractionRulesetForRelease:(id)arg1;
- (id)extractionRulesetVersion;
- (id)extractionRulesets;
- (id)initWithVersion:(id)arg1 extractionRulesets:(id)arg2;
- (void)setExtractionRulesets:(id)arg1;
- (id)supportedFHIRConfiguration;

@end
