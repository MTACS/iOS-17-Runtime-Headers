
@interface NewsArticles.EndOfArticlePublisherView : UIView {
    void axElement;
    void backgroundColorView;
    void followButton;
    void logoImageOnTap;
    void logoImageView;
    void logoNameLabel;
    void titleLabel;
}

@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)setAccessibilityElements:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;

@end
