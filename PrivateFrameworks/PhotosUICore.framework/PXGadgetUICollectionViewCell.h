
@interface PXGadgetUICollectionViewCell : UICollectionViewCell {
    UIView * _gadgetContentView;
}

@property (nonatomic, retain) UIView *gadgetContentView;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (void)_updateFocusRing;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusEffect;
- (id)gadgetContentView;
- (void)prepareForReuse;
- (void)setGadgetContentView:(id)arg1;

@end
