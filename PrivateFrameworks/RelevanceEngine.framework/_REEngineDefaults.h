
@interface _REEngineDefaults : NSObject {
    NSUserDefaults * _defaults;
    NSString * _domain;
    NSMutableDictionary * _registeredBlocks;
    NSMutableSet * _registeredPaths;
    NSObject<OS_dispatch_queue> * _registrationQueue;
}

+ (id)defaultsForEngine:(id)arg1;
+ (id)globalDefaults;

- (void).cxx_destruct;
- (bool)_BOOLValueForKey:(id)arg1 set:(bool*)arg2;
- (long long)_NSIntegerValueForKey:(id)arg1 set:(bool*)arg2;
- (id)_domainName;
- (id)_idValueForKey:(id)arg1 set:(bool*)arg2;
- (void)_registerCallback:(id /* block */)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithDomain:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
