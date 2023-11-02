
@interface ENPreferencesStore : NSObject {
    NSString * _pathname;
    NSMutableDictionary * _store;
}

@property (nonatomic, retain) NSString *pathname;
@property (nonatomic, retain) NSMutableDictionary *store;

+ (id)defaultPreferenceStore;
+ (id)pathnameForStoreFilename:(id)arg1;
+ (id)preferenceStoreWithSecurityApplicationGroupIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)decodedObjectForKey:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithStoreFilename:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)load;
- (id)objectForKey:(id)arg1;
- (id)pathname;
- (void)removeAllItems;
- (void)save;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPathname:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
