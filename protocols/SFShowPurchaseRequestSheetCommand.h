
@protocol SFShowPurchaseRequestSheetCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)requestIdentifier;
- (void)setRequestIdentifier:(NSString *)arg1;

@end
