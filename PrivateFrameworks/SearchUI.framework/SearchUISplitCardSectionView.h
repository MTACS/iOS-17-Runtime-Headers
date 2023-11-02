
@interface SearchUISplitCardSectionView : SearchUICardSectionView {
    SearchUILabel * _bodyLabel;
    SearchUILabel * _bottomTitleLabel;
    SearchUITruncatingListLabel * _listLabel;
    SearchUILabel * _secondaryTopTitleLabel;
    SearchUILabel * _topTitleLabel;
}

@property (nonatomic, retain) SearchUILabel *bodyLabel;
@property (nonatomic, retain) SearchUILabel *bottomTitleLabel;
@property (nonatomic, retain) SearchUITruncatingListLabel *listLabel;
@property (nonatomic, retain) SearchUILabel *secondaryTopTitleLabel;
@property (nonatomic, retain) SearchUILabel *topTitleLabel;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)bodyLabel;
- (id)bottomTitleLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (id)listLabel;
- (id)secondaryTopTitleLabel;
- (void)setBodyLabel:(id)arg1;
- (void)setBottomTitleLabel:(id)arg1;
- (void)setListLabel:(id)arg1;
- (void)setSecondaryTopTitleLabel:(id)arg1;
- (void)setTopTitleLabel:(id)arg1;
- (id)setupContentView;
- (id)topTitleLabel;
- (void)updateWithRowModel:(id)arg1;

@end
