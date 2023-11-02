
@interface ATXFaceSuggestionScorer : NSObject {
    NSDictionary * _appLaunchDictionary;
    NSSet * _descriptors;
    <ATXFaceSuggestionParameters> * _parameters;
    NSSet * _signals;
}

@property (nonatomic, readonly, copy) NSSet *signals;

- (void).cxx_destruct;
- (void)_loadAppLaunchData;
- (void)_loadSignals;
- (id)_mockScoreForDescriptor:(id)arg1;
- (double)featuredScoreForDescriptor:(id)arg1;
- (id)initWithParameters:(id)arg1 descriptors:(id)arg2;
- (id)signals;

@end
