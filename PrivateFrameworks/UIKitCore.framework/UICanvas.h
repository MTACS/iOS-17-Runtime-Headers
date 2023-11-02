
@interface UICanvas : UIWindowScene

@property (nonatomic, readonly) _UICanvasDefinition *_definition;
@property (getter=isKeyCanvas, nonatomic, readonly) bool keyCanvas;
@property (getter=_scene, nonatomic, readonly) FBSScene *scene;
@property (nonatomic, readonly) long long state;

@end
