
@protocol WeatherPreferencesPersistence <NSObject>

@required

- (NSArray *)arrayForKey:(NSString *)arg1;
- (bool)boolForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1;
- (void)setBool:(bool)arg1 forKey:(NSString *)arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (NSString *)stringForKey:(NSString *)arg1;
- (bool)synchronize;

@end
