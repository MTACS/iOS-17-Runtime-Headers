
@interface SVXDeviceSetupFlowSceneBuilder : NSObject {
    long long  _sceneID;
}

@property (nonatomic) long long sceneID;

- (id)build;
- (long long)sceneID;
- (void)setSceneID:(long long)arg1;

@end
