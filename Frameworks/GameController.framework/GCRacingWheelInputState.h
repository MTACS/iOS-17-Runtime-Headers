
@interface GCRacingWheelInputState : _GCDevicePhysicalInputFacade

@property (readonly) <GCButtonElement> *acceleratorPedal;
@property (readonly) <GCButtonElement> *brakePedal;
@property (readonly) <GCButtonElement> *clutchPedal;
@property (readonly) GCGearShifterElement *shifter;
@property (readonly) GCSteeringWheelElement *wheel;

- (id)acceleratorPedal;
- (id)brakePedal;
- (id)clutchPedal;
- (id)shifter;
- (id)wheel;

@end
