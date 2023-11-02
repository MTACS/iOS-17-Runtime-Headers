
@interface FBSSceneComponent : NSObject <FBSSceneComponent> {
    <FBSComponentScene> * _scene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientScene;
- (id)hostScene;
- (id)initWithScene:(id)arg1;
- (void)invalidate;
- (id)scene;
- (void)setScene:(id)arg1;

@end
