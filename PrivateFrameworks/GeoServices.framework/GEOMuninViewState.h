
@interface GEOMuninViewState : PBCodable <NSCopying> {
    GEOCameraFrame * _cameraFrame;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_cameraFrame : 1; 
        unsigned int read_locationInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLocationInfo * _locationInfo;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOCameraFrame *cameraFrame;
@property (nonatomic, readonly) bool hasCameraFrame;
@property (nonatomic, readonly) bool hasLocationInfo;
@property (nonatomic, retain) GEOLocationInfo *locationInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)cameraFrame;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCameraFrame;
- (bool)hasLocationInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)locationInfo;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCameraFrame:(id)arg1;
- (void)setLocationInfo:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
