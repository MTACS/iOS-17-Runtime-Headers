
@interface STTelephonyCarrierBundleInfo : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    bool  _LTEConnectionShows4G;
    NSString * _carrierName;
    NSString * _customerServicePhoneNumber;
    NSArray * _disabledApplicationIDs;
    NSString * _homeCountryCode;
    bool  _reinitiatingActivationDisabled;
    bool  _suppressSOSOnlyWithLimitedService;
}

@property (nonatomic, readonly) bool LTEConnectionShows4G;
@property (nonatomic, readonly, copy) NSString *carrierName;
@property (nonatomic, readonly, copy) NSString *customerServicePhoneNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *disabledApplicationIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *homeCountryCode;
@property (getter=isReinitiatingActivationDisabled, nonatomic, readonly) bool reinitiatingActivationDisabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressSOSOnlyWithLimitedService;

- (void).cxx_destruct;
- (bool)LTEConnectionShows4G;
- (id)carrierName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customerServicePhoneNumber;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)disabledApplicationIDs;
- (id)homeCountryCode;
- (id)init;
- (bool)isReinitiatingActivationDisabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suppressSOSOnlyWithLimitedService;

@end
