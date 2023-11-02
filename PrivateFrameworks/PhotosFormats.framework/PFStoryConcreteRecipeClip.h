
@interface PFStoryConcreteRecipeClip : NSObject <PFStoryRecipeClip> {
    NSString * _assetIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _idealDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maximumDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _minimumDuration;
    long long  _motionStyle;
    long long  _playbackStyle;
    long long  _transition;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoCueOffset;
}

@property (nonatomic, readonly) NSString *assetIdentifier;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } idealDuration;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maximumDuration;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minimumDuration;
@property (nonatomic, readonly) long long motionStyle;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long transition;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } videoCueOffset;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)diagnosticDescription;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })idealDuration;
- (id)initWithAssetIdentifier:(id)arg1 playbackStyle:(long long)arg2 minimumDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 idealDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 maximumDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 videoCueOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 motionStyle:(long long)arg7 transition:(long long)arg8;
- (bool)isEqualToClip:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumDuration;
- (long long)motionStyle;
- (long long)playbackStyle;
- (long long)transition;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoCueOffset;

@end
