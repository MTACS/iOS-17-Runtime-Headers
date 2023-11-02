
@interface MADVideoRemoveBackgroundSettings : NSObject {
    bool  _autoplayTrimEnabled;
    double  _photosPreferredThreshold;
    double  _visionPreferredLowQualityProportionThreshold;
    double  _visionPreferredVideoQualityThreshold;
    double  _visionPreferredWorstFrameScoreThreshold;
    bool  _visionTrimEnabled;
    double  _visionTrimMininumDuration;
    double  _visionTrimThreshold;
    unsigned long long  _visionTrimWindow;
}

+ (bool)autoplayTrimEnabled;
+ (double)photosPreferredThreshold;
+ (id)sharedSettings;
+ (double)visionPreferredLowQualityProportionThreshold;
+ (double)visionPreferredVideoQualityThreshold;
+ (double)visionPreferredWorstFrameScoreThreshold;
+ (bool)visionTrimEnabled;
+ (double)visionTrimMininumDuration;
+ (double)visionTrimThreshold;
+ (unsigned long long)visionTrimWindow;

- (id)init;

@end
