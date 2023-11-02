
@interface _SBDefaultSceneEntityFrameProvider : NSObject <SBLayoutStateTransitionSceneEntityFrameProvider> {
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (id)initWithWindowScene:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2;
- (void)setWindowScene:(id)arg1;
- (id)windowScene;

@end
