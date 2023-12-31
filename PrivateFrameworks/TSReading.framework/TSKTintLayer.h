
@interface TSKTintLayer : CAReplicatorLayer {
    CALayer * _contentsLayer;
}

@property (nonatomic, retain) CALayer *contentsLayer;
@property struct CGColor { }*tintColor;

- (id)contents;
- (id)contentsLayer;
- (void)dealloc;
- (void)layoutSublayers;
- (void)setContents:(id)arg1;
- (void)setContentsLayer:(id)arg1;
- (void)setNeedsDisplay;
- (void)setTintColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)tintColor;

@end
