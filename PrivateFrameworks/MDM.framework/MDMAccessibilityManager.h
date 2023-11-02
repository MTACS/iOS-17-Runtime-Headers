
@interface MDMAccessibilityManager : NSObject {
    bool  _grayscaleEnabled;
}

@property (nonatomic) bool boldTextEnabled;
@property (nonatomic) bool grayscaleEnabled;
@property (nonatomic) bool increaseContrastEnabled;
@property (nonatomic) bool reduceMotionEnabled;
@property (nonatomic) bool reduceTransparencyEnabled;
@property (nonatomic) long long textSize;
@property (nonatomic) bool touchAccommodationsEnabled;
@property (nonatomic) bool voiceOverEnabled;
@property (nonatomic) bool zoomEnabled;

+ (id)sharedInstance;

- (bool)boldTextEnabled;
- (bool)grayscaleEnabled;
- (bool)increaseContrastEnabled;
- (bool)isValidTextSize:(long long)arg1;
- (bool)reduceMotionEnabled;
- (bool)reduceTransparencyEnabled;
- (void)setBoldTextEnabled:(bool)arg1;
- (void)setGrayscaleEnabled:(bool)arg1;
- (void)setIncreaseContrastEnabled:(bool)arg1;
- (void)setReduceMotionEnabled:(bool)arg1;
- (void)setReduceTransparencyEnabled:(bool)arg1;
- (void)setTextSize:(long long)arg1;
- (void)setTouchAccommodationsEnabled:(bool)arg1;
- (void)setVoiceOverEnabled:(bool)arg1;
- (void)setZoomEnabled:(bool)arg1;
- (long long)textSize;
- (bool)touchAccommodationsEnabled;
- (bool)voiceOverEnabled;
- (bool)zoomEnabled;

@end
