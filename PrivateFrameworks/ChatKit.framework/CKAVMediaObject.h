
@interface CKAVMediaObject : CKMediaObject {
    double  _duration;
    bool  _durationLoaded;
}

@property (nonatomic) double duration;
@property (nonatomic) bool durationLoaded;

+ (id)durationCache;

- (id)description;
- (double)duration;
- (bool)durationLoaded;
- (void)setDuration:(double)arg1;
- (void)setDurationLoaded:(bool)arg1;

@end
