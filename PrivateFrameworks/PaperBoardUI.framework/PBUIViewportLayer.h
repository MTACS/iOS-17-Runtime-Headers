
@interface PBUIViewportLayer : CALayer {
    CALayer * _contentLayer;
    double  _scale;
}

@property (nonatomic, readonly) CALayer *contentLayer;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (id)animationForKey:(id)arg1;
- (id)contentLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithScale:(double)arg1;
- (void)layoutSublayers;
- (double)scale;
- (void)setScale:(double)arg1;

@end
