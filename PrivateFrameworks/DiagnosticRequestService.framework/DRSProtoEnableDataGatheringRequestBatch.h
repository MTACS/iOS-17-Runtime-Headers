
@interface DRSProtoEnableDataGatheringRequestBatch : PBCodable <CKCodeOperationMessageMutation, DRSDecisionServerBatchRequest, NSCopying> {
    DRSProtoClientDeviceMetadata * _clientMetadata;
    NSMutableArray * _dataGatheringRequests;
}

@property (nonatomic, retain) DRSProtoClientDeviceMetadata *clientMetadata;
@property (nonatomic, retain) NSMutableArray *dataGatheringRequests;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *requests;
@property (readonly) Class superclass;

+ (Class)dataGatheringRequestsType;

- (void).cxx_destruct;
- (void)addDataGatheringRequests:(id)arg1;
- (void)clearDataGatheringRequests;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataGatheringRequests;
- (id)dataGatheringRequestsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataGatheringRequestsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requests;
- (void)setClientMetadata:(id)arg1;
- (void)setDataGatheringRequests:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)writeTo:(id)arg1;

@end
