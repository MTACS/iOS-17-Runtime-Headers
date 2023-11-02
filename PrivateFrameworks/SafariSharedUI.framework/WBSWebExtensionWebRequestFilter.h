
@interface WBSWebExtensionWebRequestFilter : NSObject {
    double  _tabID;
    NSSet * _types;
    NSArray * _urlPatterns;
    double  _windowID;
}

- (void).cxx_destruct;
- (id)_initializeWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 outErrorMessage:(id*)arg2;
- (bool)matchesRequestForResourceOfType:(long long)arg1 URL:(id)arg2 tabID:(double)arg3 windowID:(double)arg4;

@end
