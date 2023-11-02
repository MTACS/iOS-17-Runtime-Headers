
@interface _UIWindowSceneActivationPrewarmActionResponse : BSActionResponse

@property (nonatomic, readonly) unsigned int sceneContainerContextId;
@property (nonatomic, readonly) unsigned long long sceneContainerRenderId;
@property (nonatomic, readonly) struct UIRectCornerRadii { double x1; double x2; double x3; double x4; } sceneCornerRadii;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sceneFrame;

+ (id)responseWithSceneContainer:(id)arg1 expectedSceneFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg3;

- (unsigned int)sceneContainerContextId;
- (unsigned long long)sceneContainerRenderId;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })sceneCornerRadii;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sceneFrame;

@end
