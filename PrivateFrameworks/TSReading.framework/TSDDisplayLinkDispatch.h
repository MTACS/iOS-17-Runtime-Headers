
@interface TSDDisplayLinkDispatch : NSObject {
    NSMutableArray * _blocks;
    TSDDisplayLink * _displayLink;
}

- (void)performBlockNextFrame:(id /* block */)arg1;
- (void)teardown;

@end
