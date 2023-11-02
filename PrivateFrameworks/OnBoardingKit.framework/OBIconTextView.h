
@interface OBIconTextView : UIView {
    double  _baselineFromBoundsTop;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    UIImageView * _iconView;
    double  _padding;
    UITextView * _textView;
}

@property (nonatomic, readonly) double baselineFromBoundsTop;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic) double padding;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (double)baselineFromBoundsTop;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)iconView;
- (id)initWithIcon:(id)arg1 iconSize:(struct CGSize { double x1; double x2; })arg2 text:(id)arg3 dataDetectorTypes:(unsigned long long)arg4;
- (double)padding;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIconView:(id)arg1;
- (void)setPadding:(double)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateFont;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
