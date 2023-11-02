
@interface PTGlobalCinematographyMetadataVersion1 : PTGlobalCinematographyMetadata {
    float  _focusPullerAlpha;
    float  _focusPullerMaxV;
    float  _focusPullerResistance;
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

@property (nonatomic) float focusPullerAlpha;
@property (nonatomic) float focusPullerMaxV;
@property (nonatomic) float focusPullerResistance;
@property (nonatomic) float maximumDisparityPerSecond;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maximumRackFocusPullTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } minimumRackFocusPullTime;

- (float)focusPullerAlpha;
- (float)focusPullerMaxV;
- (float)focusPullerResistance;
- (id)initWithData:(id)arg1;
- (id)initWithMinorVersion:(unsigned int)arg1;
- (float)maximumDisparityPerSecond;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumRackFocusPullTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumRackFocusPullTime;
- (void)setFocusPullerAlpha:(float)arg1;
- (void)setFocusPullerMaxV:(float)arg1;
- (void)setFocusPullerResistance:(float)arg1;
- (void)setMaximumDisparityPerSecond:(float)arg1;
- (void)setMaximumRackFocusPullTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMinimumRackFocusPullTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (bool)writeToData:(id)arg1 withOptions:(id)arg2;

@end
