
@interface NCAppPickerViewFooter : UICollectionReusableView {
    UILabel * _captionLabel;
    <NCAppPickerViewFooterDelegate> * _delegate;
    UILabel * _footnoteLabel;
    UIButton * _showMoreButton;
}

@property (nonatomic) <NCAppPickerViewFooterDelegate> *delegate;

+ (id)_footnoteFont;
+ (id)_footnoteText;
+ (id)_showMoreButtonFont;
+ (id)_showMoreButtonText;
+ (double)preferredHeightForWidth:(double)arg1 showMoreButton:(bool)arg2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_showMoreButtonPressed:(id)arg1;
- (void)configureWithShowMoreButton:(bool)arg1 delegate:(id)arg2;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;

@end
