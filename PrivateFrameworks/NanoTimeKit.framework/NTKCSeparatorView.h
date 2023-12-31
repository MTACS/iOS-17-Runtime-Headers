
@interface NTKCSeparatorView : UIView {
    bool  _selected;
}

@property (nonatomic) bool selected;

+ (double)intrinsicHeight;

- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)selected;
- (void)setBackgroundColor:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
