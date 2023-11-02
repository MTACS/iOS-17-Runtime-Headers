
@interface NTKNightModeTriggerSettings : NSObject {
    unsigned long long  _sampleSize;
    double  _thresholdLuxHigh;
    double  _thresholdLuxLow;
}

@property (nonatomic) unsigned long long sampleSize;
@property (nonatomic) double thresholdLuxHigh;
@property (nonatomic) double thresholdLuxLow;

- (unsigned long long)_readSampleSizeFromPrefs;
- (double)_readThresholdLuxHighFromPrefs;
- (double)_readThresholdLuxLowFromPrefs;
- (void)_registerForDarwinNotifications;
- (void)_unregisterForDarwinNotifications;
- (void)dealloc;
- (id)init;
- (unsigned long long)sampleSize;
- (void)setSampleSize:(unsigned long long)arg1;
- (void)setThresholdLuxHigh:(double)arg1;
- (void)setThresholdLuxLow:(double)arg1;
- (double)thresholdLuxHigh;
- (double)thresholdLuxLow;

@end
