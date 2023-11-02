
@protocol SFProductInventoryResult <NSObject>

@required

- (NSArray *)availability;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)productIdentifier;
- (void)setAvailability:(NSArray *)arg1;
- (void)setProductIdentifier:(NSString *)arg1;

@end
