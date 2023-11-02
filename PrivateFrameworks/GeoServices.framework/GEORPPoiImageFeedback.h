
@interface GEORPPoiImageFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_poiImageContext : 1; 
        unsigned int read_poiImageCorrections : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPPoiImageFeedbackContext * _poiImageContext;
    GEORPPoiImageFeedbackCorrections * _poiImageCorrections;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPoiImageContext;
@property (nonatomic, readonly) bool hasPoiImageCorrections;
@property (nonatomic, retain) GEORPPoiImageFeedbackContext *poiImageContext;
@property (nonatomic, retain) GEORPPoiImageFeedbackCorrections *poiImageCorrections;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPoiImageContext;
- (bool)hasPoiImageCorrections;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)poiImageContext;
- (id)poiImageCorrections;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPoiImageContext:(id)arg1;
- (void)setPoiImageCorrections:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
