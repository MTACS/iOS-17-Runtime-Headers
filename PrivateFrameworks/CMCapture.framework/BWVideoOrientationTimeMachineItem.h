
@interface BWVideoOrientationTimeMachineItem : NSObject {
    short  _exifOrientation;
    double  _ptsSeconds;
}

@property (nonatomic) short exifOrientation;
@property (nonatomic) double ptsSeconds;

- (id)description;
- (short)exifOrientation;
- (id)initWithPTSSeconds:(double)arg1 exifOrientation:(short)arg2;
- (double)ptsSeconds;
- (void)setExifOrientation:(short)arg1;
- (void)setPtsSeconds:(double)arg1;

@end
