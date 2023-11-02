
@interface _MRTransactionPacketsProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _packets;
}

@property (nonatomic, retain) NSMutableArray *packets;

+ (Class)packetsType;

- (void).cxx_destruct;
- (void)addPackets:(id)arg1;
- (void)clearPackets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)packets;
- (id)packetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)packetsCount;
- (bool)readFrom:(id)arg1;
- (void)setPackets:(id)arg1;
- (void)writeTo:(id)arg1;

@end
