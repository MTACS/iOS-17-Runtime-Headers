
@interface MSPCollectionItemReplicaStorage : PBCodable <NSCopying> {
    NSString * _clientIdentifier;
    NSMutableArray * _records;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, readonly) bool hasClientIdentifier;
@property (nonatomic, retain) NSMutableArray *records;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)recordsType;

- (void).cxx_destruct;
- (void)addRecords:(id)arg1;
- (void)clearRecords;
- (id)clientIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)records;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)setClientIdentifier:(id)arg1;
- (void)setRecords:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
