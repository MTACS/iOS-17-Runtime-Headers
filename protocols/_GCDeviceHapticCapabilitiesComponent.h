
@protocol _GCDeviceHapticCapabilitiesComponent <_GCDeviceComponent>

@required

- (GCHapticCapabilityGraph *)hapticCapabilityGraph;
- (NSArray *)hapticEngines;

@end
