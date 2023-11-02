
@interface AVMobileChromelessTimelineView : AVView <AVShadowCasting> {
    bool  _drawsShadow;
    double  _heightWithNoLabel;
    unsigned long long  _labelPosition;
    bool  _labelsAutoadjustWithSliderEmphasis;
    UILabel * _leadingLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _leadingTextShadowPathRect;
    NSString * _leadingTimeText;
    double  _maxHeightToFitTimeline;
    AVMobileChromelessSlider * _slider;
    bool  _sliderEmphasized;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sliderShadowPathRect;
    AVMobileChromelessControlsStyleSheet * _styleSheet;
    UILabel * _trailingLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _trailingTextShadowPathRect;
    NSString * _trailingTimeText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawsShadow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heightWithNoLabel;
@property (nonatomic) unsigned long long labelPosition;
@property (nonatomic) bool labelsAutoadjustWithSliderEmphasis;
@property (nonatomic, retain) NSString *leadingTimeText;
@property (nonatomic) double maxHeightToFitTimeline;
@property (nonatomic, readonly) AVMobileChromelessSlider *slider;
@property (nonatomic) bool sliderEmphasized;
@property (nonatomic, retain) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *trailingTimeText;

- (void).cxx_destruct;
- (void)_setUpShadowAppearance;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;
- (void)didMoveToWindow;
- (bool)drawsShadow;
- (double)heightWithNoLabel;
- (id)initWithStyleSheet:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (unsigned long long)labelPosition;
- (bool)labelsAutoadjustWithSliderEmphasis;
- (void)layoutSubviews;
- (id)leadingTimeText;
- (double)maxHeightToFitTimeline;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDrawsShadow:(bool)arg1;
- (void)setLabelPosition:(unsigned long long)arg1;
- (void)setLabelsAutoadjustWithSliderEmphasis:(bool)arg1;
- (void)setLeadingTimeText:(id)arg1;
- (void)setMaxHeightToFitTimeline:(double)arg1;
- (void)setSliderEmphasized:(bool)arg1;
- (void)setStyleSheet:(id)arg1;
- (void)setTrailingTimeText:(id)arg1;
- (id)slider;
- (bool)sliderEmphasized;
- (id)styleSheet;
- (id)trailingTimeText;

@end
