
@interface _UICanvasDefinition : UISceneSession <NSCopying, NSMutableCopying>

@property (nonatomic, readonly) Class canvasSubclass;
@property (nonatomic, readonly) Class delegateClass;
@property (nonatomic, readonly) UICanvas *representedCanvas;
@property (nonatomic, readonly) long long systemType;

@end
