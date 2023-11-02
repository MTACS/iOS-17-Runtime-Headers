
@interface OSASubmissionPolicy : NSObject {
    NSMutableSet * _allowOptOutByRouting;
    NSArray * _default_template;
    bool  _hasTasking;
    NSString * _identifier;
    bool  _ignoreProxies;
    NSDictionary * _prefaces;
    NSArray * _primary_template;
    NSMutableDictionary * _results;
    NSMutableDictionary * _scanOptions;
    NSArray * _specific_files;
}

@property (readonly) bool hasTasking;
@property bool ignoreProxies;
@property (readonly) NSDictionary *latestResults;
@property (readonly) NSMutableDictionary *scanOptions;

- (void).cxx_destruct;
- (id)_loadPreviousResults;
- (id)buildSubmissionTemplateForConfig:(id)arg1;
- (bool)hasTasking;
- (bool)ignoreProxies;
- (id)init;
- (id)initWithTemplate:(id)arg1 options:(id)arg2;
- (id)latestResults;
- (void)persist;
- (void)registerRouting:(id)arg1 result:(bool)arg2;
- (id)scanOptions;
- (void)setIgnoreProxies:(bool)arg1;
- (id)shouldSubmitRouting:(id)arg1;

@end
