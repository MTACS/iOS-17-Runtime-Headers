
@interface _SFPBShareItem : PBCodable <NSSecureCoding, _SFPBShareItem> {
    _SFPBCoreSpotlightShareItem * _spotlightShareItem;
    _SFPBURLShareItem * _urlShareItem;
    unsigned long long  _whichValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBCoreSpotlightShareItem *spotlightShareItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBURLShareItem *urlShareItem;
@property (nonatomic, readonly) unsigned long long whichValue;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setSpotlightShareItem:(id)arg1;
- (void)setUrlShareItem:(id)arg1;
- (id)spotlightShareItem;
- (id)urlShareItem;
- (unsigned long long)whichValue;
- (void)writeTo:(id)arg1;

@end
