
@interface DRSProtoDiagnosticRequestStatsBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    DRSProtoClientDeviceMetadata * _clientMetadata;
    NSMutableArray * _requestsResultsStats;
}

@property (nonatomic, retain) DRSProtoClientDeviceMetadata *clientMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *requestsResultsStats;
@property (readonly) Class superclass;

+ (Class)requestsResultsStatsType;

- (void).cxx_destruct;
- (void)addRequestsResultsStats:(id)arg1;
- (void)clearRequestsResultsStats;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestsResultsStats;
- (id)requestsResultsStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestsResultsStatsCount;
- (void)setClientMetadata:(id)arg1;
- (void)setRequestsResultsStats:(id)arg1;
- (void)writeTo:(id)arg1;

@end
