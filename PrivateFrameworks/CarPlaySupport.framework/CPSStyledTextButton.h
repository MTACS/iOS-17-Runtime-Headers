
@interface CPSStyledTextButton : CPSButton {
    UIFont * _fontOverride;
}

@property (nonatomic, retain) UIFont *fontOverride;

+ (id)buttonWithTextButton:(id)arg1;

- (void).cxx_destruct;
- (id)_buttonFont;
- (id)_externalUnfocusedBorderColor;
- (bool)canBecomeFocused;
- (id)fontOverride;
- (void)setFontOverride:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
