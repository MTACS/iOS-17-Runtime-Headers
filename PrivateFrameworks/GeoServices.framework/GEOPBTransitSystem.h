
@interface GEOPBTransitSystem : PBCodable <GEOTransitNamedItem, NSCopying> {
    GEOPBTransitArtwork * _artwork;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_systemIndex : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_artwork : 1; 
        unsigned int read_nameDisplayString : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int read_website : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _muid;
    NSString * _nameDisplayString;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOStyleAttributes * _styleAttributes;
    unsigned int  _systemIndex;
    PBUnknownFields * _unknownFields;
    NSString * _website;
}

@property (nonatomic, retain) GEOPBTransitArtwork *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasNameDisplayString;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic) bool hasSystemIndex;
@property (nonatomic, readonly) bool hasWebsite;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *nameDisplayString;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *website;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)artwork;
- (id)bestName;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoTransitSystem;
- (bool)hasArtwork;
- (bool)hasMuid;
- (bool)hasNameDisplayString;
- (bool)hasStyleAttributes;
- (bool)hasSystemIndex;
- (bool)hasWebsite;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasSystemIndex:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setSystemIndex:(unsigned int)arg1;
- (void)setWebsite:(id)arg1;
- (id)styleAttributes;
- (unsigned int)systemIndex;
- (id)unknownFields;
- (id)website;
- (void)writeTo:(id)arg1;

@end
