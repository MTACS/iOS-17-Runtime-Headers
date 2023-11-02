
@interface _CNUIRTTUtilities : NSObject <CNUIRTTUtilities> {
    RTTTelephonyUtilities * _utilityProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) RTTTelephonyUtilities *utilityProvider;

- (void).cxx_destruct;
- (bool)contactIsTTYContact:(id)arg1;
- (id)init;
- (id)initWithUtilityProvider:(id)arg1;
- (id)nts_lazyUtilityProvider;
- (bool)relayIsSupported;
- (void)setUtilityProvider:(id)arg1;
- (id)utilityProvider;

@end
