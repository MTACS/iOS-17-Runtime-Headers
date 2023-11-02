
@interface _SUICProgressRingLayer : _SUICRingLayer {
    double  _progress;
    bool  _spinning;
}

@property (nonatomic) double progress;
@property (nonatomic) bool spinning;

- (id)init;
- (double)progress;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setSpinning:(bool)arg1;
- (bool)spinning;

@end
