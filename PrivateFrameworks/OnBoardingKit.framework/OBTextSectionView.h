
@interface OBTextSectionView : UIStackView {
    UILabel * _contentLabel;
    UILabel * _headerLabel;
}

@property (nonatomic, retain) UILabel *contentLabel;
@property (nonatomic, retain) UILabel *headerLabel;

- (void).cxx_destruct;
- (id)_contentFont;
- (id)_headerFont;
- (void)addAccessoryButton:(id)arg1;
- (id)contentLabel;
- (id)headerLabel;
- (id)initWithHeader:(id)arg1 content:(id)arg2;
- (void)setContentLabel:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
