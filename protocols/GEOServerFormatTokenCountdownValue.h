
@protocol GEOServerFormatTokenCountdownValue <NSObject, NSCoding>

@required

- (NSDictionary *)alternativeFormatStringsByType;
- (long long)countdownType;
- (NSString *)separator;
- (NSArray *)timestamps;

@end
