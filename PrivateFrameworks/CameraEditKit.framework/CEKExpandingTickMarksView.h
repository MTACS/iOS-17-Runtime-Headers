
@interface CEKExpandingTickMarksView : UIView {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  __selectedRange;
    NSMutableArray * __tickViews;
    bool  _expanded;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } _selectedRange;
@property (nonatomic, readonly) NSMutableArray *_tickViews;
@property (nonatomic) bool expanded;

- (void).cxx_destruct;
- (unsigned long long)_collapsedTickIndexForIndex:(unsigned long long)arg1;
- (unsigned long long)_middleTickIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedRange;
- (id)_tickViews;
- (bool)expanded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setSelectedValue:(double)arg1;
- (void)setSelectedValue:(double)arg1 animated:(bool)arg2;
- (void)set_selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)tintColorDidChange;

@end
