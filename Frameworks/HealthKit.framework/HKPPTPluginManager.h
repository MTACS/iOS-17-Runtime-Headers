
@interface HKPPTPluginManager : NSObject {
    NSMutableDictionary * _builtinTests;
    NSMutableDictionary * _testClasses;
}

+ (id)sharedPluginManager;

- (void).cxx_destruct;
- (void)_loadPPTBundles;
- (id)builtinTests;
- (Class)classForTestType:(id)arg1;
- (id)init;
- (void)registerDriverClass:(Class)arg1;

@end
