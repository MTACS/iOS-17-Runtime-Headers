
@interface TIPreferencesAnalyzerRegistry : NSObject {
    NSMutableArray * _registry;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSMutableArray *registry;

- (void).cxx_destruct;
- (void)_registerPreference:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 reportingMode:(int)arg4;
- (unsigned long long)count;
- (void)enumerateRegisteredPreferencesUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)registry;

@end
