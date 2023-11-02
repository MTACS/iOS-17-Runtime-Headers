
@interface AVMobileControlsStyleSheet : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _embeddedInlineInsets;
    double  _statusBarHeight;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } embeddedInlineInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } landscapeFullscreenInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitFullscreenInsets;
@property (nonatomic, readonly) double standardPaddingFullScreen;
@property (nonatomic, readonly) double standardPaddingInline;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })embeddedInlineInsets;
- (id)initWithTraitCollection:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeFullscreenInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })playbackControlsViewLayoutMarginsForView:(id)arg1 keyboardHeight:(double)arg2 isFullScreen:(bool)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitFullscreenInsets;
- (void)setTraitCollection:(id)arg1;
- (double)standardPaddingFullScreen;
- (double)standardPaddingInline;
- (id)traitCollection;

@end
