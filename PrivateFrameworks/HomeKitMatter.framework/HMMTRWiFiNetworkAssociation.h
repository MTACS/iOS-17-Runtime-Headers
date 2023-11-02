
@interface HMMTRWiFiNetworkAssociation : NSObject {
    NSData * _credentials;
    NSData * _ssid;
}

@property (nonatomic, readonly) NSData *credentials;
@property (nonatomic, readonly) NSData *ssid;

- (void).cxx_destruct;
- (id)credentials;
- (id)initWithSSID:(id)arg1 credentials:(id)arg2;
- (id)ssid;

@end
