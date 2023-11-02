
@interface UIKeyboardCandidateInlineFloatingView : UIView {
    int  _adjustMode;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cellPadding;
    double  _extendedStateAdditionalHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _extraInsets;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inlineRect;
    bool  _inlineRectIsVertical;
    NSString * _inlineText;
    double  _maxX;
    int  _position;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousCollapsedFrame;
    bool  _reducedWidth;
}

@property (nonatomic) int adjustMode;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cellPadding;
@property (nonatomic) double extendedStateAdditionalHeight;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } extraInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inlineRect;
@property (nonatomic) bool inlineRectIsVertical;
@property (nonatomic, copy) NSString *inlineText;
@property (nonatomic) double maxX;
@property (nonatomic) int position;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousCollapsedFrame;
@property (getter=isReducedWidth, nonatomic, readonly) bool reducedWidth;

- (void).cxx_destruct;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maxX:(double)arg3;
- (int)adjustMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedFrameFromDesiredFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textHeight:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedFrameFromDesiredFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textWidth:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cellPadding;
- (double)extendedStateAdditionalHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })extraInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inlineRect;
- (bool)inlineRectIsVertical;
- (id)inlineText;
- (bool)isAcceptableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 afterScrollBy:(double)arg2;
- (bool)isReducedWidth;
- (void)layoutSubviews;
- (double)maxX;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (int)position;
- (struct CGSize { double x1; double x2; })preferredSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousCollapsedFrame;
- (void)setAdjustMode:(int)arg1;
- (void)setCellPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setExtendedStateAdditionalHeight:(double)arg1;
- (void)setExtraInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInlineRectIsVertical:(bool)arg1;
- (void)setInlineText:(id)arg1;
- (void)setInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maxX:(double)arg3 layout:(bool)arg4;
- (void)setMaxX:(double)arg1;
- (void)setPosition:(int)arg1;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreviousCollapsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldExtendUpwards;
- (id)traitCollection;

@end
