
@interface AFUIAutoCompleteMappingController : NSObject {
    NSMutableDictionary * _cache;
    NSString * _plistPath;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cachePlistMappings;
- (id)heuristicStringsForTextContentTypes:(id)arg1;
- (id)heuristicTextContentTypeForHints:(id)arg1 textContentTypesToSkip:(id)arg2;

@end
