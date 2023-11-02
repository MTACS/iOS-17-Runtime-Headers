
@interface GCHapticCapabilities : NSObject <GCDeviceHapticCapabilityInfo, NSSecureCoding> {
    GCHapticCapabilityGraph * _capabilityGraph;
    GCController * _controller;
    GCDeviceHaptics * _deviceHaptics;
    NSArray * _hapticEngines;
    NSArray * _hapticEnginesInfo;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    bool  _initialized;
}

@property (readonly) GCHapticCapabilityGraph *capabilityGraph;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) GCDeviceHaptics *deviceHaptics;
@property (copy) NSArray *hapticEngines;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, readonly) bool initialized;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capabilityGraph;
- (id)deviceHaptics;
- (void)encodeWithCoder:(id)arg1;
- (id)hapticEngines;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 hapticEnginesInfo:(id)arg2 hapticCapabilityGraph:(id)arg3;
- (void)initializeHapticEngines;
- (bool)initialized;
- (void)removeHapticEngines;
- (void)setController:(id)arg1;
- (void)setHapticEngines:(id)arg1;

@end
