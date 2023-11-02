
@interface _SFPBCollectionStyleRow : PBCodable <NSSecureCoding, _SFPBCollectionStyleRow> {
    bool  _drawPlattersIfNecessary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawPlattersIfNecessary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (bool)drawPlattersIfNecessary;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDrawPlattersIfNecessary:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
