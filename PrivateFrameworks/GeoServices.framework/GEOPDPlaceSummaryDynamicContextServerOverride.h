
@interface GEOPDPlaceSummaryDynamicContextServerOverride : PBCodable <NSCopying> {
    struct { 
        unsigned int read_mapsIds : 1; 
        unsigned int read_serverDynamicContexts : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _mapsIds;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _serverDynamicContexts;
}

@property (nonatomic, readonly) NSArray *mapItemIdentifiers;
@property (nonatomic, retain) NSMutableArray *mapsIds;
@property (nonatomic, retain) NSMutableArray *serverDynamicContexts;

+ (bool)isValid:(id)arg1;
+ (Class)mapsIdType;
+ (Class)serverDynamicContextType;

- (void).cxx_destruct;
- (void)addMapsId:(id)arg1;
- (void)addServerDynamicContext:(id)arg1;
- (void)clearMapsIds;
- (void)clearServerDynamicContexts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapItemIdentifiers;
- (id)mapsIdAtIndex:(unsigned long long)arg1;
- (id)mapsIds;
- (unsigned long long)mapsIdsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)serverDynamicContextAtIndex:(unsigned long long)arg1;
- (id)serverDynamicContexts;
- (unsigned long long)serverDynamicContextsCount;
- (void)setMapsIds:(id)arg1;
- (void)setServerDynamicContexts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
