
@protocol SFFlight <NSObject>

@required

- (NSString *)carrierCode;
- (NSString *)carrierName;
- (NSString *)carrierPhoneNumber;
- (NSString *)carrierWebsite;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)flightID;
- (NSString *)flightNumber;
- (NSData *)jsonData;
- (NSArray *)legs;
- (NSString *)operatorCarrierCode;
- (NSString *)operatorFlightNumber;
- (void)setCarrierCode:(NSString *)arg1;
- (void)setCarrierName:(NSString *)arg1;
- (void)setCarrierPhoneNumber:(NSString *)arg1;
- (void)setCarrierWebsite:(NSString *)arg1;
- (void)setFlightID:(NSString *)arg1;
- (void)setFlightNumber:(NSString *)arg1;
- (void)setLegs:(NSArray *)arg1;
- (void)setOperatorCarrierCode:(NSString *)arg1;
- (void)setOperatorFlightNumber:(NSString *)arg1;

@end
