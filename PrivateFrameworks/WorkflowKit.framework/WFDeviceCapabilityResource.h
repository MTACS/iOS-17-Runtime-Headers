
@interface WFDeviceCapabilityResource : WFResource

+ (bool)mustBeAvailableForDisplay;

- (bool)isMobileGestaltBasedCapability;
- (void)refreshAvailability;
- (id)unavailableResourceError;

@end
