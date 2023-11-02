
@interface AVPictureInPicturePrerollAttributes : NSObject {
    PGPlaybackStatePrerollAttributes * _pegasusAttributes;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _requiredLinearPlaybackEndTime;
}

@property (nonatomic, readonly) PGPlaybackStatePrerollAttributes *pegasusAttributes;
@property (nonatomic, readonly) UIColor *preferredTintColor;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } requiredLinearPlaybackEndTime;

+ (id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 preferredTintColor:(id)arg2;
+ (id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 preferredTintColor:(id)arg2;

- (void).cxx_destruct;
- (id)initWithPlaybackStatePrerollAttributes:(id)arg1 requiredLinearPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)pegasusAttributes;
- (id)preferredTintColor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requiredLinearPlaybackEndTime;

@end
