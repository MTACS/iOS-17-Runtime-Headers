
@interface SearchUIBackgroundView : UIView {
    bool  _inPreviewPlatter;
    UIView * _platterView;
    bool  _shouldUseInsetRoundedSections;
}

@property (getter=isInPreviewPlatter, nonatomic) bool inPreviewPlatter;
@property (retain) UIView *platterView;
@property (nonatomic) bool shouldUseInsetRoundedSections;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)init;
- (bool)isInPreviewPlatter;
- (id)platterView;
- (void)setInPreviewPlatter:(bool)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (bool)shouldUseInsetRoundedSections;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
