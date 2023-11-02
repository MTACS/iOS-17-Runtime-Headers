
@interface MSDPreferencesFile : NSObject {
    NSMutableDictionary * _cache;
}

@property (retain) NSMutableDictionary *cache;

+ (bool)preferencesFileExists;
+ (id)preferencesFilePath;
+ (id)preferencesFileUrl;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cache;
- (id)deepCopy:(id)arg1;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)populateCache;
- (void)raiseInvalidPropertyListObjectExceptionForObject:(id)arg1;
- (void)reload;
- (bool)removeObjectForKey:(id)arg1;
- (bool)removeObjectsForKeys:(id)arg1;
- (bool)saveCache;
- (void)setCache:(id)arg1;
- (bool)setObject:(id)arg1 forKey:(id)arg2;

@end
