
@protocol IDSIDQueryControllerDelegate <NSObject>

@optional

- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1 service:(NSString *)arg2;
- (void)idsKTVerifierResultsUpdatedForDestinations:(NSDictionary *)arg1 service:(NSString *)arg2;

@end
