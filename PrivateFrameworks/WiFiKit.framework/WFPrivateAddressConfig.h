
@interface WFPrivateAddressConfig : NSObject <NSCopying> {
    bool  _carrierBundleBased;
    unsigned long long  _disabledReason;
    NSString * _ssid;
}

@property (getter=isCarrierBundleBased, nonatomic) bool carrierBundleBased;
@property (nonatomic) unsigned long long disabledReason;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)disabledReason;
- (unsigned long long)hash;
- (id)initWithPrivateAddressConfigDictionary:(id)arg1 ssid:(id)arg2;
- (bool)isCarrierBundleBased;
- (bool)isEqual:(id)arg1;
- (void)setCarrierBundleBased:(bool)arg1;
- (void)setDisabledReason:(unsigned long long)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;

@end
