
@interface CRKClassSessionBeacon : NSObject <WPAdvertisingDelegate> {
    DMFControlSessionIdentifier * _advertisedIdentifier;
    WPAdvertising * _advertiser;
    bool  _advertising;
    NSDictionary * _beaconAdvertisement;
    unsigned short  _flags;
}

@property (nonatomic, copy) DMFControlSessionIdentifier *advertisedIdentifier;
@property (nonatomic, readonly) WPAdvertising *advertiser;
@property (getter=isAdvertising, nonatomic) bool advertising;
@property (nonatomic, copy) NSDictionary *beaconAdvertisement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short flags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)advertisedIdentifier;
- (id)advertiser;
- (void)advertiserDidRegisterService;
- (void)advertiserDidUpdateState:(id)arg1;
- (void)advertiserFailedToRegisterService;
- (void)advertiserPendingServiceOfType:(id)arg1;
- (id)beaconAdvertisement;
- (unsigned short)flags;
- (id)init;
- (bool)isAdvertising;
- (void)setAdvertisedIdentifier:(id)arg1;
- (void)setAdvertising:(bool)arg1;
- (void)setBeaconAdvertisement:(id)arg1;
- (void)setFlags:(unsigned short)arg1;
- (void)startAdvertisingClassSessionWithIdentifier:(id)arg1;
- (void)startAdvertisingWithUUID:(id)arg1 IPAddress:(unsigned int)arg2;
- (void)stopAdvertising;

@end
