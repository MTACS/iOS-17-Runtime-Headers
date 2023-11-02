
@interface _UIContentViewAnimationStateUpdatingLayer : CALayer {
    double  _progress;
    id /* block */  _progressHandler;
}

@property (nonatomic) double progress;

+ (id)layerForView:(id)arg1 withUpdateHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (bool)needsDisplayForKey:(id)arg1;

- (void).cxx_destruct;
- (void)animationCompletedWithPosition:(long long)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;

@end
