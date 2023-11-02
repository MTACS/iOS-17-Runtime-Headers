
@interface AWDWiFiQualityScore : PBCodable <NSCopying> {
    unsigned int  _channelQuality;
    struct { 
        unsigned int channelQuality : 1; 
        unsigned int rxLatency : 1; 
        unsigned int rxLoss : 1; 
        unsigned int txLatency : 1; 
        unsigned int txLoss : 1; 
    }  _has;
    unsigned int  _rxLatency;
    unsigned int  _rxLoss;
    unsigned int  _txLatency;
    unsigned int  _txLoss;
}

@property (nonatomic) unsigned int channelQuality;
@property (nonatomic) bool hasChannelQuality;
@property (nonatomic) bool hasRxLatency;
@property (nonatomic) bool hasRxLoss;
@property (nonatomic) bool hasTxLatency;
@property (nonatomic) bool hasTxLoss;
@property (nonatomic) unsigned int rxLatency;
@property (nonatomic) unsigned int rxLoss;
@property (nonatomic) unsigned int txLatency;
@property (nonatomic) unsigned int txLoss;

- (unsigned int)channelQuality;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChannelQuality;
- (bool)hasRxLatency;
- (bool)hasRxLoss;
- (bool)hasTxLatency;
- (bool)hasTxLoss;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)rxLatency;
- (unsigned int)rxLoss;
- (void)setChannelQuality:(unsigned int)arg1;
- (void)setHasChannelQuality:(bool)arg1;
- (void)setHasRxLatency:(bool)arg1;
- (void)setHasRxLoss:(bool)arg1;
- (void)setHasTxLatency:(bool)arg1;
- (void)setHasTxLoss:(bool)arg1;
- (void)setRxLatency:(unsigned int)arg1;
- (void)setRxLoss:(unsigned int)arg1;
- (void)setTxLatency:(unsigned int)arg1;
- (void)setTxLoss:(unsigned int)arg1;
- (unsigned int)txLatency;
- (unsigned int)txLoss;
- (void)writeTo:(id)arg1;

@end
