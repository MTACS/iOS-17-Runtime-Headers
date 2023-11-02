
@protocol BWMRCSceneObserver <NSObject>

@required

- (void)sceneDidChangeQRConfidence:(float)arg1 appClipCodeConfidence:(float)arg2 documentConfidence:(float)arg3 textConfidence:(float)arg4;

@end
