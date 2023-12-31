
@interface MSTrackListTableHeaderView : UIView {
    NSString * _title;
    struct CGSize { 
        double width; 
        double height; 
    }  _titleSize;
}

@property (nonatomic, retain) NSString *title;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)sizeToFit;
- (id)title;

@end
