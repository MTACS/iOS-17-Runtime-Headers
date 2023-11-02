
@interface PXVideoPlaybackSettings : PXSettings {
    bool  _isDownloadingVideoSegmentsEnabled;
    double  _maxHighlightFractionForDisplay;
}

@property (nonatomic) bool isDownloadingVideoSegmentsEnabled;
@property (nonatomic) double maxHighlightFractionForDisplay;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)isDownloadingVideoSegmentsEnabled;
- (double)maxHighlightFractionForDisplay;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setIsDownloadingVideoSegmentsEnabled:(bool)arg1;
- (void)setMaxHighlightFractionForDisplay:(double)arg1;

@end
