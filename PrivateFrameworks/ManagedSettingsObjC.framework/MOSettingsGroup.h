
@interface MOSettingsGroup : NSObject {
    <MOSettingsReader> * _settingsReader;
    <MOSettingsWriter> * _settingsWriter;
}

@property (nonatomic) <MOSettingsReader> *settingsReader;
@property (nonatomic) <MOSettingsWriter> *settingsWriter;

+ (id)groupName;

- (void).cxx_destruct;
- (id)initWithReader:(id)arg1 writer:(id)arg2;
- (id)metadataForSetting:(id)arg1;
- (void)setSettingsReader:(id)arg1;
- (void)setSettingsWriter:(id)arg1;
- (void)setValue:(id)arg1 forSetting:(id)arg2;
- (id)settingsReader;
- (id)settingsWriter;
- (id)valueForSetting:(id)arg1;

@end
