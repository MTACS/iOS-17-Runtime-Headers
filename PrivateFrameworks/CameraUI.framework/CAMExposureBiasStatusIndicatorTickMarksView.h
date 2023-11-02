
@interface CAMExposureBiasStatusIndicatorTickMarksView : UIView {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRange;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
