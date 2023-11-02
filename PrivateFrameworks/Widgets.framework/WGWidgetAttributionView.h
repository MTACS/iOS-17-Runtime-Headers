
@interface WGWidgetAttributionView : UITextView {
    UIColor * _legibilityTextColor;
    NSMutableAttributedString * _widgetAttributedString;
}

@property (nonatomic, retain) UIColor *legibilityTextColor;

+ (void)requestAttributedStringForIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
+ (id)widgetAttributionIDsInOrder;

- (void).cxx_destruct;
- (id)_attributionBackgroundColor;
- (id)_attributionFont;
- (void)_configureAttributedString;
- (id)_paragraphStyle;
- (id)initWithWidgetAttributedString:(id)arg1;
- (void)layoutSubviews;
- (id)legibilityTextColor;
- (void)setLegibilityTextColor:(id)arg1;

@end
