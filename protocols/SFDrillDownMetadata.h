
@protocol SFDrillDownMetadata <NSObject>

@required

- (NSArray *)cardDomains;
- (NSString *)cardIdentifier;
- (NSArray *)cardIdentifiers;
- (SFCardMetadata *)cardOnlyMetadata;
- (SFCardSearchMetadata *)cardSearchMetadata;
- (NSString *)debugParams;
- (NSDictionary *)dictionaryRepresentation;
- (SFEntitySearchMetadata *)entitySearchMetadata;
- (SFEntitySearchMetadata *)entitySearchOnlyMetadata;
- (NSData *)jsonData;
- (NSString *)qtype;
- (void)setCardDomains:(NSArray *)arg1;
- (void)setCardIdentifier:(NSString *)arg1;
- (void)setCardIdentifiers:(NSArray *)arg1;
- (void)setCardOnlyMetadata:(SFCardMetadata *)arg1;
- (void)setCardSearchMetadata:(SFCardSearchMetadata *)arg1;
- (void)setDebugParams:(NSString *)arg1;
- (void)setEntitySearchMetadata:(SFEntitySearchMetadata *)arg1;
- (void)setEntitySearchOnlyMetadata:(SFEntitySearchMetadata *)arg1;
- (void)setQtype:(NSString *)arg1;
- (void)setViewConfigName:(NSString *)arg1;
- (NSString *)viewConfigName;

@end
