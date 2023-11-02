
@interface _TtC10ProductKitP33_D660C6A3879B3DCAB1A93C6FE6EA6B5B11SceneDriver : NSObject <SCNSceneRendererDelegate> {
    void camera;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  configuration;
    void croppedVideoSize;
    void currentIOSurface;
    void currentPlaybackState;
    void engageDuration;
    void featureCompletedHandler;
    void featureStartedHandler;
    void loopDuration;
    void originalVideoSize;
    void personalizedAssetMaterial;
    void player;
    void scene;
    void textureCache;
    void timeObserverToken;
    void token;
    void videoMaterial;
    void yOffset;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handlePlayerItemFinished:(id)arg1;
- (id)init;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;

@end
