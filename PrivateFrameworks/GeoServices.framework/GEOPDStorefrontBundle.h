
@interface GEOPDStorefrontBundle : PBCodable <NSCopying> {
    NSMutableArray * _faces;
    struct { 
        unsigned int has_identifier : 1; 
        unsigned int has_matchedMuid : 1; 
        unsigned int read_faces : 1; 
        unsigned int read_presentation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _identifier;
    unsigned long long  _matchedMuid;
    GEOPDStorefrontPresentation * _presentation;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSMutableArray *faces;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic) bool hasMatchedMuid;
@property (nonatomic, readonly) bool hasPresentation;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) unsigned long long matchedMuid;
@property (nonatomic, retain) GEOPDStorefrontPresentation *presentation;

+ (Class)faceType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addFace:(id)arg1;
- (void)clearFaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)faceAtIndex:(unsigned long long)arg1;
- (id)faces;
- (unsigned long long)facesCount;
- (bool)hasIdentifier;
- (bool)hasMatchedMuid;
- (bool)hasPresentation;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)matchedMuid;
- (void)mergeFrom:(id)arg1;
- (id)presentation;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFaces:(id)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasMatchedMuid:(bool)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setMatchedMuid:(unsigned long long)arg1;
- (void)setPresentation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
