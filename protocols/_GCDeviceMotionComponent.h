
@protocol _GCDeviceMotionComponent <_GCDeviceComponent>

@required

- (id /* block */)deviceMotionServiceConnectedHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (<_GCMotionEventSourceDescription> *)motionEventSource;
- (bool)sensorsActive;
- (void)setDeviceMotionServiceConnectedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setSensorsActive:(bool)arg1;

@end
