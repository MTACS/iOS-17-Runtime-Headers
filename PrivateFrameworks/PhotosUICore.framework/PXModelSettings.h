
@interface PXModelSettings : PXSettings {
    double  _photoAnalysisGraphInitialGraceDelay;
    double  _photoAnalysisGraphProgressUpdateInterval;
}

@property (nonatomic) double photoAnalysisGraphInitialGraceDelay;
@property (nonatomic) double photoAnalysisGraphProgressUpdateInterval;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (double)photoAnalysisGraphInitialGraceDelay;
- (double)photoAnalysisGraphProgressUpdateInterval;
- (void)setDefaultValues;
- (void)setPhotoAnalysisGraphInitialGraceDelay:(double)arg1;
- (void)setPhotoAnalysisGraphProgressUpdateInterval:(double)arg1;

@end
