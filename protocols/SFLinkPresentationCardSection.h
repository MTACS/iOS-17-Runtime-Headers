
@protocol SFLinkPresentationCardSection <SFCardSection>

@required

- (NSString *)coreSpotlightIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isHighlighted;
- (NSData *)jsonData;
- (NSArray *)peopleToBadge;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;
- (void)setIsHighlighted:(bool)arg1;
- (void)setPeopleToBadge:(NSArray *)arg1;
- (void)setUrl:(NSString *)arg1;
- (NSString *)url;

@end
