
@protocol _CPTCPInfo <NSObject>

@required

- (unsigned int)avgRTT;
- (unsigned long long)cellRXPackets;
- (unsigned long long)cellTXPackets;
- (unsigned int)connectAttempts;
- (unsigned int)connectSuccesses;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (unsigned int)minRTT;
- (unsigned long long)rxBytes;
- (unsigned long long)rxDuplicateBytes;
- (unsigned long long)rxOutOfOrderBytes;
- (unsigned long long)rxPackets;
- (void)setAvgRTT:(unsigned int)arg1;
- (void)setCellRXPackets:(unsigned long long)arg1;
- (void)setCellTXPackets:(unsigned long long)arg1;
- (void)setConnectAttempts:(unsigned int)arg1;
- (void)setConnectSuccesses:(unsigned int)arg1;
- (void)setMinRTT:(unsigned int)arg1;
- (void)setRxBytes:(unsigned long long)arg1;
- (void)setRxDuplicateBytes:(unsigned long long)arg1;
- (void)setRxOutOfOrderBytes:(unsigned long long)arg1;
- (void)setRxPackets:(unsigned long long)arg1;
- (void)setStatsType:(NSString *)arg1;
- (void)setTxBytes:(unsigned long long)arg1;
- (void)setTxPackets:(unsigned long long)arg1;
- (void)setTxRetransmitBytes:(unsigned long long)arg1;
- (void)setTxRetransmitPackets:(unsigned long long)arg1;
- (void)setVarRTT:(unsigned int)arg1;
- (void)setWifiRXPackets:(unsigned long long)arg1;
- (void)setWifiTXPackets:(unsigned long long)arg1;
- (void)setWiredRXPackets:(unsigned long long)arg1;
- (void)setWiredTXPackets:(unsigned long long)arg1;
- (NSString *)statsType;
- (unsigned long long)txBytes;
- (unsigned long long)txPackets;
- (unsigned long long)txRetransmitBytes;
- (unsigned long long)txRetransmitPackets;
- (unsigned int)varRTT;
- (unsigned long long)wifiRXPackets;
- (unsigned long long)wifiTXPackets;
- (unsigned long long)wiredRXPackets;
- (unsigned long long)wiredTXPackets;

@end
