
@interface GEOABClientConfig : PBCodable <NSCopying> {
    NSString * _assignedAbBranchId;
    NSMutableArray * _configKeyValues;
    NSMutableArray * _debugExperimentBranchs;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_assignedAbBranchId : 1; 
        unsigned int read_configKeyValues : 1; 
        unsigned int read_debugExperimentBranchs : 1; 
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

@property (nonatomic, retain) NSString *assignedAbBranchId;
@property (nonatomic, retain) NSMutableArray *configKeyValues;
@property (nonatomic, retain) NSMutableArray *debugExperimentBranchs;
@property (nonatomic, readonly) bool hasAssignedAbBranchId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)configKeyValueType;
+ (Class)debugExperimentBranchType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addConfigKeyValue:(id)arg1;
- (void)addDebugExperimentBranch:(id)arg1;
- (id)assignedAbBranchId;
- (void)clearConfigKeyValues;
- (void)clearDebugExperimentBranchs;
- (void)clearUnknownFields:(bool)arg1;
- (id)configKeyValueAtIndex:(unsigned long long)arg1;
- (id)configKeyValues;
- (unsigned long long)configKeyValuesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugExperimentBranchAtIndex:(unsigned long long)arg1;
- (id)debugExperimentBranchs;
- (unsigned long long)debugExperimentBranchsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssignedAbBranchId;
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
- (void)setAssignedAbBranchId:(id)arg1;
- (void)setConfigKeyValues:(id)arg1;
- (void)setDebugExperimentBranchs:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
