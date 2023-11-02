
@interface DTNanoTimestampFormatter : NSNumberFormatter

+ (id)stringForNanoseconds:(unsigned long long)arg1;
+ (id)stringForNanoseconds:(unsigned long long)arg1 highestResolutionTimeEnabled:(bool)arg2;

- (id)stringForObjectValue:(id)arg1;

@end
