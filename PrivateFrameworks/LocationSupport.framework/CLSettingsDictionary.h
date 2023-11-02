
@interface CLSettingsDictionary : NSObject {
    id  _internal;
}

@property (nonatomic, retain) NSDictionary *dictionary;

+ (id)settingsWithDictionary:(id)arg1;

- (id)arrayForKey:(id)arg1 defaultValue:(id)arg2;
- (bool)boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (void)dealloc;
- (id)dictionary;
- (id)dictionaryForKey:(id)arg1 defaultValue:(id)arg2;
- (double)doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (float)floatForKey:(id)arg1 defaultValue:(float)arg2;
- (bool)hasValueForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (int)intForKey:(id)arg1 defaultValue:(int)arg2;
- (bool)isEqual:(id)arg1;
- (long long)longForKey:(id)arg1 defaultValue:(long long)arg2;
- (void)setDictionary:(id)arg1;
- (short)shortForKey:(id)arg1 defaultValue:(short)arg2;
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;

@end
