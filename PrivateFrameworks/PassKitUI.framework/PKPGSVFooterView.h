
@interface PKPGSVFooterView : UIView {
    <PKPGSVFooterViewDelegate> * _delegate;
    PKContinuousButton * _editButton;
    long long  _expiredSectionCount;
}

@property (nonatomic) <PKPGSVFooterViewDelegate> *delegate;
@property (nonatomic) long long expiredSectionCount;

- (void).cxx_destruct;
- (void)_editTapped:(id)arg1;
- (id)delegate;
- (long long)expiredSectionCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setExpiredSectionCount:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
