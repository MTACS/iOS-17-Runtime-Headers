
@interface HUServiceDetailsCameraSettingsReaderWriter : NSObject {
    <HUServiceDetailsCameraSettingsReaderWriterConfigurator> * _configurator;
}

@property (nonatomic) <HUServiceDetailsCameraSettingsReaderWriterConfigurator> *configurator;

- (void).cxx_destruct;
- (id)_fastUpdateResultsForCharacteristic:(id)arg1 withTitle:(id)arg2;
- (id)configurator;
- (id)initWithConfigurator:(id)arg1;
- (id)readWithOptions:(id)arg1;
- (void)setConfigurator:(id)arg1;
- (id)updateUserSettingsWithValue:(bool)arg1;

@end
