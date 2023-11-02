
@interface SBPIPMorphAnimatorDataSource : NSObject <SBViewMorphAnimatorDataSource> {
    SBPIPContentViewLayoutSettings * _contentViewLayoutSettings;
    SBPIPMorphAnimatorController * _morphAnimatorController;
    NSMutableDictionary * _morphAnimatorToPegasusInitialFrame;
    PGPictureInPictureController * _pegasusController;
    SBPIPController * _pipController;
}

@property (nonatomic, retain) SBPIPContentViewLayoutSettings *contentViewLayoutSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SBPIPMorphAnimatorController *morphAnimatorController;
@property (nonatomic, retain) PGPictureInPictureController *pegasusController;
@property (nonatomic, retain) SBPIPController *pipController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_appLayoutBoundingBoxForAnimator:(id)arg1;
- (bool)_isChamoisWindowingUIEnabledForAnimator:(id)arg1;
- (id)contentViewLayoutSettings;
- (id)initWithMorphAnimatorController:(id)arg1 pipController:(id)arg2 pegasusController:(id)arg3 contentViewLayoutSettings:(id)arg4;
- (id)morphAnimatorController;
- (id)pegasusController;
- (id)pipController;
- (void)setContentViewLayoutSettings:(id)arg1;
- (void)setMorphAnimatorController:(id)arg1;
- (void)setPegasusController:(id)arg1;
- (void)setPipController:(id)arg1;
- (bool)shouldProvideSourceClippingFrameInFixedCoordinateSpace:(id)arg1;
- (double)sourceBlackCurtainCornerRadiusForAnimator:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceContentContainerFrameForAnimator:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceContentFrameForAnimator:(id)arg1;
- (double)sourceCornerRadiusForAnimator:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceSubviewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inScreenSpaceForAnimator:(id)arg2;
- (double)targetFinalCornerRadiusForAnimator:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFinalFrameForAnimator:(id)arg1;

@end
