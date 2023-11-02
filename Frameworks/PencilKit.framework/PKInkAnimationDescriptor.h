
@interface PKInkAnimationDescriptor : NSObject {
    double  _duration;
    double  _sizeDelta;
}

@property (nonatomic) double duration;
@property (nonatomic) double sizeDelta;

- (double)duration;
- (id)initWithDuration:(double)arg1 sizeDelta:(double)arg2;
- (id)mutableCopy;
- (void)setDuration:(double)arg1;
- (void)setSizeDelta:(double)arg1;
- (double)sizeDelta;

@end
