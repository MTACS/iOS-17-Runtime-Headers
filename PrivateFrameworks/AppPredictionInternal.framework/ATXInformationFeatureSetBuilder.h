
@interface ATXInformationFeatureSetBuilder : NSObject <ATXFeatureSetBuilderProtocol> {
    NSMutableDictionary * _features;
}

+ (id)stringForInfoSuggestionFeature:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)appendFeature:(unsigned long long)arg1 value:(double)arg2;
- (id)build;
- (void)setFeatureWithName:(id)arg1 toValue:(id)arg2;

@end
