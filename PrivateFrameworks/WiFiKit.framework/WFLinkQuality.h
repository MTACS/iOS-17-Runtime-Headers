
@interface WFLinkQuality : NSObject <NSCopying> {
    long long  _rssi;
    float  _scaledRssi;
    NSString * _ssid;
}

@property (nonatomic) long long rssi;
@property (nonatomic) float scaledRssi;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithSSID:(id)arg1 rssi:(long long)arg2 scaledRSSI:(float)arg3;
- (bool)isEqual:(id)arg1;
- (long long)rssi;
- (float)scaledRssi;
- (void)setRssi:(long long)arg1;
- (void)setScaledRssi:(float)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;

@end
