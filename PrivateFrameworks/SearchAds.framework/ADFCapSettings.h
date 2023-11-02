
@interface ADFCapSettings : NSObject {
    double  _clickExpirationThresholdInSeconds;
    double  _frequencyCapExpirationInSeconds;
    unsigned long long  _maxClickCapElements;
    unsigned long long  _maxFrequencyCapElements;
    long long  _pageType;
    double  _reverseGeolocationRefreshThresholdInMeters;
}

@property (nonatomic) double clickExpirationThresholdInSeconds;
@property (nonatomic) double frequencyCapExpirationInSeconds;
@property (nonatomic) unsigned long long maxClickCapElements;
@property (nonatomic) unsigned long long maxFrequencyCapElements;
@property (nonatomic) long long pageType;
@property (nonatomic) double reverseGeolocationRefreshThresholdInMeters;

- (id)_capTypeToString:(long long)arg1;
- (double)clickExpirationThresholdInSeconds;
- (double)frequencyCapExpirationInSeconds;
- (id)initWithType:(long long)arg1 location:(double)arg2 clickExpiration:(double)arg3 fCapExpiration:(double)arg4 maxFCapElements:(unsigned long long)arg5 maxClickCapElements:(unsigned long long)arg6;
- (unsigned long long)maxClickCapElements;
- (unsigned long long)maxFrequencyCapElements;
- (void)overrideClickExpiration:(double)arg1;
- (void)overrideFrequencyCapExpiration:(double)arg1;
- (void)overrideMaxClickElements:(unsigned long long)arg1;
- (void)overrideMaxFrequencyCapElements:(unsigned long long)arg1;
- (void)overrideRevGeoThreshold:(double)arg1;
- (long long)pageType;
- (double)reverseGeolocationRefreshThresholdInMeters;
- (void)setClickExpirationThresholdInSeconds:(double)arg1;
- (void)setFrequencyCapExpirationInSeconds:(double)arg1;
- (void)setMaxClickCapElements:(unsigned long long)arg1;
- (void)setMaxFrequencyCapElements:(unsigned long long)arg1;
- (void)setPageType:(long long)arg1;
- (void)setReverseGeolocationRefreshThresholdInMeters:(double)arg1;

@end
