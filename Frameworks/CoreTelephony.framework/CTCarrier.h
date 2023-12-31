
@interface CTCarrier : NSObject {
    bool  _allowsVOIP;
    NSString * _carrierName;
    NSString * _isoCountryCode;
    NSString * _mobileCountryCode;
    NSString * _mobileNetworkCode;
}

@property (nonatomic) bool allowsVOIP;
@property (nonatomic, retain) NSString *carrierName;
@property (nonatomic, retain) NSString *isoCountryCode;
@property (nonatomic, retain) NSString *mobileCountryCode;
@property (nonatomic, retain) NSString *mobileNetworkCode;

- (void).cxx_destruct;
- (bool)allowsVOIP;
- (id)carrierName;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)isoCountryCode;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (void)setAllowsVOIP:(bool)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setMobileCountryCode:(id)arg1;
- (void)setMobileNetworkCode:(id)arg1;

@end
