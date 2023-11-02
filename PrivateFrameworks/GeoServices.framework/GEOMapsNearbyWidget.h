
@interface GEOMapsNearbyWidget : PBCodable <NSCopying> {
    struct { 
        unsigned int has_tappedItemIndex : 1; 
    }  _flags;
    GEOMapsServerMetadata * _serverMetadata;
    int  _tappedItemIndex;
}

@property (nonatomic, readonly) bool hasServerMetadata;
@property (nonatomic) bool hasTappedItemIndex;
@property (nonatomic, retain) GEOMapsServerMetadata *serverMetadata;
@property (nonatomic) int tappedItemIndex;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasServerMetadata;
- (bool)hasTappedItemIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)serverMetadata;
- (void)setHasTappedItemIndex:(bool)arg1;
- (void)setServerMetadata:(id)arg1;
- (void)setTappedItemIndex:(int)arg1;
- (int)tappedItemIndex;
- (void)writeTo:(id)arg1;

@end
