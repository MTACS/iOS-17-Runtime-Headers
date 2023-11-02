
@interface DRSProtoDiagnosticUploadRequestBatch : PBCodable <CKCodeOperationMessageMutation, DRSDecisionServerBatchRequest, NSCopying> {
    DRSProtoClientDeviceMetadata * _clientMetadata;
    NSMutableArray * _uploadRequests;
}

@property (nonatomic, retain) DRSProtoClientDeviceMetadata *clientMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *requests;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *uploadRequests;

+ (Class)uploadRequestsType;

- (void).cxx_destruct;
- (void)addUploadRequests:(id)arg1;
- (void)clearUploadRequests;
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
- (id)requests;
- (void)setClientMetadata:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setUploadRequests:(id)arg1;
- (id)uploadRequests;
- (id)uploadRequestsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uploadRequestsCount;
- (void)writeTo:(id)arg1;

@end
