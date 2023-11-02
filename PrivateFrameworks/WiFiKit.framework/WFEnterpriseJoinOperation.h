
@interface WFEnterpriseJoinOperation : WFOperation {
    CWFAssocParameters * _associationParameters;
    struct __WiFiDeviceClient { } * _device;
    CWFInterface * _interface;
    struct __WiFiManagerClient { } * _manager;
    NSString * _name;
    WFNetworkScanRecord * _network;
    WFNetworkProfile * _profile;
}

@property (nonatomic, retain) CWFAssocParameters *associationParameters;
@property (nonatomic) struct __WiFiDeviceClient { }*device;
@property (nonatomic, retain) CWFInterface *interface;
@property (nonatomic) struct __WiFiManagerClient { }*manager;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, retain) WFNetworkProfile *profile;

- (void).cxx_destruct;
- (void)_handleEnterpriseJoinResult:(long long)arg1 userInfo:(id)arg2 network:(struct __WiFiNetwork { }*)arg3;
- (void)_joinComplete:(int)arg1 userInfo:(struct __CFDictionary { }*)arg2 network:(struct __WiFiNetwork { }*)arg3;
- (void)_joinWithCoreWiFi;
- (void)_joinWithMobileWiFi;
- (id)associationParameters;
- (void)dealloc;
- (struct __WiFiDeviceClient { }*)device;
- (id)initWithAssocParameters:(id)arg1 interface:(id)arg2;
- (id)initWithNetwork:(id)arg1 profile:(id)arg2;
- (id)interface;
- (void)joinNetworkRef:(struct __WiFiNetwork { }*)arg1;
- (struct __WiFiManagerClient { }*)manager;
- (id)name;
- (id)network;
- (id)profile;
- (void)setAssociationParameters:(id)arg1;
- (void)setDevice:(struct __WiFiDeviceClient { }*)arg1;
- (void)setInterface:(id)arg1;
- (void)setManager:(struct __WiFiManagerClient { }*)arg1;
- (void)setName:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)start;

@end
