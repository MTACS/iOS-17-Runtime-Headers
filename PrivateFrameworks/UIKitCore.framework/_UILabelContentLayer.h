
@interface _UILabelContentLayer : CALayer {
    bool  _wantsAnimation;
}

@property (nonatomic) bool wantsAnimation;

- (id)actionForKey:(id)arg1;
- (void)display;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setWantsAnimation:(bool)arg1;
- (bool)wantsAnimation;

@end
