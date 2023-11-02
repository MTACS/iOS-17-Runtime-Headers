
@interface C2MPCloudKitOperationGroupInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int operationGroupTriggered : 1; 
    }  _has;
    NSString * _operationGroupId;
    NSString * _operationGroupName;
    bool  _operationGroupTriggered;
}

@property (nonatomic, readonly) bool hasOperationGroupId;
@property (nonatomic, readonly) bool hasOperationGroupName;
@property (nonatomic) bool hasOperationGroupTriggered;
@property (nonatomic, retain) NSString *operationGroupId;
@property (nonatomic, retain) NSString *operationGroupName;
@property (nonatomic) bool operationGroupTriggered;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOperationGroupId;
- (bool)hasOperationGroupName;
- (bool)hasOperationGroupTriggered;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)operationGroupId;
- (id)operationGroupName;
- (bool)operationGroupTriggered;
- (bool)readFrom:(id)arg1;
- (void)setHasOperationGroupTriggered:(bool)arg1;
- (void)setOperationGroupId:(id)arg1;
- (void)setOperationGroupName:(id)arg1;
- (void)setOperationGroupTriggered:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
