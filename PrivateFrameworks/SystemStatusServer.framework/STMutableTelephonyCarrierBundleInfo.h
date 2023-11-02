
@interface STMutableTelephonyCarrierBundleInfo : STTelephonyCarrierBundleInfo

@property (nonatomic) bool LTEConnectionShows4G;
@property (nonatomic, copy) NSString *carrierName;
@property (nonatomic, copy) NSString *customerServicePhoneNumber;
@property (nonatomic, copy) NSArray *disabledApplicationIDs;
@property (nonatomic, copy) NSString *homeCountryCode;
@property (getter=isReinitiatingActivationDisabled, nonatomic) bool reinitiatingActivationDisabled;
@property (nonatomic) bool suppressSOSOnlyWithLimitedService;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setCustomerServicePhoneNumber:(id)arg1;
- (void)setDisabledApplicationIDs:(id)arg1;
- (void)setHomeCountryCode:(id)arg1;
- (void)setLTEConnectionShows4G:(bool)arg1;
- (void)setReinitiatingActivationDisabled:(bool)arg1;
- (void)setSuppressSOSOnlyWithLimitedService:(bool)arg1;

@end
