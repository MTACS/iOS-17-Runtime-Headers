
@interface VOSGestureCategory : NSObject {
    NSArray * _gestures;
    NSString * _localizedCategoryName;
}

@property (nonatomic, retain) NSArray *gestures;
@property (nonatomic, retain) NSString *localizedCategoryName;

+ (id)allCategories;
+ (id)backTaps;
+ (id)fiveFingerTaps;
+ (id)fourFingerFlicks;
+ (id)fourFingerTaps;
+ (bool)isFlickGesture:(id)arg1;
+ (bool)isRotateGesture:(id)arg1;
+ (bool)isScrubGesture:(id)arg1;
+ (bool)isTapAndHoldGesture:(id)arg1;
+ (bool)isTapGesture:(id)arg1;
+ (id)oneFingerFlicks;
+ (id)oneFingerTapAndHolds;
+ (id)oneFingerTaps;
+ (id)threeFingerDoubleTapHoldAndFlicks;
+ (id)threeFingerFlicks;
+ (id)threeFingerTapAndHolds;
+ (id)threeFingerTaps;
+ (id)twoFingerFlicks;
+ (id)twoFingerRotates;
+ (id)twoFingerScrubs;
+ (id)twoFingerTapAndHolds;
+ (id)twoFingerTaps;

- (void).cxx_destruct;
- (bool)containsGesture:(id)arg1;
- (id)gestures;
- (unsigned long long)hash;
- (id)init;
- (id)initWithGestures:(id)arg1 localizedCategoryName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedCategoryName;
- (void)setGestures:(id)arg1;
- (void)setLocalizedCategoryName:(id)arg1;

@end
