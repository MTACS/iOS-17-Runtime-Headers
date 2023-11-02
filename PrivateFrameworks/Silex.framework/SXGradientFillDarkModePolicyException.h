
@interface SXGradientFillDarkModePolicyException : NSObject <SXDarkModePolicyException>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)shouldApplyDarkModeToComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;

@end
