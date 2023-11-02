
@interface ENPersistentTemporaryExposureKey : NSObject {
    NSString * _appBundleIdentifier;
    ENTemporaryExposureKey * _key;
    unsigned int  _originalReportType;
    unsigned int  _originalVariantOfConcernType;
    NSString * _regionCountryCode;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly) ENTemporaryExposureKey *key;
@property (nonatomic) unsigned int originalReportType;
@property (nonatomic) unsigned int originalVariantOfConcernType;
@property (nonatomic, readonly, copy) NSString *regionCountryCode;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)description;
- (id)initWithTemporaryExposureKey:(id)arg1 appBundleIdentifier:(id)arg2 regionCountryCode:(id)arg3;
- (id)key;
- (unsigned int)originalReportType;
- (unsigned int)originalVariantOfConcernType;
- (id)regionCountryCode;
- (void)setOriginalReportType:(unsigned int)arg1;
- (void)setOriginalVariantOfConcernType:(unsigned int)arg1;

@end
