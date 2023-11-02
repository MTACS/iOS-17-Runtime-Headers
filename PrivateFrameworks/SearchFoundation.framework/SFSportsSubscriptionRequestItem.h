
@interface SFSportsSubscriptionRequestItem : SFDomainSubscriptionRequestItem <NSCopying, NSSecureCoding, SFSportsSubscriptionRequestItem> {
    NSString * _canonicalIdentifier;
    NSString * _leagueIdentifier;
    NSString * _sportIdentifier;
}

@property (nonatomic, copy) NSString *canonicalIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *leagueIdentifier;
@property (nonatomic, copy) NSString *sportIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)canonicalIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)leagueIdentifier;
- (void)setCanonicalIdentifier:(id)arg1;
- (void)setLeagueIdentifier:(id)arg1;
- (void)setSportIdentifier:(id)arg1;
- (id)sportIdentifier;

@end
