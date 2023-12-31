
@interface SiriCoreNetworkQualityReport : NSObject {
    long long  _cellularHistorical;
    long long  _cellularInstant;
    long long  _wifiHistorical;
    long long  _wifiInstant;
}

@property (nonatomic) long long cellularHistorical;
@property (nonatomic) long long cellularInstant;
@property (nonatomic) long long wifiHistorical;
@property (nonatomic) long long wifiInstant;

- (long long)cellularHistorical;
- (long long)cellularInstant;
- (void)setCellularHistorical:(long long)arg1;
- (void)setCellularInstant:(long long)arg1;
- (void)setWifiHistorical:(long long)arg1;
- (void)setWifiInstant:(long long)arg1;
- (long long)wifiHistorical;
- (long long)wifiInstant;

@end
