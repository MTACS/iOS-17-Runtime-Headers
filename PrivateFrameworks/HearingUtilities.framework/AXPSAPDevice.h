
@interface AXPSAPDevice : AXHearingAidDevice

+ (id)characteristicsUUIDs;

- (unsigned long long)deviceType;
- (id)persistentRepresentation;
- (unsigned long long)requiredProperties;
- (id)serviceUUID;

@end
