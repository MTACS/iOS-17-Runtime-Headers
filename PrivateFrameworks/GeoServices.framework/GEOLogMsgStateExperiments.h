
@interface GEOLogMsgStateExperiments : PBCodable <NSCopying> {
    GEOAbAssignInfo * _abAssignInfo;
    GEOABClientConfig * _clientAbExperimentAssignment;
    GEOPDDatasetABStatus * _datasetAbStatus;
    struct { 
        unsigned int read_abAssignInfo : 1; 
        unsigned int read_clientAbExperimentAssignment : 1; 
        unsigned int read_datasetAbStatus : 1; 
        unsigned int read_tilesAbExperimentAssignment : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOABExperimentAssignment * _tilesAbExperimentAssignment;
}

@property (nonatomic, retain) GEOAbAssignInfo *abAssignInfo;
@property (nonatomic, retain) GEOABClientConfig *clientAbExperimentAssignment;
@property (nonatomic, retain) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, readonly) bool hasAbAssignInfo;
@property (nonatomic, readonly) bool hasClientAbExperimentAssignment;
@property (nonatomic, readonly) bool hasDatasetAbStatus;
@property (nonatomic, readonly) bool hasTilesAbExperimentAssignment;
@property (nonatomic, retain) GEOABExperimentAssignment *tilesAbExperimentAssignment;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)abAssignInfo;
- (id)clientAbExperimentAssignment;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datasetAbStatus;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbAssignInfo;
- (bool)hasClientAbExperimentAssignment;
- (bool)hasDatasetAbStatus;
- (bool)hasTilesAbExperimentAssignment;
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
- (void)setAbAssignInfo:(id)arg1;
- (void)setClientAbExperimentAssignment:(id)arg1;
- (void)setDatasetAbStatus:(id)arg1;
- (void)setTilesAbExperimentAssignment:(id)arg1;
- (id)tilesAbExperimentAssignment;
- (void)writeTo:(id)arg1;

@end
