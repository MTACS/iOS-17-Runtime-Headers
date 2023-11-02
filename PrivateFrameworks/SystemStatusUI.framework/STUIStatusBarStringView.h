
@interface STUIStatusBarStringView : UILabel <STUIStatusBarDisplayable> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    NSString * _alternateText;
    NSTimer * _alternateTextTimer;
    long long  _fontStyle;
    NSString * _originalText;
    bool  _showsAlternateText;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (nonatomic, copy) NSString *alternateText;
@property (nonatomic, readonly) NSTimer *alternateTextTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncapsulated, nonatomic) bool encapsulated;
@property (nonatomic) long long fontStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *originalText;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (nonatomic) bool showsAlternateText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)_updateAlternateTextTimer;
- (id)accessibilityHUDRepresentation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)alternateText;
- (id)alternateTextTimer;
- (void)applyStyleAttributes:(id)arg1;
- (void)didMoveToWindow;
- (long long)fontStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEncapsulated;
- (id)originalText;
- (bool)prefersBaselineAlignment;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAlternateText:(id)arg1;
- (void)setEncapsulated:(bool)arg1;
- (void)setFontStyle:(long long)arg1;
- (void)setOriginalText:(id)arg1;
- (void)setShowsAlternateText:(bool)arg1;
- (void)setText:(id)arg1;
- (bool)showsAlternateText;
- (bool)wantsCrossfade;

@end
