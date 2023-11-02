
@interface NewsFeed.FormatStateView : UIView {
    void identifier;
    void state;
    void stateViewFormatLayoutViews;
}

@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)setAccessibilityCustomActions:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;

@end
