
@interface CKCDPCodeServiceRequestOperationGroup : PBCodable <NSCopying> {
    struct { 
        unsigned int operationGroupQuantity : 1; 
    }  _has;
    NSString * _operationGroupId;
    NSString * _operationGroupName;
    long long  _operationGroupQuantity;
    NSString * _operationId;
}

@property (nonatomic, readonly) bool hasOperationGroupId;
@property (nonatomic, readonly) bool hasOperationGroupName;
@property (nonatomic) bool hasOperationGroupQuantity;
@property (nonatomic, readonly) bool hasOperationId;
@property (nonatomic, retain) NSString *operationGroupId;
@property (nonatomic, retain) NSString *operationGroupName;
@property (nonatomic) long long operationGroupQuantity;
@property (nonatomic, retain) NSString *operationId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOperationGroupId;
- (bool)hasOperationGroupName;
- (bool)hasOperationGroupQuantity;
- (bool)hasOperationId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)operationGroupId;
- (id)operationGroupName;
- (long long)operationGroupQuantity;
- (id)operationId;
- (bool)readFrom:(id)arg1;
- (void)setHasOperationGroupQuantity:(bool)arg1;
- (void)setOperationGroupId:(id)arg1;
- (void)setOperationGroupName:(id)arg1;
- (void)setOperationGroupQuantity:(long long)arg1;
- (void)setOperationId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
