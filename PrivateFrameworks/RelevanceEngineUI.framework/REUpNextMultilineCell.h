
@interface REUpNextMultilineCell : REUpNextBaseCell {
    REUpNextAccessoryView * _accessoryView;
    UILayoutGuide * _bodyImageSizingLayoutGuide;
    CLKFont * _boldFont;
    UILayoutGuide * _contentLayoutGuide;
    REUpNextImageView * _descriptionImageView;
    CLKUIColoringLabel * _descriptionLine1Label;
    CLKUIColoringLabel * _descriptionLine2Label;
    UILayoutGuide * _descriptionTextLayoutGuide;
    REUpNextImageView * _headerImage;
    unsigned int  _headerImageEdge;
    CLKUIColoringLabel * _headerLabel;
    NSArray * _headerWithLeftImageConstraints;
    NSArray * _headerWithNoImageConstraints;
    NSArray * _headerWithRightImageConstraints;
    CLKFont * _italicFont;
    bool  _showingAccessory;
    bool  _showingDescriptionImage;
    bool  _showingHeader;
    bool  _showingHeaderImage;
    bool  _showingThreeLineLayout;
    CLKFont * _standardFont;
    bool  _usingStretchableImage;
    NSArray * _withDescription2Constraints;
    NSArray * _withDescriptionAccessoryConstraints;
    NSArray * _withDescriptionImageViewConstraints;
    NSArray * _withHeaderConstraints;
    NSArray * _withStretchableDescriptionImageViewConstraints;
    NSArray * _withoutDescription2Constraints;
    NSArray * _withoutDescriptionAccessoryConstraints;
    NSArray * _withoutDescriptionImageViewConstraints;
    NSArray * _withoutHeaderConstraints;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateHeaderColor;
- (void)configureWithContent:(id)arg1;
- (void)defaultTextColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateConstraints;

@end
