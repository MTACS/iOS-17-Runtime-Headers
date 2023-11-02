
@interface C2MPCloudKitOperationInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int operationGroupIndex : 1; 
        unsigned int operationTriggered : 1; 
    }  _has;
    unsigned int  _operationGroupIndex;
    NSString * _operationId;
    bool  _operationTriggered;
    NSString * _operationType;
}

@property (nonatomic) bool hasOperationGroupIndex;
@property (nonatomic, readonly) bool hasOperationId;
@property (nonatomic) bool hasOperationTriggered;
@property (nonatomic, readonly) bool hasOperationType;
@property (nonatomic) unsigned int operationGroupIndex;
@property (nonatomic, retain) NSString *operationId;
@property (nonatomic) bool operationTriggered;
@property (nonatomic, retain) NSString *operationType;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOperationGroupIndex;
- (bool)hasOperationId;
- (bool)hasOperationTriggered;
- (bool)hasOperationType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)operationGroupIndex;
- (id)operationId;
- (bool)operationTriggered;
- (id)operationType;
- (bool)readFrom:(id)arg1;
- (void)setHasOperationGroupIndex:(bool)arg1;
- (void)setHasOperationTriggered:(bool)arg1;
- (void)setOperationGroupIndex:(unsigned int)arg1;
- (void)setOperationId:(id)arg1;
- (void)setOperationTriggered:(bool)arg1;
- (void)setOperationType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
