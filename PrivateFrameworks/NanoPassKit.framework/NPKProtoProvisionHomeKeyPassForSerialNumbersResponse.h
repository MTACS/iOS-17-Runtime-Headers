
@interface NPKProtoProvisionHomeKeyPassForSerialNumbersResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSMutableArray * _provisionedPassesDatas;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, retain) NSMutableArray *provisionedPassesDatas;

+ (Class)provisionedPassesDataType;

- (void).cxx_destruct;
- (void)addProvisionedPassesData:(id)arg1;
- (void)clearProvisionedPassesDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)provisionedPassesDataAtIndex:(unsigned long long)arg1;
- (id)provisionedPassesDatas;
- (unsigned long long)provisionedPassesDatasCount;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setProvisionedPassesDatas:(id)arg1;
- (void)writeTo:(id)arg1;

@end
