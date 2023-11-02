
@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable <NSCopying> {
    NSMutableArray * _clientConfigs;
    GEOPDABClientDatasetMetadata * _clientDatasetMetadata;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_clientConfigs : 1; 
        unsigned int read_clientDatasetMetadata : 1; 
        unsigned int read_serverAbAssignments : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _serverAbAssignments;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *clientConfigs;
@property (nonatomic, retain) GEOPDABClientDatasetMetadata *clientDatasetMetadata;
@property (nonatomic, readonly) bool hasClientDatasetMetadata;
@property (nonatomic, retain) NSMutableArray *serverAbAssignments;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)clientConfigType;
+ (bool)isValid:(id)arg1;
+ (Class)serverAbAssignmentType;

- (void).cxx_destruct;
- (void)addClientConfig:(id)arg1;
- (void)addServerAbAssignment:(id)arg1;
- (void)clearClientConfigs;
- (void)clearServerAbAssignments;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientConfigAtIndex:(unsigned long long)arg1;
- (id)clientConfigs;
- (unsigned long long)clientConfigsCount;
- (id)clientDatasetMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientDatasetMetadata;
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
- (id)serverAbAssignmentAtIndex:(unsigned long long)arg1;
- (id)serverAbAssignments;
- (unsigned long long)serverAbAssignmentsCount;
- (void)setClientConfigs:(id)arg1;
- (void)setClientDatasetMetadata:(id)arg1;
- (void)setServerAbAssignments:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
