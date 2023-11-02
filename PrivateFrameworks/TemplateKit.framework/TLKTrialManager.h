
@interface TLKTrialManager : NSObject {
    bool  _biggerSuggestionsLayoutEnabled;
    TRIClient * _client;
    TRIExperimentIdentifiers * _experimentIdentifiers;
    NSString * _namespace;
    bool  _snippetModernizationEnabled;
    long long  _zkwOverrideValue;
}

@property bool biggerSuggestionsLayoutEnabled;
@property (nonatomic, retain) TRIClient *client;
@property (nonatomic, readonly) TRIExperimentIdentifiers *experimentIdentifiers;
@property (nonatomic, retain) NSString *namespace;
@property bool snippetModernizationEnabled;
@property long long zkwOverrideValue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)biggerSuggestionsLayoutEnabled;
- (id)client;
- (id)experimentIdentifiers;
- (id)init;
- (id)namespace;
- (void)refresh;
- (void)setBiggerSuggestionsLayoutEnabled:(bool)arg1;
- (void)setClient:(id)arg1;
- (void)setNamespace:(id)arg1;
- (void)setSnippetModernizationEnabled:(bool)arg1;
- (void)setZkwOverrideValue:(long long)arg1;
- (bool)snippetModernizationEnabled;
- (long long)zkwOverrideValue;

@end
