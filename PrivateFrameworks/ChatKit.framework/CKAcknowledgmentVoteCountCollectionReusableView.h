
@interface CKAcknowledgmentVoteCountCollectionReusableView : UICollectionReusableView {
    UILabel * _countLabel;
}

@property (nonatomic, retain) UILabel *countLabel;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (void).cxx_destruct;
- (void)configureWithAcknowledgmentTally:(id)arg1;
- (id)countLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCountLabel:(id)arg1;

@end
