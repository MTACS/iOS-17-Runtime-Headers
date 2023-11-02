
@interface StocksUI.StockSearchCellView : UIView {
    void exchangeLabel;
    void isHighlightable;
    void isHighlighted;
    void isSelectable;
    void isSelected;
    void nameLabel;
    void priceChangeLabel;
    void priceLabel;
    void symbolLabel;
    void watchlistSelectionButton;
}

@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic) unsigned long long accessibilityTraits;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityCustomActions:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;

@end
