
@interface PRNLPLanguageModel : NSObject {
    NSMutableArray * _cachedContextsRecycleQueue;
    NSMutableDictionary * _cachedStates;
    NSString * _localization;
    NLLanguageModel * _model;
    long long  _modelType;
    NLLanguageModelSession * _session;
}

@property (nonatomic, readonly) NSString *localization;
@property (readonly) long long modelType;

+ (id)languageModelWithLocalization:(id)arg1 type:(long long)arg2;

- (void)dealloc;
- (id)description;
- (bool)getConditionalProbabilityForString:(id)arg1 context:(id)arg2 probability:(double*)arg3;
- (id)initWithLocalization:(id)arg1 type:(long long)arg2;
- (id)localization;
- (id)modelOptionsForLocale:(id)arg1 type:(long long)arg2;
- (long long)modelType;
- (id)stateWithContext:(id)arg1;
- (bool)stringIsBlocklisted:(id)arg1;

@end
