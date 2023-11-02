
@interface GEOPDStorefrontView : PBCodable <NSCopying> {
    struct { 
        unsigned int has_imdataId : 1; 
        unsigned int read_lookAtGeo : 1; 
        unsigned int read_lookAt : 1; 
        unsigned int read_photoPosition : 1; 
        unsigned int read_viewpointGeo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _imdataId;
    GEOPDOrientedPosition * _lookAt;
    GEOPDGeographicCoordinate * _lookAtGeo;
    GEOPDPhotoPosition * _photoPosition;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDGeographicCoordinate * _viewpointGeo;
}

@property (nonatomic) bool hasImdataId;
@property (nonatomic, readonly) bool hasLookAt;
@property (nonatomic, readonly) bool hasLookAtGeo;
@property (nonatomic, readonly) bool hasPhotoPosition;
@property (nonatomic, readonly) bool hasViewpointGeo;
@property (nonatomic) unsigned long long imdataId;
@property (nonatomic, retain) GEOPDOrientedPosition *lookAt;
@property (nonatomic, retain) GEOPDGeographicCoordinate *lookAtGeo;
@property (nonatomic, retain) GEOPDPhotoPosition *photoPosition;
@property (nonatomic, retain) GEOPDGeographicCoordinate *viewpointGeo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImdataId;
- (bool)hasLookAt;
- (bool)hasLookAtGeo;
- (bool)hasPhotoPosition;
- (bool)hasViewpointGeo;
- (unsigned long long)hash;
- (unsigned long long)imdataId;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)lookAt;
- (id)lookAtGeo;
- (void)mergeFrom:(id)arg1;
- (id)photoPosition;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasImdataId:(bool)arg1;
- (void)setImdataId:(unsigned long long)arg1;
- (void)setLookAt:(id)arg1;
- (void)setLookAtGeo:(id)arg1;
- (void)setPhotoPosition:(id)arg1;
- (void)setViewpointGeo:(id)arg1;
- (id)viewpointGeo;
- (void)writeTo:(id)arg1;

@end
