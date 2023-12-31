
@interface FAFamilySharingFeaturesView : UIView {
    long long  _context;
    UIButton * _learnMoreButton;
    bool  _shouldHideLocationSharing;
    UIStackView * _stack;
}

+ (id)rowForIcon:(id)arg1 andLabel:(id)arg2;

- (void).cxx_destruct;
- (id)_contextSensitiveLocalizedStringWithKey:(id)arg1;
- (id)_imageViewWithIconNamed:(id)arg1 addBorder:(bool)arg2;
- (id)_labelWithStringAtKey:(id)arg1;
- (void)_learnMoreButtonTapped:(id)arg1;
- (void)_updateFonts;
- (id)initWithContext:(long long)arg1 hideLocationSharing:(bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
