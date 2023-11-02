
@interface PBBProtoTinkerWirelessCredentials : PBCodable <NSCopying> {
    NSMutableArray * _serializedNetworkRecords;
}

@property (nonatomic, retain) NSMutableArray *serializedNetworkRecords;

+ (Class)serializedNetworkRecordType;

- (void).cxx_destruct;
- (void)addSerializedNetworkRecord:(id)arg1;
- (void)clearSerializedNetworkRecords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serializedNetworkRecordAtIndex:(unsigned long long)arg1;
- (id)serializedNetworkRecords;
- (unsigned long long)serializedNetworkRecordsCount;
- (void)setSerializedNetworkRecords:(id)arg1;
- (void)writeTo:(id)arg1;

@end
