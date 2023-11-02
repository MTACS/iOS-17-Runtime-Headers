
@interface DOCLargeTagView : UIView {
    DOCTagCheckmarkView * _checkmarkView;
    long long  _selectionType;
    DOCTagDotView * _tagDotView;
    UILabel * _tagNameLabel;
    DOCTag * _tagValue;
}

@property (nonatomic, readonly) DOCTagCheckmarkView *checkmarkView;
@property (nonatomic) long long selectionType;
@property (nonatomic, readonly) DOCTagDotView *tagDotView;
@property (nonatomic, readonly) UILabel *tagNameLabel;
@property (nonatomic, retain) DOCTag *tagValue;

- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (void)_updateSelectionIndications;
- (id)checkmarkView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)selectionType;
- (void)setSelectionType:(long long)arg1;
- (void)setTagValue:(id)arg1;
- (id)tagDotView;
- (id)tagNameLabel;
- (id)tagValue;
- (void)updateBackground;

@end
