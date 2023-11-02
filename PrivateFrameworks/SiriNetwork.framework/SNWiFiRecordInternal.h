
@interface SNWiFiRecordInternal : NSObject {
    void cca;
    void channelInfo;
    void isCaptive;
    void phyMode;
    void rssi;
    void snr;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timestamp;
}

@property (nonatomic, readonly) long long cca;
@property (nonatomic, readonly) NSString *channelInfo;
@property (nonatomic, readonly) bool isCaptive;
@property (nonatomic, readonly) NSString *phyMode;
@property (nonatomic, readonly) long long rssi;
@property (nonatomic, readonly) long long snr;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (long long)cca;
- (id)channelInfo;
- (id)init;
- (id)initWithRssi:(long long)arg1 snr:(long long)arg2 cca:(long long)arg3 channelInfo:(id)arg4 phyMode:(id)arg5 isCaptive:(bool)arg6 timestamp:(id)arg7;
- (bool)isCaptive;
- (id)phyMode;
- (long long)rssi;
- (long long)snr;
- (id)timestamp;

@end
