
@interface GEOLPRRegion : PBCodable <NSCopying> {
    NSMutableArray * _displayNames;
    struct { 
        unsigned int read_displayNames : 1; 
        unsigned int read_info : 1; 
        unsigned int read_regionBoundingBox : 1; 
        unsigned int read_subRegions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLPRRegionInfo * _info;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLPRBoundingBoxE7 * _regionBoundingBox;
    NSMutableArray * _subRegions;
}

@property (nonatomic, retain) NSMutableArray *displayNames;
@property (nonatomic, readonly) bool hasInfo;
@property (nonatomic, readonly) bool hasRegionBoundingBox;
@property (nonatomic, retain) GEOLPRRegionInfo *info;
@property (nonatomic, retain) GEOLPRBoundingBoxE7 *regionBoundingBox;
@property (nonatomic, retain) NSMutableArray *subRegions;

+ (Class)displayNameType;
+ (bool)isValid:(id)arg1;
+ (Class)subRegionsType;

- (void).cxx_destruct;
- (void)addDisplayName:(id)arg1;
- (void)addSubRegions:(id)arg1;
- (void)clearDisplayNames;
- (void)clearSubRegions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayNameAtIndex:(unsigned long long)arg1;
- (id)displayNames;
- (unsigned long long)displayNamesCount;
- (bool)hasInfo;
- (bool)hasRegionBoundingBox;
- (unsigned long long)hash;
- (id)info;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)regionBoundingBox;
- (void)setDisplayNames:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setRegionBoundingBox:(id)arg1;
- (void)setSubRegions:(id)arg1;
- (id)subRegions;
- (id)subRegionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subRegionsCount;
- (void)writeTo:(id)arg1;

@end
