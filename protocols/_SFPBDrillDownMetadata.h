
@protocol _SFPBDrillDownMetadata <NSObject>

@required

- (void)addCardDomains:(NSString *)arg1;
- (void)addCardIdentifiers:(NSString *)arg1;
- (NSArray *)cardDomains;
- (NSString *)cardDomainsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardDomainsCount;
- (NSString *)cardIdentifier;
- (NSArray *)cardIdentifiers;
- (NSString *)cardIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardIdentifiersCount;
- (_SFPBCardMetadata *)cardOnlyMetadata;
- (_SFPBCardSearchMetadata *)cardSearchMetadata;
- (void)clearCardDomains;
- (void)clearCardIdentifiers;
- (NSString *)debugParams;
- (_SFPBEntitySearchMetadata *)entitySearchMetadata;
- (_SFPBEntitySearchMetadata *)entitySearchOnlyMetadata;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)qtype;
- (void)setCardDomains:(NSArray *)arg1;
- (void)setCardIdentifier:(NSString *)arg1;
- (void)setCardIdentifiers:(NSArray *)arg1;
- (void)setCardOnlyMetadata:(_SFPBCardMetadata *)arg1;
- (void)setCardSearchMetadata:(_SFPBCardSearchMetadata *)arg1;
- (void)setDebugParams:(NSString *)arg1;
- (void)setEntitySearchMetadata:(_SFPBEntitySearchMetadata *)arg1;
- (void)setEntitySearchOnlyMetadata:(_SFPBEntitySearchMetadata *)arg1;
- (void)setQtype:(NSString *)arg1;
- (void)setViewConfigName:(NSString *)arg1;
- (NSString *)viewConfigName;
- (unsigned long long)whichMetadata;

@end
