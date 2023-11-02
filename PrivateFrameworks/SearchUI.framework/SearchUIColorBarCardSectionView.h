
@interface SearchUIColorBarCardSectionView : SearchUICardSectionView {
    UIView * _colorBarView;
    NUIContainerBoxView * _multilineTopTextLabelContainer;
    SearchUILabel * _spacerTextLabel;
    NUIContainerStackView * _stackView;
    SearchUILabel * _subtitleLabel;
    SearchUILabel * _titleLabel;
    SearchUILabel * _topTextlabel;
}

@property (nonatomic, retain) UIView *colorBarView;
@property (nonatomic, retain) NUIContainerBoxView *multilineTopTextLabelContainer;
@property (nonatomic, retain) SearchUILabel *spacerTextLabel;
@property (nonatomic, retain) NUIContainerStackView *stackView;
@property (nonatomic, retain) SearchUILabel *subtitleLabel;
@property (nonatomic, retain) SearchUILabel *titleLabel;
@property (nonatomic, retain) SearchUILabel *topTextlabel;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)colorBarView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (id)multilineTopTextLabelContainer;
- (void)setColorBarView:(id)arg1;
- (void)setMultilineTopTextLabelContainer:(id)arg1;
- (void)setSpacerTextLabel:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopTextlabel:(id)arg1;
- (id)setupContentView;
- (id)spacerTextLabel;
- (id)stackView;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)topTextlabel;
- (void)updateWithRowModel:(id)arg1;

@end
