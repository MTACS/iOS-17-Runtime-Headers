
@interface GEOPDStorefrontPresentation : PBCodable <NSCopying> {
    GEOPDStorefrontView * _closeUpView;
    struct { 
        unsigned int read_closeUpView : 1; 
        unsigned int read_overlayImageUrl : 1; 
        unsigned int read_standOffView : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _overlayImageUrl;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDStorefrontView * _standOffView;
}

@property (nonatomic, retain) GEOPDStorefrontView *closeUpView;
@property (nonatomic, readonly) bool hasCloseUpView;
@property (nonatomic, readonly) bool hasOverlayImageUrl;
@property (nonatomic, readonly) bool hasStandOffView;
@property (nonatomic, retain) NSString *overlayImageUrl;
@property (nonatomic, retain) GEOPDStorefrontView *standOffView;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)closeUpView;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCloseUpView;
- (bool)hasOverlayImageUrl;
- (bool)hasStandOffView;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)overlayImageUrl;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCloseUpView:(id)arg1;
- (void)setOverlayImageUrl:(id)arg1;
- (void)setStandOffView:(id)arg1;
- (id)standOffView;
- (void)writeTo:(id)arg1;

@end
