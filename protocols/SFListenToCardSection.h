
@protocol SFListenToCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (SFCardSection *)fallbackCardSection;
- (NSData *)jsonData;
- (SFMediaMetadata *)mediaMetadata;
- (void)setFallbackCardSection:(SFCardSection *)arg1;
- (void)setMediaMetadata:(SFMediaMetadata *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
