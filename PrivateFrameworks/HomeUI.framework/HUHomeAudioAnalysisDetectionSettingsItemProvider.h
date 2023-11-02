
@interface HUHomeAudioAnalysisDetectionSettingsItemProvider : HFItemProvider {
    HMHome * _home;
    NSMutableSet * _items;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSMutableSet *items;

- (void).cxx_destruct;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)items;
- (id)reloadItems;

@end
