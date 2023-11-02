
@protocol SFEngagedResult

@required

- (NSDate *)engagementTime;
- (double)freshnessScore;
- (double)score;
- (NSString *)searchString;
- (NSString *)title;
- (int)type;

@optional

- (NSData *)encodedNormalizedTopic;
- (void)setEncodedNormalizedTopic:(NSData *)arg1;

@end
