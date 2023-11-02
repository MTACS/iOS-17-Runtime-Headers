
@interface AUAudioUnitViewService : UIViewController {
    AURemoteExtensionContext * _auRemoteExtensionContext;
    UIViewController * _auViewController;
}

@property AURemoteExtensionContext *auRemoteExtensionContext;

- (void).cxx_destruct;
- (id)auRemoteExtensionContext;
- (void)connectChildView;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })determineViewSize:(id)arg1;
- (void)initializeBlankView;
- (void)loadView;
- (void)markViewForRedraw:(id)arg1;
- (void)resizeWindow:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)setAUContainerViewConstraints:(id)arg1 childView:(id)arg2 auViewSize:(struct CGSize { double x1; double x2; })arg3;
- (void)setAuRemoteExtensionContext:(id)arg1;

@end
