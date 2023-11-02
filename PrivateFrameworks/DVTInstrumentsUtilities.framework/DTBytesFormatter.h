
@interface DTBytesFormatter : NSNumberFormatter

+ (void)initialize;
+ (id)magnitudeFormatter;
+ (id)stringForLongLong:(long long)arg1;
+ (id)stringForObjectValue:(id)arg1;
+ (id)stringFromNumber:(id)arg1;

- (id)stringForObjectValue:(id)arg1;
- (id)stringFromNumber:(id)arg1;

@end
