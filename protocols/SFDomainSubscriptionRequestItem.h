
@protocol SFDomainSubscriptionRequestItem <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;

@end
