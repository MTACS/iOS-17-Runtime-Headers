
@protocol GCAdaptiveTriggers <GCControllerComponent>

@required

- (GCDeviceAdaptiveTriggersStatusPayload *)leftStatus;
- (GCDeviceAdaptiveTriggersPayload *)leftTrigger;
- (GCDeviceAdaptiveTriggersStatusPayload *)rightStatus;
- (GCDeviceAdaptiveTriggersPayload *)rightTrigger;
- (void)setLeftStatus:(GCDeviceAdaptiveTriggersStatusPayload *)arg1;
- (void)setLeftTrigger:(GCDeviceAdaptiveTriggersPayload *)arg1;
- (void)setRightStatus:(GCDeviceAdaptiveTriggersStatusPayload *)arg1;
- (void)setRightTrigger:(GCDeviceAdaptiveTriggersPayload *)arg1;

@end
