
@interface SBDeviceApplicationSceneViewPlaceholderContentViewProvider : NSObject <SBScenePlaceholderContentViewProvider> {
    <SBScenePlaceholderContentViewProviderDelegate> * _delegate;
    UIUserInterfaceStyleArbiter * _userInterfaceStyleArbiter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBScenePlaceholderContentViewProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_checkApplicationRestorationState:(id)arg1 useSnapshot:(bool*)arg2;
- (unsigned long long)_contentTypeToSearchFromSceneHandle:(id)arg1 withContext:(id)arg2;
- (id)_contentViewFromSceneHandle:(id)arg1 displayConfiguration:(id)arg2 orientation:(long long)arg3 snapshot:(id)arg4 size:(struct CGSize { double x1; double x2; })arg5 statusBarDescriptor:(id)arg6 hasOrientationMismatchForClassicApp:(bool)arg7 customContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8;
- (id)_initWithApplication:(id)arg1 userInterfaceStyleArbiter:(id)arg2;
- (id)_loadLiveXIBViewForApplication:(id)arg1;
- (struct CGSize { double x1; double x2; })_naturalSizeForOrientation:(long long)arg1 referenceSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_snapshotsDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithApplication:(id)arg1;
- (id)sceneView:(id)arg1 requestsPlaceholderContentViewWithContext:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
