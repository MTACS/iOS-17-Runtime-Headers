
@interface SUCreditCardReaderInfoView : UIView {
    UILabel * _addCardDetailLabel;
    UILabel * _addCardLabel;
}

@property (nonatomic, retain) UILabel *addCardDetailLabel;
@property (nonatomic, retain) UILabel *addCardLabel;

- (void).cxx_destruct;
- (id)addCardDetailLabel;
- (id)addCardLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAddCardDetailLabel:(id)arg1;
- (void)setAddCardLabel:(id)arg1;

@end
