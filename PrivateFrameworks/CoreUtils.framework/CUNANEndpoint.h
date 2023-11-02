
@interface CUNANEndpoint : NSObject {
    NSData * _customData;
    WiFiAwareDiscoveryResult * _discoveryResult;
    NSString * _identifier;
    unsigned char  _instanceID;
    WiFiMACAddress * _macAddress;
    NSString * _name;
    int  _port;
    int  _rssi;
    NSString * _serviceType;
    NSDictionary * _textInfo;
}

@property (nonatomic, copy) NSData *customData;
@property (nonatomic, retain) WiFiAwareDiscoveryResult *discoveryResult;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned char instanceID;
@property (nonatomic, retain) WiFiMACAddress *macAddress;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int port;
@property (nonatomic) int rssi;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, readonly, copy) NSDictionary *textInfo;

- (void).cxx_destruct;
- (id)customData;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)discoveryResult;
- (id)identifier;
- (id)initWithEndpointID:(const char *)arg1 error:(id*)arg2;
- (unsigned char)instanceID;
- (id)macAddress;
- (id)name;
- (int)port;
- (int)rssi;
- (id)serviceType;
- (void)setCustomData:(id)arg1;
- (void)setDiscoveryResult:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInstanceID:(unsigned char)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setRssi:(int)arg1;
- (void)setServiceType:(id)arg1;
- (id)textInfo;
- (unsigned int)updateWithDiscoveryResult:(id)arg1;

@end
