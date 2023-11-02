
@protocol _SFPBLinkPresentationCardSection <NSObject>

@required

- (void)addPeopleToBadge:(_SFPBPerson *)arg1;
- (void)clearPeopleToBadge;
- (NSString *)coreSpotlightIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isHighlighted;
- (NSData *)jsonData;
- (_SFPBPerson *)peopleToBadgeAtIndex:(unsigned long long)arg1;
- (unsigned long long)peopleToBadgeCount;
- (NSArray *)peopleToBadges;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;
- (void)setIsHighlighted:(bool)arg1;
- (void)setPeopleToBadges:(NSArray *)arg1;
- (void)setUrl:(NSString *)arg1;
- (NSString *)url;

@end
