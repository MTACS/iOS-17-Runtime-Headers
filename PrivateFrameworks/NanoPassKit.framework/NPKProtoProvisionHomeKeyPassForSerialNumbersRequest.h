
@interface NPKProtoProvisionHomeKeyPassForSerialNumbersRequest : PBRequest <NSCopying> {
    NSMutableArray * _serialNumbers;
}

@property (nonatomic, retain) NSMutableArray *serialNumbers;

+ (Class)serialNumbersType;

- (void).cxx_destruct;
- (void)addSerialNumbers:(id)arg1;
- (void)clearSerialNumbers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serialNumbers;
- (id)serialNumbersAtIndex:(unsigned long long)arg1;
- (unsigned long long)serialNumbersCount;
- (void)setSerialNumbers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
