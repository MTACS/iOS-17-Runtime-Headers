
@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider> {
    NSDictionary * _exportSettings;
}

@property (nonatomic, readonly) NSDictionary *baseAudioSettings;
@property (nonatomic, readonly) NSDictionary *baseVideoSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)baseAudioSettings;
- (id)baseVideoSettings;
- (void)dealloc;
- (id)init;
- (id)initWithOutputSettingsPreset:(id)arg1;

@end
