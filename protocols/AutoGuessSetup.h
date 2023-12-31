
@protocol AutoGuessSetup

@required

- (int)setupFromAutoguessRecommendation:(NSDictionary *)arg1 withOptions:(NSDictionary *)arg2;

@optional

- (NSDictionary *)restoreRecommendation;
- (void)setRestoreRecommendation:(NSDictionary *)arg1;

@end
