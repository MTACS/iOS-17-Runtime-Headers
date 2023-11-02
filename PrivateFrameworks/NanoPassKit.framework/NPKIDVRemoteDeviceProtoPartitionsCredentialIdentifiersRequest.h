
@interface NPKIDVRemoteDeviceProtoPartitionsCredentialIdentifiersRequest : PBRequest <NSCopying> {
    NSMutableArray * _partitionsIdentifiers;
}

@property (nonatomic, retain) NSMutableArray *partitionsIdentifiers;

+ (Class)partitionsIdentifiersType;

- (void).cxx_destruct;
- (void)addPartitionsIdentifiers:(id)arg1;
- (void)clearPartitionsIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)partitionsIdentifiers;
- (id)partitionsIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)partitionsIdentifiersCount;
- (bool)readFrom:(id)arg1;
- (void)setPartitionsIdentifiers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
