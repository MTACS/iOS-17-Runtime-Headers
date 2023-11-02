
@interface GEOCategory : PBCodable <NSCopying> {
    NSString * _alias;
    struct { 
        unsigned int has_geoOntologyId : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_alias : 1; 
        unsigned int read_localizedNames : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    long long  _geoOntologyId;
    int  _level;
    NSMutableArray * _localizedNames;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *alias;
@property (nonatomic) long long geoOntologyId;
@property (nonatomic) bool hasGeoOntologyId;
@property (nonatomic) int level;
@property (nonatomic, retain) NSMutableArray *localizedNames;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)localizedNamesType;

- (void).cxx_destruct;
- (void)addLocalizedNames:(id)arg1;
- (id)alias;
- (void)clearLocalizedNames;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)geoOntologyId;
- (bool)hasGeoOntologyId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithPlaceDataCategory:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)level;
- (id)localizedNames;
- (id)localizedNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedNamesCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setGeoOntologyId:(long long)arg1;
- (void)setHasGeoOntologyId:(bool)arg1;
- (void)setLevel:(int)arg1;
- (void)setLocalizedNames:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
