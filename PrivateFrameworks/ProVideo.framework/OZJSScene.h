
@interface OZJSScene : NSObject <OZSceneJSExport> {
    void * _scene;
}

@property (nonatomic) void*scene;

+ (id)sceneWithScene:(void*)arg1;

- (id)get3DElementWithID:(unsigned int)arg1;
- (id)get3DElementWithName:(id)arg1;
- (id)getElementWithID:(unsigned int)arg1;
- (id)initWithScene:(void*)arg1;
- (void*)scene;
- (void)setScene:(void*)arg1;

@end
