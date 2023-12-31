
@interface CKMomentCollectionViewCell : UICollectionViewCell {
    CKFullScreenEffect * _effect;
    NSMutableArray * _effectViews;
}

@property (nonatomic, retain) CKFullScreenEffect *effect;
@property (nonatomic, retain) NSMutableArray *effectViews;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)addEffectView:(id)arg1;
- (void)animate;
- (id)effect;
- (id)effectViews;
- (void)prepareForReuse;
- (void)setEffect:(id)arg1;
- (void)setEffectViews:(id)arg1;
- (void)setupEffectIfNeeded;
- (void)stopAnimation;

@end
