
@interface GCDeviceHaptics : NSObject {
    GCHapticCapabilityGraph * _capabilityGraph;
    GCController * _controller;
    NSMutableSet * _supportedLocalities;
}

@property (nonatomic, readonly) GCHapticCapabilityGraph *capabilityGraph;
@property (nonatomic) GCController *controller;
@property (nonatomic, retain) NSMutableSet *supportedLocalities;

- (void).cxx_destruct;
- (id)capabilityGraph;
- (id)controller;
- (id)createEngineWithLocality:(id)arg1;
- (id)initWithCapabilityGraph:(id)arg1;
- (void)setController:(id)arg1;
- (void)setSupportedLocalities:(id)arg1;
- (id)supportedLocalities;

@end
