
@interface HUAudioAnalysisDetectionSettingsItemProvider : HFItemProvider {
    HMAccessory * _accessory;
    NSMutableSet * _items;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) NSMutableSet *items;

- (void).cxx_destruct;
- (id)accessory;
- (id)init;
- (id)initWithAccessory:(id)arg1;
- (id)items;
- (id)reloadItems;

@end
