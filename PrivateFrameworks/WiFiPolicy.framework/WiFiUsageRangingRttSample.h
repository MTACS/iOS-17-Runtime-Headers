
@interface WiFiUsageRangingRttSample : NSObject {
    unsigned long long  _channel;
    unsigned long long  _flags;
    unsigned long long  _peerBitErrorRate;
    unsigned long long  _peerCoreId;
    unsigned long long  _peerPhyError;
    unsigned long long  _peerSnr;
    long long  _rssi;
    long long  _rtt;
    unsigned long long  _selfBitErrorRate;
    unsigned long long  _selfCoreId;
    unsigned long long  _selfPhyError;
    unsigned long long  _selfSnr;
}

@property (nonatomic) unsigned long long channel;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long peerBitErrorRate;
@property (nonatomic) unsigned long long peerCoreId;
@property (nonatomic) unsigned long long peerPhyError;
@property (nonatomic) unsigned long long peerSnr;
@property (nonatomic) long long rssi;
@property (nonatomic) long long rtt;
@property (nonatomic) unsigned long long selfBitErrorRate;
@property (nonatomic) unsigned long long selfCoreId;
@property (nonatomic) unsigned long long selfPhyError;
@property (nonatomic) unsigned long long selfSnr;

- (unsigned long long)channel;
- (unsigned long long)flags;
- (unsigned long long)peerBitErrorRate;
- (unsigned long long)peerCoreId;
- (unsigned long long)peerPhyError;
- (unsigned long long)peerSnr;
- (long long)rssi;
- (long long)rtt;
- (unsigned long long)selfBitErrorRate;
- (unsigned long long)selfCoreId;
- (unsigned long long)selfPhyError;
- (unsigned long long)selfSnr;
- (void)setChannel:(unsigned long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setPeerBitErrorRate:(unsigned long long)arg1;
- (void)setPeerCoreId:(unsigned long long)arg1;
- (void)setPeerPhyError:(unsigned long long)arg1;
- (void)setPeerSnr:(unsigned long long)arg1;
- (void)setRssi:(long long)arg1;
- (void)setRtt:(long long)arg1;
- (void)setSelfBitErrorRate:(unsigned long long)arg1;
- (void)setSelfCoreId:(unsigned long long)arg1;
- (void)setSelfPhyError:(unsigned long long)arg1;
- (void)setSelfSnr:(unsigned long long)arg1;

@end
