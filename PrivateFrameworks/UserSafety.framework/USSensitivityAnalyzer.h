
@interface USSensitivityAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SCMediaAnalysisService * _madService;
    SCSensitivityAnalyzer * _scsAnalyzer;
}

@property (nonatomic, retain) SCMediaAnalysisService *madService;

+ (bool)_isAnalysisEnabled:(id)arg1;
+ (bool)_isCommunicationSafetyEnabled:(id)arg1;
+ (bool)_isNudityDetectionEnabled:(id)arg1;
+ (bool)_isNudityDetectionEnabledForAnyOfServices:(id)arg1 scanningPolicy:(id)arg2;
+ (bool)_isNudityDetectionEnabledForApplication:(id)arg1 scanningPolicy:(id)arg2;
+ (bool)_isNudityDetectionEnabledForService:(id)arg1 scanningPolicy:(id)arg2;
+ (Class)entitlementsReaderClass;
+ (bool)isAnalysisEnabled;
+ (bool)isCommunicationSafetyEnabled;
+ (bool)isNudityDetectionEnabled;
+ (bool)isNudityDetectionEnabledForAnyOfServices:(id)arg1;
+ (bool)isNudityDetectionEnabledForService:(id)arg1;
+ (Class)settingsReaderClass;
+ (id)subscribeForAnalysisEnabledChanges:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)analyzeCGImage:(struct CGImage { }*)arg1 withOrientation:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)analyzeImageFile:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)analyzeImageWithLocalIdentifier:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)analyzeVideoFile:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)analyzeVideoFile:(id)arg1 useBlastdoor:(bool)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)analyzeVideoWithLocalIdentifier:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 madService:(id)arg2;
- (id)madService;
- (void)setMadService:(id)arg1;

@end
