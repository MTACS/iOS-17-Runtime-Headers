
@interface GEORPGroundViewImageResource : PBCodable <NSCopying> {
    unsigned int  _cameraNumber;
    struct { 
        unsigned int has_cameraNumber : 1; 
        unsigned int has_loadStatus : 1; 
        unsigned int has_lod : 1; 
    }  _flags;
    int  _loadStatus;
    unsigned int  _lod;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int cameraNumber;
@property (nonatomic) bool hasCameraNumber;
@property (nonatomic) bool hasLoadStatus;
@property (nonatomic) bool hasLod;
@property (nonatomic) int loadStatus;
@property (nonatomic) unsigned int lod;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLoadStatus:(id)arg1;
- (unsigned int)cameraNumber;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCameraNumber;
- (bool)hasLoadStatus;
- (bool)hasLod;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)loadStatus;
- (id)loadStatusAsString:(int)arg1;
- (unsigned int)lod;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCameraNumber:(unsigned int)arg1;
- (void)setHasCameraNumber:(bool)arg1;
- (void)setHasLoadStatus:(bool)arg1;
- (void)setHasLod:(bool)arg1;
- (void)setLoadStatus:(int)arg1;
- (void)setLod:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
