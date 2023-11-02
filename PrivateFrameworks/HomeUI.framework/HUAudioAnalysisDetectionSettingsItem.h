
@interface HUAudioAnalysisDetectionSettingsItem : HFItem {
    HMAccessory * _accessory;
    unsigned long long  _audioDetectionType;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) unsigned long long audioDetectionType;

- (void).cxx_destruct;
- (id)_localizedStringFromDetectionType:(unsigned long long)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessory;
- (unsigned long long)audioDetectionType;
- (id)initWithDetectionType:(unsigned long long)arg1 accessory:(id)arg2;

@end
