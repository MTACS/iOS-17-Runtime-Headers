
@interface UIAssistantBarRoundedButtonViewButton : UIButton {
    UIColor * _highlightedBackgroundColor;
    UIColor * _highlightedTitleColor;
    UIColor * _normalBackgroundColor;
    UIColor * _normalTitleColor;
}

@property (nonatomic, retain) UIColor *highlightedBackgroundColor;
@property (nonatomic, retain) UIColor *highlightedTitleColor;
@property (nonatomic, retain) UIColor *normalBackgroundColor;
@property (nonatomic, retain) UIColor *normalTitleColor;

- (void).cxx_destruct;
- (id)_currentTitleColor;
- (id)_titleColorForState:(unsigned long long)arg1;
- (void)_updateBackgroundAndTitleColor;
- (id)highlightedBackgroundColor;
- (id)highlightedTitleColor;
- (id)normalBackgroundColor;
- (id)normalTitleColor;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setHighlightedTitleColor:(id)arg1;
- (void)setNormalBackgroundColor:(id)arg1;
- (void)setNormalTitleColor:(id)arg1;

@end
