
@protocol _SFPBShowPurchaseRequestSheetCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)requestIdentifier;
- (void)setRequestIdentifier:(NSString *)arg1;

@end
