
@interface NPKProtoAvailableHomeKeyPassesResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSMutableArray * _passesDatas;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, retain) NSMutableArray *passesDatas;

+ (Class)passesDataType;

- (void).cxx_destruct;
- (void)addPassesData:(id)arg1;
- (void)clearPassesDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passesDataAtIndex:(unsigned long long)arg1;
- (id)passesDatas;
- (unsigned long long)passesDatasCount;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setPassesDatas:(id)arg1;
- (void)writeTo:(id)arg1;

@end
