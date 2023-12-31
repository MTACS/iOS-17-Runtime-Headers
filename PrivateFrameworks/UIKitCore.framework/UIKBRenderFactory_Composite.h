
@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone {
    UIKBRenderFactory * _overlayFactory;
}

- (void).cxx_destruct;
- (Class)_overlayFactoryClass;
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(bool)arg2;
- (bool)isTallPopup;
- (double)popupFontSize;
- (struct CGPoint { double x1; double x2; })popupSymbolTextOffset;
- (struct CGPoint { double x1; double x2; })variantAnnotationTextOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })variantPaddedFrameInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })variantSymbolFrameInsets;
- (struct CGPoint { double x1; double x2; })variantSymbolTextOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })wideShadowPaddleInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })wideShadowPopupMenuInsets;

@end
