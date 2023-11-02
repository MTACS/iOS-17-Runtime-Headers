
@interface MFComposeFontSelectorButton : MFComposeStyleSelectorButton {
    UIFont * _representedFont;
}

@property (nonatomic, retain) UIFont *representedFont;

+ (id)buttonWithFont:(id)arg1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)representedFont;
- (void)setRepresentedFont:(id)arg1;

@end
