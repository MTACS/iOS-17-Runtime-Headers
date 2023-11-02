
@interface ACHCodableEarnedInstanceArray : PBCodable <NSCopying> {
    NSMutableArray * _earnedInstances;
}

@property (nonatomic, retain) NSMutableArray *earnedInstances;

+ (Class)earnedInstancesType;

- (void).cxx_destruct;
- (void)addEarnedInstances:(id)arg1;
- (void)clearEarnedInstances;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)earnedInstances;
- (id)earnedInstancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)earnedInstancesCount;
- (unsigned long long)hash;
- (id)initWithCodableEarnedInstances:(id)arg1;
- (id)initWithSerializedData:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEarnedInstances:(id)arg1;
- (void)writeTo:(id)arg1;

@end
