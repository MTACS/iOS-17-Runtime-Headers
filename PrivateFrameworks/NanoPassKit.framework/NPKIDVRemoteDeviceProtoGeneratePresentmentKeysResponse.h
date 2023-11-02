
@interface NPKIDVRemoteDeviceProtoGeneratePresentmentKeysResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSMutableArray * _presentmentKeysDatas;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, retain) NSMutableArray *presentmentKeysDatas;

+ (Class)presentmentKeysDataType;

- (void).cxx_destruct;
- (void)addPresentmentKeysData:(id)arg1;
- (void)clearPresentmentKeysDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)presentmentKeysDataAtIndex:(unsigned long long)arg1;
- (id)presentmentKeysDatas;
- (unsigned long long)presentmentKeysDatasCount;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setPresentmentKeysDatas:(id)arg1;
- (void)writeTo:(id)arg1;

@end
