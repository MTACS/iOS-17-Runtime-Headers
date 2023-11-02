
@interface HIDDisplayPresetInterface : HIDDisplayInterface {
    NSArray * _presets;
    NSDictionary * _usageElementMap;
}

@property (readonly) NSArray *presets;

- (void).cxx_destruct;
- (id)capabilities;
- (void)createPresets;
- (long long)getActivePresetIndex:(id*)arg1;
- (long long)getCurrentPresetIndex:(id*)arg1;
- (long long)getFactoryDefaultPresetIndex:(id*)arg1;
- (id)getHIDDevices;
- (id)getHIDElementForUsage:(long long)arg1;
- (id)initWithContainerID:(id)arg1;
- (id)initWithMatching:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (id)presets;
- (bool)setActivePresetIndex:(long long)arg1 error:(id*)arg2;
- (bool)setCurrentPresetIndex:(long long)arg1 error:(id*)arg2;
- (bool)setupPresets;

@end