
@interface AppTelemetryQBSPerformance : PBCodable <NSCopying> {
    struct { 
        unsigned int recordsFetched : 1; 
        unsigned int recordsFetchedTotalMetadataSize : 1; 
        unsigned int totalTime : 1; 
        unsigned int xattrsFetchedTotalSize : 1; 
    }  _has;
    NSString * _operationType;
    unsigned long long  _recordsFetched;
    unsigned long long  _recordsFetchedTotalMetadataSize;
    unsigned long long  _totalTime;
    unsigned long long  _xattrsFetchedTotalSize;
}

@property (nonatomic, readonly) bool hasOperationType;
@property (nonatomic) bool hasRecordsFetched;
@property (nonatomic) bool hasRecordsFetchedTotalMetadataSize;
@property (nonatomic) bool hasTotalTime;
@property (nonatomic) bool hasXattrsFetchedTotalSize;
@property (nonatomic, retain) NSString *operationType;
@property (nonatomic) unsigned long long recordsFetched;
@property (nonatomic) unsigned long long recordsFetchedTotalMetadataSize;
@property (nonatomic) unsigned long long totalTime;
@property (nonatomic) unsigned long long xattrsFetchedTotalSize;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOperationType;
- (bool)hasRecordsFetched;
- (bool)hasRecordsFetchedTotalMetadataSize;
- (bool)hasTotalTime;
- (bool)hasXattrsFetchedTotalSize;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)operationType;
- (bool)readFrom:(id)arg1;
- (unsigned long long)recordsFetched;
- (unsigned long long)recordsFetchedTotalMetadataSize;
- (void)setHasRecordsFetched:(bool)arg1;
- (void)setHasRecordsFetchedTotalMetadataSize:(bool)arg1;
- (void)setHasTotalTime:(bool)arg1;
- (void)setHasXattrsFetchedTotalSize:(bool)arg1;
- (void)setOperationType:(id)arg1;
- (void)setRecordsFetched:(unsigned long long)arg1;
- (void)setRecordsFetchedTotalMetadataSize:(unsigned long long)arg1;
- (void)setTotalTime:(unsigned long long)arg1;
- (void)setXattrsFetchedTotalSize:(unsigned long long)arg1;
- (unsigned long long)totalTime;
- (void)writeTo:(id)arg1;
- (unsigned long long)xattrsFetchedTotalSize;

@end
