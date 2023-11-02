
@interface MagnifierSupport.MFLivePreviewView : UIView {
    void $__lazy_storage_$_pointsOverlayLayer;
    void $__lazy_storage_$_pointsPath;
    void textValue;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

+ (Class)layerClass;

- (void).cxx_destruct;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (bool)_accessibilityUseAccessibilityFrameForHittest;
- (id)accessibilityExpandedTextValue;
- (id)accessibilityLabel;
- (bool)accessibilityPerformEscape;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;

@end
