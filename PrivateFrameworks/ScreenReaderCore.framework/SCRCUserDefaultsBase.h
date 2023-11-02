
@interface SCRCUserDefaultsBase : NSObject

- (void)addObserver:(id)arg1 forKey:(id)arg2;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKeyPath:(id)arg1;
- (float)floatForKey:(id)arg1;
- (float)floatForKeyPath:(id)arg1;
- (int)intForKey:(id)arg1;
- (int)intForKeyPath:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setBool:(bool)arg1 forKeyPath:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKeyPath:(id)arg2;
- (void)setInt:(int)arg1 forKey:(id)arg2;
- (void)setInt:(int)arg1 forKeyPath:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)stringForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
