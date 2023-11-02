
@interface _UIActivityContentTitleView : _UINavigationBarTitleView {
    bool  _customButtonMode;
    bool  _hasCloseButton;
    bool  _isCloseButtonOnLeadingEdge;
    LPLinkView * _linkView;
    bool  _photosCarouselMode;
}

@property (nonatomic) bool customButtonMode;
@property (nonatomic) bool hasCloseButton;
@property (nonatomic) bool isCloseButtonOnLeadingEdge;
@property (nonatomic, retain) LPLinkView *linkView;
@property (nonatomic) bool photosCarouselMode;

- (void).cxx_destruct;
- (void)_updateContent;
- (void)contentDidChange;
- (bool)customButtonMode;
- (bool)hasCloseButton;
- (bool)isCloseButtonOnLeadingEdge;
- (void)layoutSubviews;
- (id)linkView;
- (bool)photosCarouselMode;
- (long long)preferredContentSizeForSize:(long long)arg1;
- (void)setCustomButtonMode:(bool)arg1;
- (void)setHasCloseButton:(bool)arg1;
- (void)setIsCloseButtonOnLeadingEdge:(bool)arg1;
- (void)setLinkView:(id)arg1;
- (void)setPhotosCarouselMode:(bool)arg1;

@end
