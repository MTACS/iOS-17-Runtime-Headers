
@interface MPCCrossFadeParameters : NSObject <MFCrossFadeParameters> {
    double  _duration;
}

@property (nonatomic, readonly) double duration;

- (double)duration;
- (id)initWithDuration:(double)arg1;

@end
