
@interface WiFiUsageAccessPointProfileInfo : NSObject {
    NSString * _apProfileID;
    NSString * _apProfileVersion;
    NSDictionary * _apProfileWPSInfo;
    NSString * _apProfile_shortID;
    NSData * _beacon;
    NSString * _bssid;
    NSString * _ssid;
}

@property (nonatomic, retain) NSString *apProfileID;
@property (nonatomic, retain) NSString *apProfileVersion;
@property (nonatomic, retain) NSDictionary *apProfileWPSInfo;
@property (nonatomic, retain) NSString *apProfile_shortID;
@property (nonatomic, retain) NSData *beacon;
@property (nonatomic, retain) NSString *bssid;
@property (nonatomic, retain) NSString *ssid;

- (void).cxx_destruct;
- (id)apProfileID;
- (id)apProfileVersion;
- (id)apProfileWPSInfo;
- (id)apProfile_shortID;
- (id)beacon;
- (id)bssid;
- (void)setApProfileID:(id)arg1;
- (void)setApProfileVersion:(id)arg1;
- (void)setApProfileWPSInfo:(id)arg1;
- (void)setApProfile_shortID:(id)arg1;
- (void)setBeacon:(id)arg1;
- (void)setBssid:(id)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;

@end
