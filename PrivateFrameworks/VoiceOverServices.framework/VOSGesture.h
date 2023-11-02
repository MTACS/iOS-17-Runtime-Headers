
@interface VOSGesture : NSObject <NSSecureCoding> {
    NSString * _rawValue;
}

@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *rawValue;

+ (id)BackTapDoubleTap;
+ (id)BackTapTripleTap;
+ (id)FiveFingerDoubleTap;
+ (id)FiveFingerQuadrupleTap;
+ (id)FiveFingerSingleTap;
+ (id)FiveFingerTripleTap;
+ (id)FourFingerDoubleTap;
+ (id)FourFingerFlickDown;
+ (id)FourFingerFlickLeft;
+ (id)FourFingerFlickRight;
+ (id)FourFingerFlickUp;
+ (id)FourFingerQuadrupleTap;
+ (id)FourFingerSingleTap;
+ (id)FourFingerTripleTap;
+ (id)Invalid;
+ (id)OneFingerDoubleTap;
+ (id)OneFingerDoubleTapAndHold;
+ (id)OneFingerFlickDown;
+ (id)OneFingerFlickLeft;
+ (id)OneFingerFlickRight;
+ (id)OneFingerFlickUp;
+ (id)OneFingerQuadrupleTap;
+ (id)OneFingerSingleTap;
+ (id)OneFingerSingleTapAndHold;
+ (id)OneFingerTripleTap;
+ (id)ThreeFingerDoubleTap;
+ (id)ThreeFingerDoubleTapAndHold;
+ (id)ThreeFingerDoubleTapHoldAndFlickDown;
+ (id)ThreeFingerDoubleTapHoldAndFlickLeft;
+ (id)ThreeFingerDoubleTapHoldAndFlickRight;
+ (id)ThreeFingerDoubleTapHoldAndFlickUp;
+ (id)ThreeFingerFlickDown;
+ (id)ThreeFingerFlickLeft;
+ (id)ThreeFingerFlickRight;
+ (id)ThreeFingerFlickUp;
+ (id)ThreeFingerQuadrupleTap;
+ (id)ThreeFingerSingleTap;
+ (id)ThreeFingerSingleTapAndHold;
+ (id)ThreeFingerTripleTap;
+ (id)TwoFingerDoubleTap;
+ (id)TwoFingerDoubleTapAndHold;
+ (id)TwoFingerFlickDown;
+ (id)TwoFingerFlickLeft;
+ (id)TwoFingerFlickRight;
+ (id)TwoFingerFlickUp;
+ (id)TwoFingerQuadrupleTap;
+ (id)TwoFingerRotateClockwise;
+ (id)TwoFingerRotateCounterclockwise;
+ (id)TwoFingerScrub;
+ (id)TwoFingerSingleTap;
+ (id)TwoFingerSingleTapAndHold;
+ (id)TwoFingerTripleTap;
+ (id)_gesturesForFingerCount:(long long)arg1;
+ (id)allGestures;
+ (id)conflictingZoomGestures;
+ (id)fiveFingerGestures;
+ (id)fourFingerGestures;
+ (id)gestureWithStringValue:(id)arg1;
+ (id)horizontalMirrorGestureForGesture:(id)arg1;
+ (id)oneFingerGestures;
+ (id)rtlGestureForGesture:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)threeFingerGestures;
+ (id)twoFingerGestures;

- (void).cxx_destruct;
- (id)_initWithRawValue:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)rawValue;

@end
