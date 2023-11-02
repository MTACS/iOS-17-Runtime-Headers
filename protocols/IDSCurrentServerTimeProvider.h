
@protocol IDSCurrentServerTimeProvider

@required

- (bool)isAccurate;
- (unsigned long long)serverTimeInNanoSeconds;

@end
