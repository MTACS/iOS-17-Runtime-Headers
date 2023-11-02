
@interface WiFiUsageLQMSample : NSObject

+ (id)allLQMProperties;
+ (id)binLabelfromFieldName:(id)arg1 value:(long long)arg2;
+ (id)featureFromFieldName:(id)arg1;
+ (void)initialize;
+ (bool)isPerSecond:(id)arg1;
+ (long long)subtract:(long long)arg1 From:(long long)arg2;

- (id)asDictionaryInto:(id)arg1;
- (id)description;
- (id)numberForKeyPath:(id)arg1;

@end
