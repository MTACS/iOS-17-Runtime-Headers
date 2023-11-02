
@interface IDSQRProtoStatsResponse : PBCodable <NSCopying> {
    unsigned int  _clientTimestampNtp;
    struct { 
        unsigned int serverTimestampMs : 1; 
        unsigned int receivedPackets : 1; 
        unsigned int sentPackets : 1; 
        unsigned int uplinkBandwidth : 1; 
    }  _has;
    unsigned int  _receivedPackets;
    unsigned int  _sentPackets;
    unsigned long long  _serverTimestampMs;
    unsigned int  _uplinkBandwidth;
}

@property (nonatomic) unsigned int clientTimestampNtp;
@property (nonatomic) bool hasReceivedPackets;
@property (nonatomic) bool hasSentPackets;
@property (nonatomic) bool hasServerTimestampMs;
@property (nonatomic) bool hasUplinkBandwidth;
@property (nonatomic) unsigned int receivedPackets;
@property (nonatomic) unsigned int sentPackets;
@property (nonatomic) unsigned long long serverTimestampMs;
@property (nonatomic) unsigned int uplinkBandwidth;

- (unsigned int)clientTimestampNtp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReceivedPackets;
- (bool)hasSentPackets;
- (bool)hasServerTimestampMs;
- (bool)hasUplinkBandwidth;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)receivedPackets;
- (unsigned int)sentPackets;
- (unsigned long long)serverTimestampMs;
- (void)setClientTimestampNtp:(unsigned int)arg1;
- (void)setHasReceivedPackets:(bool)arg1;
- (void)setHasSentPackets:(bool)arg1;
- (void)setHasServerTimestampMs:(bool)arg1;
- (void)setHasUplinkBandwidth:(bool)arg1;
- (void)setReceivedPackets:(unsigned int)arg1;
- (void)setSentPackets:(unsigned int)arg1;
- (void)setServerTimestampMs:(unsigned long long)arg1;
- (void)setUplinkBandwidth:(unsigned int)arg1;
- (unsigned int)uplinkBandwidth;
- (void)writeTo:(id)arg1;

@end
