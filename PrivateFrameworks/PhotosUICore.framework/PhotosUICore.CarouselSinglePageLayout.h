
@interface PhotosUICore.CarouselSinglePageLayout : PXGLayout {
    void clippingInsets;
    void edgeClippingMaskEffects;
    void mainMaskingEffects;
    void updater;
}

- (void).cxx_destruct;
- (void)displayScaleDidChange;
- (void)entityManagerDidChange;
- (id)init;
- (void)updateContent;
- (void)updateIfNeeded;
- (void)updateMaskingEffects;

@end
