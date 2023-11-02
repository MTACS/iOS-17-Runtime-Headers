
@protocol _SFPBProductInventoryResult <NSObject>

@required

- (void)addAvailability:(_SFPBProductInventory *)arg1;
- (_SFPBProductInventory *)availabilityAtIndex:(unsigned long long)arg1;
- (unsigned long long)availabilityCount;
- (NSArray *)availabilitys;
- (void)clearAvailability;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)productIdentifier;
- (void)setAvailabilitys:(NSArray *)arg1;
- (void)setProductIdentifier:(NSString *)arg1;

@end
