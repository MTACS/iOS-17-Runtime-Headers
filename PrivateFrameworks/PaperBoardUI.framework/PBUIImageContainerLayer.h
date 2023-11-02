
@interface PBUIImageContainerLayer : CALayer {
    CALayer * _imageLayer;
}

@property (nonatomic, retain) CALayer *imageLayer;

+ (id)layer;

- (void).cxx_destruct;
- (id)animationForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)imageLayer;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)layoutSublayers;
- (void)setImageLayer:(id)arg1;

@end
