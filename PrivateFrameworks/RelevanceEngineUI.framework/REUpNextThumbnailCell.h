
@interface REUpNextThumbnailCell : REUpNextBaseCell {
    CLKFont * _boldFont;
    CLKUIColoringLabel * _descriptionLine1Label;
    CLKUIColoringLabel * _descriptionLine2Label;
    CLKUIColoringLabel * _headerLabel;
    NSLayoutConstraint * _imageHeightConstraint;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageWidthConstraint;
    CLKFont * _italicFont;
    UILayoutGuide * _labelLayoutGuide;
    bool  _showingHeader;
    bool  _showingThreeLineLayout;
    CLKFont * _standardFont;
    NSArray * _withDescription2Constraints;
    NSArray * _withHeaderConstraints;
    NSArray * _withoutDescription2Constraints;
    NSArray * _withoutHeaderConstraints;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (void)defaultTextColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateConstraints;

@end
