
@interface CNEnvironmentBase : NSObject {
    NSMutableDictionary * _storage;
}

+ (id)currentEnvironment;
+ (id)currentEnvironmentForKey:(void*)arg1;
+ (id)defaultEnvironment;
+ (id)defaultStack;
+ (id)effectiveReadingStackForKey:(void*)arg1;
+ (id)effectiveWritingStackForKey:(void*)arg1;
+ (char *)environmentStackKey;

- (void).cxx_destruct;
- (void)becomeCurrent;
- (void)resignCurrent;

@end
