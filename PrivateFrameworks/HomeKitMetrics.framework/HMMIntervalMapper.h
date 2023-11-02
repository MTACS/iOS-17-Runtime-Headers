
@interface HMMIntervalMapper : NSObject

+ (id)unsignedClosedOpenFixedIntervalMapper:(id)arg1;
+ (id)unsignedOpenClosedFixedIntervalMapper:(id)arg1;

- (id)intervalForValue:(unsigned long long)arg1;
- (id)intervalIndexForValue:(unsigned long long)arg1;

@end
