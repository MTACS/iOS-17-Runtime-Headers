
@interface GEORPUpdatedLabel : PBCodable <NSCopying> {
    GEOLatLng * _center;
    struct { 
        unsigned int read_center : 1; 
        unsigned int read_localizedText : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _localizedText;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic, readonly) bool hasLocalizedText;
@property (nonatomic, retain) NSString *localizedText;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)center;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCenter;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocalizedText;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localizedText;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setLocalizedText:(id)arg1;
- (void)writeTo:(id)arg1;

@end
