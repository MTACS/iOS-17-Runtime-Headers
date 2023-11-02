
@interface SXDebugAdvertisementSettingsProvider : NSObject <SXDebugAdvertisementSettingsProvider> {
    <SXAdvertisingSettings> * _debugSettings;
}

@property (nonatomic, readonly) <SXAdvertisingSettings> *debugSettings;

- (void).cxx_destruct;
- (id)debugSettings;
- (id)initWithDebugSettings:(id)arg1;

@end
