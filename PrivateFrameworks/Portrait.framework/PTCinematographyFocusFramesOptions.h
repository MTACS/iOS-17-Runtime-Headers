
@interface PTCinematographyFocusFramesOptions : NSObject <NSCopying> {
    float  _maximumDisparityPerSecond;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maximumRackFocusPullTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _minimumRackFocusPullTime;
}

@property (nonatomic) float maximumDisparityPerSecond;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maximumRackFocusPullTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } minimumRackFocusPullTime;

+ (float)_defaultMaximumDisparityPerSecond;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })_defaultMaximumRackFocusPullTime;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })_defaultMinimumRackFocusPullTime;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithGlobalMetadata:(id)arg1;
- (float)maximumDisparityPerSecond;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumRackFocusPullTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumRackFocusPullTime;
- (void)setMaximumDisparityPerSecond:(float)arg1;
- (void)setMaximumRackFocusPullTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMinimumRackFocusPullTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)writeToGlobalMetadata:(id)arg1;

@end
