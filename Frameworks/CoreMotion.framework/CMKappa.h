
@interface CMKappa : NSObject

+ (bool)areStatsAvailable;

- (int)getState;
- (void)sendAPCmd:(int)arg1 arg:(int)arg2;

@end
