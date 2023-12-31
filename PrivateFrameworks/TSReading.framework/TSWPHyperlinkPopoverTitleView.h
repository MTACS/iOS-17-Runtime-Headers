
@interface TSWPHyperlinkPopoverTitleView : UIView {
    NSString * _titleString;
}

@property (nonatomic, retain) NSString *titleString;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 titleString:(id)arg2;
- (void)setTitleString:(id)arg1;
- (id)titleString;

@end
