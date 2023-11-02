
@interface HFThreadCommissioner : NSObject {
    NSMutableDictionary * _activeCommissioningForSetupCode;
}

@property (nonatomic, readonly) NSMutableDictionary *activeCommissioningForSetupCode;

+ (id)sharedCommissioner;

- (void).cxx_destruct;
- (id)activeCommissioningForSetupCode;
- (void)cancelAllCommissioning;
- (void)cancelCommissioningForSetupCode:(id)arg1;
- (id)commissionAccessoryWithSetupCode:(id)arg1 threadIdentifier:(id)arg2 home:(id)arg3;
- (id)init;

@end
