
@interface HAENLocationGatingHelper : NSObject {
    bool  _EUVolumeLimitFlagOn;
    HAENGeoLocation * _geoLocation;
    NSNumber * _productTypeOverride;
    NSDictionary * _regionBehavior;
    struct { 
        NSString *countryCode; 
        NSString *source; 
        NSString *disposition; 
        bool featureMandatory; 
        bool EUVolumeLimitBehavior; 
    }  _stats;
    NSObject<OS_dispatch_queue> * _updateQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_contryConfigurationDidChange:(id)arg1;
- (void)_donateSignalToTipsKit:(bool)arg1;
- (void)_donateSignalToTipsKitOnInitialization;
- (int)_getMGProductType;
- (bool)_isHAENFeatureMandatory:(id)arg1 dataDisposition:(id)arg2;
- (bool)_isIPad;
- (bool)_isIPod;
- (bool)_isMandatoryDeviceClass;
- (void)_loadRegionPlistFile;
- (void)_logLocationGatingFlags;
- (id)_readDeviceDisposition;
- (bool)_regionAndDeviceMandatesFeature:(id)arg1;
- (void)_setFeatureMandatoryFlag:(id)arg1;
- (void)_setHEANEnabled:(id)arg1;
- (bool)_shouldUpdateLocation:(id)arg1;
- (void)_updateImpl;
- (void)_updateLocationGatingFlags;
- (void)_updateSampleTransient:(id)arg1;
- (void)_updateStatsWithGeoLocation:(id)arg1 disposition:(id)arg2 andMandatoryFlag:(bool)arg3;
- (bool)_validCountryCodeSource:(unsigned int)arg1;
- (bool)_validDataDisposition:(id)arg1;
- (void)dealloc;
- (void)deviceDataDispositionDidChange;
- (struct { id x1; id x2; id x3; bool x4; bool x5; })getStats;
- (id)init;
- (void)reloadProductTypeOverride;
- (void)update;

@end
