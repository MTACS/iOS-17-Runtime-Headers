
@interface ABDeviceSceneResourceLoader : NSObject {
    NSMutableArray * _completions;
    NSObject<OS_dispatch_queue> * _queue;
    struct ABDeviceSceneModel { 
        SCNScene *scene; 
        SCNNode *deviceNode; 
        SCNNode *displayNode; 
        struct ABDeviceSceneButtonModel { 
            SCNNode *bodyNode; 
            SCNNode *muteWallNode; 
            SCNNode *buttonBlockingNode; 
            SCNNode *capNode; 
            SCNNode *capNodeHighlight; 
            SCNNode *sidesNode; 
            SCNNode *sidesNodeHighlight; 
            struct SCNMatrix4 { 
                float m11; 
                float m12; 
                float m13; 
                float m14; 
                float m21; 
                float m22; 
                float m23; 
                float m24; 
                float m31; 
                float m32; 
                float m33; 
                float m34; 
                float m41; 
                float m42; 
                float m43; 
                float m44; 
            } highlightTransform; 
        } buttonModel; 
    }  _sceneModel;
    SCNView * _sceneView;
    bool  _shouldAbortLoading;
    long long  _state;
}

@property bool shouldAbortLoading;

- (void).cxx_destruct;
- (void)_didCompleteWithSuccess:(bool)arg1;
- (void)_doCleanup;
- (bool)_loadResources;
- (id)init;
- (void)setShouldAbortLoading:(bool)arg1;
- (bool)shouldAbortLoading;

@end
