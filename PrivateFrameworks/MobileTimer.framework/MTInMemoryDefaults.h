
@interface MTInMemoryDefaults : NSObject <MTPersistence> {
    NSMutableDictionary * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)floatForKey:(id)arg1;
- (id)init;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 defaultValue:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setStorage:(id)arg1;
- (id)storage;
- (void)synchronize;

@end
