
@interface _SFPBCollectionStyle : PBCodable <NSSecureCoding, _SFPBCollectionStyle> {
    _SFPBCollectionStyleGrid * _collectionStyleGrid;
    _SFPBCollectionStyleRow * _collectionStyleRow;
    _SFPBCollectionStyleHorizontallyScrolling * _collectionStyleScrolling;
    unsigned int  _initiallyVisibleCardSectionCount;
    unsigned long long  _whichValue;
}

@property (nonatomic, retain) _SFPBCollectionStyleGrid *collectionStyleGrid;
@property (nonatomic, retain) _SFPBCollectionStyleRow *collectionStyleRow;
@property (nonatomic, retain) _SFPBCollectionStyleHorizontallyScrolling *collectionStyleScrolling;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int initiallyVisibleCardSectionCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long whichValue;

- (void).cxx_destruct;
- (id)collectionStyleGrid;
- (id)collectionStyleRow;
- (id)collectionStyleScrolling;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (unsigned int)initiallyVisibleCardSectionCount;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCollectionStyleGrid:(id)arg1;
- (void)setCollectionStyleRow:(id)arg1;
- (void)setCollectionStyleScrolling:(id)arg1;
- (void)setInitiallyVisibleCardSectionCount:(unsigned int)arg1;
- (unsigned long long)whichValue;
- (void)writeTo:(id)arg1;

@end
