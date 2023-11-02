
@interface PFLFetchModelResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    CKCodeRecordTransport * _modelAsset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasModelAsset;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKCodeRecordTransport *modelAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)extractRecordTransports;
- (bool)hasModelAsset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelAsset;
- (bool)readFrom:(id)arg1;
- (void)setModelAsset:(id)arg1;
- (void)substituteRecordTransports:(id)arg1;
- (void)writeTo:(id)arg1;

@end
