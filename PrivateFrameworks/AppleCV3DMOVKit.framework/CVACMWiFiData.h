
@interface CVACMWiFiData : NSObject <NSSecureCoding> {
    NSString * _BSSID;
    int  _RSSI;
    int  _channel;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *BSSID;
@property (nonatomic) int RSSI;
@property (nonatomic) int channel;
@property (nonatomic) double timestamp;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)BSSID;
- (int)RSSI;
- (int)channel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBSSID:(id)arg1;
- (void)setChannel:(int)arg1;
- (void)setRSSI:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
