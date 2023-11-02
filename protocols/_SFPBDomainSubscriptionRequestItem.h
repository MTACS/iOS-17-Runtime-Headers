
@protocol _SFPBDomainSubscriptionRequestItem <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setSportsSubscriptionRequestItem:(_SFPBSportsSubscriptionRequestItem *)arg1;
- (_SFPBSportsSubscriptionRequestItem *)sportsSubscriptionRequestItem;
- (unsigned long long)whichValue;

@end
