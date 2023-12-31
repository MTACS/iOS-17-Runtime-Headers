
@interface UIViewPrintFormatter : UIPrintFormatter {
    UIView * _view;
}

@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_initWithView:(id)arg1;
- (long long)_recalcPageCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageAtIndex:(long long)arg1;
- (id)view;

@end
