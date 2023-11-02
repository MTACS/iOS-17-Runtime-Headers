
@interface CloudSettingsStore : NSObject {
    NSUbiquitousKeyValueStore * _kvsStore;
    NSString * _serviceIdentifier;
}

@property (readonly) NSUbiquitousKeyValueStore *kvsStore;
@property (readonly) NSString *serviceIdentifier;

- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithStoreIdentifier:(id)arg1;
- (int)keyExists:(id)arg1 andIsOfType:(id)arg2;
- (id)kvsStore;
- (id)numberForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)serviceIdentifier;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)syncNow:(bool)arg1;

@end
