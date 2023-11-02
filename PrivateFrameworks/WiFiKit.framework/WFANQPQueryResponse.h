
@interface WFANQPQueryResponse : NSObject {
    NSString * _bssid;
    NSArray * _cellNetworkInfo;
    long long  _channel;
    NSArray * _domains;
    NSString * _operatorName;
    NSArray * _roamingConsortium;
    CWFScanResult * _scanResult;
    NSString * _ssid;
}

@property (nonatomic, copy) NSString *bssid;
@property (nonatomic, copy) NSArray *cellNetworkInfo;
@property long long channel;
@property (nonatomic, retain) NSArray *domains;
@property (nonatomic, copy) NSString *operatorName;
@property (nonatomic, retain) NSArray *roamingConsortium;
@property (nonatomic, copy) CWFScanResult *scanResult;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (id)bssid;
- (id)cellNetworkInfo;
- (long long)channel;
- (id)description;
- (id)domains;
- (unsigned long long)hash;
- (id)initWithScanResult:(id)arg1 ANQPResponse:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToWFANQPResponse:(id)arg1;
- (id)operatorName;
- (id)roamingConsortium;
- (id)scanResult;
- (void)setBssid:(id)arg1;
- (void)setCellNetworkInfo:(id)arg1;
- (void)setChannel:(long long)arg1;
- (void)setDomains:(id)arg1;
- (void)setOperatorName:(id)arg1;
- (void)setRoamingConsortium:(id)arg1;
- (void)setScanResult:(id)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;

@end
