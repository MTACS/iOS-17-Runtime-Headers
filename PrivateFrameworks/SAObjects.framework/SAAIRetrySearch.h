
@interface SAAIRetrySearch : SABaseClientBoundCommand

@property (nonatomic) double minimumDurationForRetry;

+ (id)retrySearch;
+ (id)retrySearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (double)minimumDurationForRetry;
- (bool)requiresResponse;
- (void)setMinimumDurationForRetry:(double)arg1;

@end
