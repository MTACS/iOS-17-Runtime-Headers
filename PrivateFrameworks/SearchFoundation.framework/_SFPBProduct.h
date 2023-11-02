
@interface _SFPBProduct : PBCodable <NSSecureCoding, _SFPBProduct> {
    _SFPBURL * _availabilityURL;
    bool  _buyable;
    NSString * _displayName;
    NSString * _identifier;
    NSString * _productIdentifier;
}

@property (nonatomic, retain) _SFPBURL *availabilityURL;
@property (nonatomic) bool buyable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *productIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)availabilityURL;
- (bool)buyable;
- (id)dictionaryRepresentation;
- (id)displayName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)productIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAvailabilityURL:(id)arg1;
- (void)setBuyable:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
