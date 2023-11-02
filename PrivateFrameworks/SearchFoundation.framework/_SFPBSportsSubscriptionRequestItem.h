
@interface _SFPBSportsSubscriptionRequestItem : PBCodable <NSSecureCoding, _SFPBSportsSubscriptionRequestItem> {
    NSString * _canonicalIdentifier;
    NSString * _leagueIdentifier;
    NSString * _sportIdentifier;
}

@property (nonatomic, copy) NSString *canonicalIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *leagueIdentifier;
@property (nonatomic, copy) NSString *sportIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)canonicalIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)leagueIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setCanonicalIdentifier:(id)arg1;
- (void)setLeagueIdentifier:(id)arg1;
- (void)setSportIdentifier:(id)arg1;
- (id)sportIdentifier;
- (void)writeTo:(id)arg1;

@end
