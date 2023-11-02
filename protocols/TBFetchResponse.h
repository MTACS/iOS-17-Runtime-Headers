
@protocol TBFetchResponse <NSObject>

@required

- (NSError *)error;
- (NSArray *)results;
- (NSSet *)tiles;

@optional

- (NSDictionary *)resultsByBSSID;

@end
