
@interface REUpNextLargeTextCell : REUpNextBaseCell {
    REUpNextImageView * _bodyImage;
    CLKUIColoringLabel * _bodyLabel;
    NSArray * _bodyWithLeftImageConstraints;
    NSArray * _bodyWithNoImageConstraints;
    UILayoutGuide * _contentLayoutGuide;
    unsigned int  _currentImageEdge;
    REUpNextImageView * _headerImage;
    CLKUIColoringLabel * _headerLabel;
    NSArray * _headerWithLeftImageConstraints;
    NSArray * _headerWithNoImageConstraints;
    NSArray * _headerWithRightImageConstraints;
    CLKFont * _monospaceBodyFont;
    bool  _showingBodyImage;
    bool  _showingHeaderImage;
    CLKFont * _standardBodyFont;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateHeaderColor;
- (void)configureWithContent:(id)arg1;
- (void)defaultTextColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateConstraints;

@end
