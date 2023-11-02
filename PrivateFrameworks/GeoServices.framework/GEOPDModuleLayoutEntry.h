
@interface GEOPDModuleLayoutEntry : PBCodable <NSCopying> {
    NSMutableArray * _applicationIds;
    NSString * _debugLayoutId;
    struct { 
        unsigned int has_platformType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_applicationIds : 1; 
        unsigned int read_debugLayoutId : 1; 
        unsigned int read_modules : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _modules;
    int  _platformType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *applicationIds;
@property (nonatomic, retain) NSString *debugLayoutId;
@property (nonatomic, readonly) bool hasDebugLayoutId;
@property (nonatomic) bool hasPlatformType;
@property (nonatomic, retain) NSMutableArray *modules;
@property (nonatomic) int platformType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)applicationIdType;
+ (bool)isValid:(id)arg1;
+ (Class)modulesType;

- (void).cxx_destruct;
- (int)StringAsPlatformType:(id)arg1;
- (void)addApplicationId:(id)arg1;
- (void)addModules:(id)arg1;
- (id)applicationIdAtIndex:(unsigned long long)arg1;
- (id)applicationIds;
- (unsigned long long)applicationIdsCount;
- (void)clearApplicationIds;
- (void)clearModules;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugLayoutId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDebugLayoutId;
- (bool)hasPlatformType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)modules;
- (id)modulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)modulesCount;
- (int)platformType;
- (id)platformTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApplicationIds:(id)arg1;
- (void)setDebugLayoutId:(id)arg1;
- (void)setHasPlatformType:(bool)arg1;
- (void)setModules:(id)arg1;
- (void)setPlatformType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
