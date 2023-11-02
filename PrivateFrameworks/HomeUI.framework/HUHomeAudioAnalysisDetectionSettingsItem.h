
@interface HUHomeAudioAnalysisDetectionSettingsItem : HFItem {
    unsigned long long  _audioDetectionType;
    HMHome * _home;
}

@property (nonatomic, readonly) unsigned long long audioDetectionType;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)_localizedStringFromDetectionType:(unsigned long long)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (unsigned long long)audioDetectionType;
- (id)home;
- (id)initWithDetectionType:(unsigned long long)arg1 home:(id)arg2;

@end
