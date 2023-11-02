
@interface PPITunesStoreURLOverrideChecker : NSObject {
    NSMutableDictionary * _compiledPatterns;
    NSMutableSet * _failedHosts;
    NSMutableSet * _failedSchemes;
    id /* block */  _isAppAvailableToOpenURLBlock;
    NSDictionary * _propertyList;
    NSMutableSet * _supportedSchemes;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPlistPaths:(id)arg1 isAppAvailableToOpenURLBlock:(id /* block */)arg2;
- (id)initWithPropertyList:(id)arg1 isAppAvailableToOpenURLBlock:(id /* block */)arg2;
- (id)overrideForURL:(id)arg1;

@end
