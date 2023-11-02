
@interface IDSQRProtoStatsRequest : PBRequest <NSCopying> {
    unsigned int  _clientLatencyMs;
    unsigned int  _clientTimestampNtp;
    struct { 
        unsigned int clientLatencyMs : 1; 
        unsigned int receivedPackets : 1; 
        unsigned int sentPackets : 1; 
    }  _has;
    unsigned int  _receivedPackets;
    unsigned int  _sentPackets;
}

@property (nonatomic) unsigned int clientLatencyMs;
@property (nonatomic) unsigned int clientTimestampNtp;
@property (nonatomic) bool hasClientLatencyMs;
@property (nonatomic) bool hasReceivedPackets;
@property (nonatomic) bool hasSentPackets;
@property (nonatomic) unsigned int receivedPackets;
@property (nonatomic) unsigned int sentPackets;

- (unsigned int)clientLatencyMs;
- (unsigned int)clientTimestampNtp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientLatencyMs;
- (bool)hasReceivedPackets;
- (bool)hasSentPackets;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)receivedPackets;
- (unsigned int)sentPackets;
- (void)setClientLatencyMs:(unsigned int)arg1;
- (void)setClientTimestampNtp:(unsigned int)arg1;
- (void)setHasClientLatencyMs:(bool)arg1;
- (void)setHasReceivedPackets:(bool)arg1;
- (void)setHasSentPackets:(bool)arg1;
- (void)setReceivedPackets:(unsigned int)arg1;
- (void)setSentPackets:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
