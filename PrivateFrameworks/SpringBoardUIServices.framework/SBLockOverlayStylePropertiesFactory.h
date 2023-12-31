
@interface SBLockOverlayStylePropertiesFactory : NSObject {
    NSMutableDictionary * _deviceQualityToProperties;
    unsigned long long  _style;
}

@property (nonatomic, readonly) unsigned long long style;

+ (id)overlayPropertiesFactoryWithStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_fetchAndCachePropsForDeviceQuality:(long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)propertiesWithDeviceDefaultGraphicsQuality;
- (id)propertiesWithGraphicsQuality:(long long)arg1;
- (unsigned long long)style;

@end
