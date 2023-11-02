
@interface NPKIDVRemoteDeviceProtoHeartbeatRequest : PBRequest <NSCopying> {
    NSMutableArray * _inProgressResponseIdentifiers;
}

@property (nonatomic, retain) NSMutableArray *inProgressResponseIdentifiers;

+ (Class)inProgressResponseIdentifiersType;

- (void).cxx_destruct;
- (void)addInProgressResponseIdentifiers:(id)arg1;
- (void)clearInProgressResponseIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)inProgressResponseIdentifiers;
- (id)inProgressResponseIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)inProgressResponseIdentifiersCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInProgressResponseIdentifiers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
