
@interface DSP_HALBypass_Factory : NSObject <HAL_DSP_Factory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createProcessor:(id)arg1 withHost:(id)arg2;

@end
