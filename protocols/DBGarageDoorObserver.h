
@protocol DBGarageDoorObserver <DBHomeKitServiceObserver>

@required

- (void)garageDoor:(DBGarageDoor *)arg1 didUpdateDoorState:(long long)arg2;
- (void)garageDoor:(DBGarageDoor *)arg1 didUpdateObstructionDetected:(bool)arg2;
- (void)garageDoor:(DBGarageDoor *)arg1 didUpdateTargetDoorState:(long long)arg2;

@end
