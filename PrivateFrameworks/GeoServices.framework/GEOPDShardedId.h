
@interface GEOPDShardedId : PBCodable <NSCopying> {
    unsigned long long  _basemapId;
    GEOLatLng * _center;
    struct { 
        unsigned int has_basemapId : 1; 
        unsigned int has_muid : 1; 
        unsigned int has_mapsResultType : 1; 
        unsigned int has_resultProviderId : 1; 
    }  _flags;
    int  _mapsResultType;
    unsigned long long  _muid;
    int  _resultProviderId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long basemapId;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) bool hasBasemapId;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic) bool hasMapsResultType;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasResultProviderId;
@property (nonatomic) int mapsResultType;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) int resultProviderId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsMapsResultType:(id)arg1;
- (unsigned long long)basemapId;
- (id)center;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBasemapId;
- (bool)hasCenter;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapsResultType;
- (bool)hasMuid;
- (bool)hasResultProviderId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)mapsResultType;
- (id)mapsResultTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setBasemapId:(unsigned long long)arg1;
- (void)setCenter:(id)arg1;
- (void)setHasBasemapId:(bool)arg1;
- (void)setHasMapsResultType:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setMapsResultType:(int)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setResultProviderId:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
