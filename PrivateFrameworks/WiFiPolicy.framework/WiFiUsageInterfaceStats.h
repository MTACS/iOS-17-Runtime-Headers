
@interface WiFiUsageInterfaceStats : NSObject <NSCopying> {
    unsigned long long  _rxBytes;
    unsigned long long  _rxL3Packets;
    NSDate * _timestamp;
    unsigned long long  _txBytes;
    unsigned long long  _txL3Packets;
}

@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long rxL3Packets;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) unsigned long long txL3Packets;

+ (id)statsForInterfaceName:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)rxBytes;
- (unsigned long long)rxL3Packets;
- (void)setRxBytes:(unsigned long long)arg1;
- (void)setRxL3Packets:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTxBytes:(unsigned long long)arg1;
- (void)setTxL3Packets:(unsigned long long)arg1;
- (id)timestamp;
- (unsigned long long)txBytes;
- (unsigned long long)txL3Packets;

@end
