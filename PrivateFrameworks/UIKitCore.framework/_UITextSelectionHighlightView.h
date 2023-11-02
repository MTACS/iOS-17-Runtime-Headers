
@interface _UITextSelectionHighlightView : UIView <UITextSelectionHighlightView> {
    bool  _needsUpdate;
    _UITextSelectionRangeView * _rangeView;
    double  _selectionCornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _selectionEdgeInsets;
    NSArray * _selectionRects;
    NSMutableArray * _trackedUnderlineRects;
    NSMutableArray * _underlineViews;
}

@property (setter=_setSelectionBorderColor:, nonatomic, retain) UIColor *_selectionBorderColor;
@property (setter=_setSelectionBorderWidth:, nonatomic) double _selectionBorderWidth;
@property (setter=_setSelectionCornerRadius:, nonatomic) double _selectionCornerRadius;
@property (setter=_setSelectionEdgeInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _selectionEdgeInsets;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *selectionRects;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *underlineRects;

- (void).cxx_destruct;
- (id)_selectionBorderColor;
- (double)_selectionBorderWidth;
- (double)_selectionCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_selectionEdgeInsets;
- (void)_setSelectionBorderColor:(id)arg1;
- (void)_setSelectionBorderWidth:(double)arg1;
- (void)_setSelectionCornerRadius:(double)arg1;
- (void)_setSelectionEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)addUnderlines:(id)arg1 animated:(bool)arg2;
- (void)clearAllUnderlinesAnimated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pathForSingleUnderline:(id)arg1;
- (void)removeUnderlines:(id)arg1 animated:(bool)arg2;
- (id)selectionRects;
- (void)setSelectionRects:(id)arg1;
- (void)setUnderlineRects:(id)arg1;
- (void)tintColorDidChange;
- (id)underlineRects;
- (void)updateUnderlinesIfNeeded;

@end
