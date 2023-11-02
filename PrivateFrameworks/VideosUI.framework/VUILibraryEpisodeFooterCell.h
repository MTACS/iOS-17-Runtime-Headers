
@interface VUILibraryEpisodeFooterCell : UICollectionViewCell {
    VUISeparatorView * _bottomSeparatorView;
    <VUILibraryEpisodeFooterCellDelegate> * _delegate;
    NSNumber * _storeID;
    NSString * _title;
    VUIButton * _titleButton;
    VUISeparatorView * _topSeparatorView;
}

@property (nonatomic, retain) VUISeparatorView *bottomSeparatorView;
@property (nonatomic) <VUILibraryEpisodeFooterCellDelegate> *delegate;
@property (nonatomic, retain) NSNumber *storeID;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) VUIButton *titleButton;
@property (nonatomic, retain) VUISeparatorView *topSeparatorView;

- (void).cxx_destruct;
- (id)bottomSeparatorView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBottomSeparatorView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStoreID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleButton:(id)arg1;
- (void)setTopSeparatorView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)storeID;
- (id)title;
- (id)titleButton;
- (id)topSeparatorView;

@end
