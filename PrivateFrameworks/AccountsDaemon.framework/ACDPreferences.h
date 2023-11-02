
@interface ACDPreferences : NSObject

+ (id)sharedPreferences;

- (id)objectForKey:(id)arg1;
- (void)reset;
- (double)serverTimeoutInterval;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)synchronize;

@end
