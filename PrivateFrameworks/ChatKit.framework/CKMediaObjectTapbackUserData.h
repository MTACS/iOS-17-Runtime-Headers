
@interface CKMediaObjectTapbackUserData : NSObject {
    CKMediaObjectBackedAsset * _asset;
    bool  _displayedInGridView;
    UIView<CKGradientReferenceView> * _gradientReferenceView;
    bool  _invertTailDirection;
    bool  _shouldAnimate;
}

@property (nonatomic, retain) CKMediaObjectBackedAsset *asset;
@property (getter=isDisplayedInGridView, nonatomic) bool displayedInGridView;
@property (nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic) bool invertTailDirection;
@property (nonatomic) bool shouldAnimate;

- (void).cxx_destruct;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)gradientReferenceView;
- (bool)invertTailDirection;
- (bool)isDisplayedInGridView;
- (void)setAsset:(id)arg1;
- (void)setDisplayedInGridView:(bool)arg1;
- (void)setGradientReferenceView:(id)arg1;
- (void)setInvertTailDirection:(bool)arg1;
- (void)setShouldAnimate:(bool)arg1;
- (bool)shouldAnimate;

@end
