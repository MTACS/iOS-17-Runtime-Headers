
@interface _SFPBLinkPresentationCardSection : PBCodable <NSSecureCoding, _SFPBLinkPresentationCardSection> {
    NSString * _coreSpotlightIdentifier;
    bool  _isHighlighted;
    NSArray * _peopleToBadges;
    NSString * _url;
}

@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isHighlighted;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *peopleToBadges;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (void)addPeopleToBadge:(id)arg1;
- (void)clearPeopleToBadge;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHighlighted;
- (id)jsonData;
- (id)peopleToBadgeAtIndex:(unsigned long long)arg1;
- (unsigned long long)peopleToBadgeCount;
- (id)peopleToBadges;
- (bool)readFrom:(id)arg1;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)setIsHighlighted:(bool)arg1;
- (void)setPeopleToBadge:(id)arg1;
- (void)setPeopleToBadges:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)writeTo:(id)arg1;

@end
