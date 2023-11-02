
@interface CKFullscreenEffectDecorationView : UICollectionReusableView {
    UIView<CKFullscreenEffectView> * _effectView;
}

@property (nonatomic) UIView<CKFullscreenEffectView> *effectView;

+ (id)decorationViewKind;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)effectView;
- (void)prepareForReuse;
- (void)setEffectView:(id)arg1;
- (void)setupForEffectView:(id)arg1;
- (void)tearDownEffectView;

@end
