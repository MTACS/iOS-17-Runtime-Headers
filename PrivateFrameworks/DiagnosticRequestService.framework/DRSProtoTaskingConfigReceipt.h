
@interface DRSProtoTaskingConfigReceipt : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    NSString * _receiptResult;
    DRSProtoTaskingConfigMetadata * _taskingConfigMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasReceiptResult;
@property (nonatomic, readonly) bool hasTaskingConfigMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *receiptResult;
@property (readonly) Class superclass;
@property (nonatomic, retain) DRSProtoTaskingConfigMetadata *taskingConfigMetadata;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReceiptResult;
- (bool)hasTaskingConfigMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)receiptResult;
- (void)setReceiptResult:(id)arg1;
- (void)setTaskingConfigMetadata:(id)arg1;
- (id)taskingConfigMetadata;
- (void)writeTo:(id)arg1;

@end
