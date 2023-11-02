
@interface _UIBackdropViewLayer : CALayer {
    _UIBackdropView * _backdropView;
}

@property (nonatomic) _UIBackdropView *backdropView;

- (id)backdropView;
- (void)dealloc;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setBackdropView:(id)arg1;

@end
