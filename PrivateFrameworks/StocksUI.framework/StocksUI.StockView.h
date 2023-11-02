
@interface StocksUI.StockView : UIView <TSAXCustomReorderMessaging> {
    void accessibilityCompanyName;
    void accessibilityLongCompanyName;
    void accessibilityPriceString;
    void axElement;
    void companyLabel;
    void companyLabelLong;
    void exchangeLabel;
    void isEditing;
    void isSelected;
    void makeAccessibilityCustomActions;
    void priceChangeButton;
    void priceLabel;
    void revision;
    void sparklineView;
    void symbolLabel;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) bool isAccessibilityElement;
@property (nonatomic, readonly) NSString *tsaxAccessibilityLabelForReordering;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (id)tsaxAccessibilityLabelForReordering;

@end
