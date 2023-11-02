
@interface WiFiAnalyticsAWDWiFiNWActivityRuUsage : PBCodable <NSCopying> {
    NSMutableArray * _rxs;
    NSMutableArray * _txs;
}

@property (nonatomic, retain) NSMutableArray *rxs;
@property (nonatomic, retain) NSMutableArray *txs;

+ (Class)rxType;
+ (Class)txType;

- (void).cxx_destruct;
- (void)addRx:(id)arg1;
- (void)addTx:(id)arg1;
- (void)clearRxs;
- (void)clearTxs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rxAtIndex:(unsigned long long)arg1;
- (id)rxs;
- (unsigned long long)rxsCount;
- (void)setRxs:(id)arg1;
- (void)setTxs:(id)arg1;
- (id)txAtIndex:(unsigned long long)arg1;
- (id)txs;
- (unsigned long long)txsCount;
- (void)writeTo:(id)arg1;

@end
