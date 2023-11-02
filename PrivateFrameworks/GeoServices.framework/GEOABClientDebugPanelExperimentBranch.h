
@interface GEOABClientDebugPanelExperimentBranch : PBCodable <NSCopying> {
    NSMutableArray * _configKeyValues;
    GEOABDebugPanelExperimentBranch * _debugExperimentBranch;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_configKeyValues : 1; 
        unsigned int read_debugExperimentBranch : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *configKeyValues;
@property (nonatomic, retain) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (nonatomic, readonly) bool hasDebugExperimentBranch;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)configKeyValueType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addConfigKeyValue:(id)arg1;
- (void)clearConfigKeyValues;
- (void)clearUnknownFields:(bool)arg1;
- (id)configKeyValueAtIndex:(unsigned long long)arg1;
- (id)configKeyValues;
- (unsigned long long)configKeyValuesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugExperimentBranch;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDebugExperimentBranch;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfigKeyValues:(id)arg1;
- (void)setDebugExperimentBranch:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
