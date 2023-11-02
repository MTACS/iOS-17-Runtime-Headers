
@protocol _ICPredictionManaging <NSObject>

@required

- (void)hibernate;
- (NSArray *)lastCachedResultWithInitialCharacters:(NSString *)arg1;
- (void)predictedItemSelected:(NSString *)arg1;
- (void)propogateMetrics:(NSString *)arg1 data:(NSDictionary *)arg2;
- (void)provideFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)providePredictionFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)reset;
- (NSArray *)searchForMeCardEmailAddresses;
- (NSArray *)searchForMeCardRegions;
- (NSArray *)searchWithTriggers:(NSArray *)arg1 application:(NSString *)arg2 recipient:(NSString *)arg3 localeIdentifier:(NSString *)arg4 isResponseDenyListed:(bool)arg5 shouldDisableAutoCaps:(bool)arg6 timeoutInMilliseconds:(int)arg7 resultLimit:(int)arg8 error:(id*)arg9;
- (NSArray *)searchWithTriggers:(NSArray *)arg1 application:(NSString *)arg2 recipient:(NSString *)arg3 localeIdentifier:(NSString *)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7;
- (void)warmUp;

@end
