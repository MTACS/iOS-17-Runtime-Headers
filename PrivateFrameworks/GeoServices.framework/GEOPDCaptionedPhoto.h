
@interface GEOPDCaptionedPhoto : PBCodable <NSCopying> {
    GEOPDAttribution * _attribution;
    NSString * _author;
    NSString * _caption;
    double  _dateAdded;
    bool  _displayFullPhotoInline;
    bool  _displayFullScreenPhotoGallery;
    struct { 
        unsigned int has_dateAdded : 1; 
        unsigned int has_displayFullPhotoInline : 1; 
        unsigned int has_displayFullScreenPhotoGallery : 1; 
        unsigned int has_highQuality : 1; 
        unsigned int has_isBusinessOwned : 1; 
        unsigned int has_obfuscateFullScreenPhoto : 1; 
        unsigned int has_useGallery : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_attribution : 1; 
        unsigned int read_author : 1; 
        unsigned int read_caption : 1; 
        unsigned int read_joeColor : 1; 
        unsigned int read_licenseDescription : 1; 
        unsigned int read_licenseUrl : 1; 
        unsigned int read_photo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _highQuality;
    bool  _isBusinessOwned;
    GEOPDJoeColor * _joeColor;
    NSString * _licenseDescription;
    NSString * _licenseUrl;
    bool  _obfuscateFullScreenPhoto;
    GEOPDPhoto * _photo;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    bool  _useGallery;
}

+ (id)captionedPhotosForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
