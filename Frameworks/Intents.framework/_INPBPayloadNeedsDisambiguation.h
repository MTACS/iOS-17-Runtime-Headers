
@interface _INPBPayloadNeedsDisambiguation : PBCodable <NSCopying, NSSecureCoding, _INPBPayloadNeedsDisambiguation> {
    NSArray * _disambiguationItems;
    struct { }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *disambiguationItems;
@property (nonatomic, readonly) unsigned long long disambiguationItemsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)disambiguationItemsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDisambiguationItems:(id)arg1;
- (void)clearDisambiguationItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)disambiguationItems;
- (id)disambiguationItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationItemsCount;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisambiguationItems:(id)arg1;
- (void)writeTo:(id)arg1;

@end
