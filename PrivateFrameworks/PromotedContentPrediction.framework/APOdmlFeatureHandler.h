
@interface APOdmlFeatureHandler : NSObject {
    MLFeatureValue * _appDownloadVector;
    MLFeatureValue * _appUsageVector;
    APOdmlAssetManager * _assetManager;
    MLArrayBatchProvider * _batchInput;
    MLFeatureValue * _installedAppVector;
    bool  _isTwoDimensional;
}

@property (nonatomic, retain) MLFeatureValue *appDownloadVector;
@property (nonatomic, retain) MLFeatureValue *appUsageVector;
@property (nonatomic, readonly) APOdmlAssetManager *assetManager;
@property (nonatomic, readonly) MLArrayBatchProvider *batchInput;
@property (nonatomic, retain) MLFeatureValue *installedAppVector;
@property (nonatomic, readonly) bool isTwoDimensional;

- (void).cxx_destruct;
- (id)_translateFeaturesToTwoDimensional:(id)arg1;
- (id)adSpecificFeatures:(id)arg1;
- (void)addOnDeviceFeaturesToDictionary:(id)arg1;
- (id)appDownloadVector;
- (id)appUsageVector;
- (id)assetManager;
- (id)batchInput;
- (id)featuresForResponse:(id)arg1 adSpecificFeatures:(id)arg2;
- (void)fetchOnDeviceFeatures;
- (id)initWithResponses:(id)arg1 assetManager:(id)arg2 model:(id)arg3;
- (id)installedAppVector;
- (bool)isTwoDimensional;
- (bool)isTwoDimensional:(id)arg1;
- (void)setAppDownloadVector:(id)arg1;
- (void)setAppUsageVector:(id)arg1;
- (void)setInstalledAppVector:(id)arg1;

@end
