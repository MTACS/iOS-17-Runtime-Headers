
@interface SNWiFiRecord : NSObject {
    long long  _cca;
    NSString * _channelInfo;
    bool  _isCaptive;
    NSString * _phyMode;
    long long  _rssi;
    long long  _snr;
    NSDate * _timestamp;
}

@property (nonatomic) long long cca;
@property (nonatomic, copy) NSString *channelInfo;
@property (nonatomic) bool isCaptive;
@property (nonatomic, copy) NSString *phyMode;
@property (nonatomic) long long rssi;
@property (nonatomic) long long snr;
@property (nonatomic, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (long long)cca;
- (id)channelInfo;
- (bool)isCaptive;
- (id)phyMode;
- (long long)rssi;
- (void)setCca:(long long)arg1;
- (void)setChannelInfo:(id)arg1;
- (void)setIsCaptive:(bool)arg1;
- (void)setPhyMode:(id)arg1;
- (void)setRssi:(long long)arg1;
- (void)setSnr:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (long long)snr;
- (id)timestamp;

@end
