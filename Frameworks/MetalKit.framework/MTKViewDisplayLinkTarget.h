
@interface MTKViewDisplayLinkTarget : NSObject {
    MTKView * _target;
}

@property (nonatomic) MTKView *target;

- (void).cxx_destruct;
- (void)draw;
- (id)initWithTarget:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
