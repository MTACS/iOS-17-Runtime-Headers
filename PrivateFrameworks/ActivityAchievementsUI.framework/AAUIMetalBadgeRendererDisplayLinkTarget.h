
@interface AAUIMetalBadgeRendererDisplayLinkTarget : NSObject {
    AAUIMetalBadgeRenderer * _target;
}

@property (nonatomic) AAUIMetalBadgeRenderer *target;

- (void).cxx_destruct;
- (void)_drawBadgeFrameCallback;
- (id)_initWithTarget:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
