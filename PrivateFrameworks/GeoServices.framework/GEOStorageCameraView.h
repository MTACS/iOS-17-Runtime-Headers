
@interface GEOStorageCameraView : PBCodable <NSCopying> {
    GEOURLCamera * _camera;
    struct { 
        unsigned int has_mapType : 1; 
    }  _flags;
    int  _mapType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOURLCamera *camera;
@property (nonatomic, readonly) bool hasCamera;
@property (nonatomic) bool hasMapType;
@property (nonatomic) int mapType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsMapType:(id)arg1;
- (id)camera;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCamera;
- (bool)hasMapType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setHasMapType:(bool)arg1;
- (void)setMapType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
