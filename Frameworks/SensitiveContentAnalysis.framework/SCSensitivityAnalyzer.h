
@interface SCSensitivityAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SCMediaAnalysisService * _madService;
}

@property (readonly) long long analysisPolicy;
@property (nonatomic, retain) SCMediaAnalysisService *madService;

+ (long long)_analysisPolicyFrom:(id)arg1;
+ (bool)_isCommunicationSafetyEnabled:(id)arg1;
+ (bool)_isSensitiveContentWarningEnabled:(id)arg1;
+ (bool)_isSensitiveContentWarningEnabledForAnyOfServices:(id)arg1 scanningPolicy:(id)arg2;
+ (bool)_isSensitiveContentWarningEnabledForApplication:(id)arg1 scanningPolicy:(id)arg2;
+ (bool)_isSensitiveContentWarningEnabledForService:(id)arg1 scanningPolicy:(id)arg2;
+ (long long)analysisFeatureEnablement;
+ (Class)entitlementsReaderClass;
+ (bool)isSensitiveContentWarningEnabledForAnyOfServices:(id)arg1;
+ (bool)isSensitiveContentWarningEnabledForService:(id)arg1;
+ (Class)settingsReaderClass;
+ (id)subscribeForAnalysisAvailabilityChanges:(id /* block */)arg1;

- (void).cxx_destruct;
- (long long)_mapMOScanningPolicyEnumValue:(id)arg1;
- (void)_runBlockOnDispatchQueueIfSet:(id /* block */)arg1;
- (long long)analysisPolicy;
- (void)analyzeCGImage:(struct CGImage { }*)arg1 completionHandler:(id /* block */)arg2;
- (void)analyzeCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)analyzeImageFile:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)analyzeImageWithLocalIdentifier:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)analyzeVideoFile:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)analyzeVideoFile:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)analyzeVideoFile:(id)arg1 useBlastdoor:(bool)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)analyzeVideoWithLocalIdentifier:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 madService:(id)arg2;
- (id)madService;
- (void)setMadService:(id)arg1;

@end
