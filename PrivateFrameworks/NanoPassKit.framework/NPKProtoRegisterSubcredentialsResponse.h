
@interface NPKProtoRegisterSubcredentialsResponse : PBCodable <NSCopying> {
    NSMutableArray * _errorsDatas;
    NSMutableArray * _passesDatas;
}

@property (nonatomic, retain) NSMutableArray *errorsDatas;
@property (nonatomic, retain) NSMutableArray *passesDatas;

+ (Class)errorsDataType;
+ (Class)passesDataType;

- (void).cxx_destruct;
- (void)addErrorsData:(id)arg1;
- (void)addPassesData:(id)arg1;
- (void)clearErrorsDatas;
- (void)clearPassesDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorsDataAtIndex:(unsigned long long)arg1;
- (id)errorsDatas;
- (unsigned long long)errorsDatasCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passesDataAtIndex:(unsigned long long)arg1;
- (id)passesDatas;
- (unsigned long long)passesDatasCount;
- (bool)readFrom:(id)arg1;
- (void)setErrorsDatas:(id)arg1;
- (void)setPassesDatas:(id)arg1;
- (void)writeTo:(id)arg1;

@end
