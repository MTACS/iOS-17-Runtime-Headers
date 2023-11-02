
@interface STSAnimatedImageInfo : NSObject {
    double  _duration;
    NSArray * _frames;
}

@property (nonatomic) double duration;
@property (nonatomic, copy) NSArray *frames;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (double)duration;
- (id)frames;
- (void)setDuration:(double)arg1;
- (void)setFrames:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
