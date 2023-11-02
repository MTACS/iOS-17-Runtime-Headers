
@interface SFFluidCollectionViewInteraction : NSObject {
    SFFluidCollectionView * _fluidCollectionView;
}

@property (nonatomic) SFFluidCollectionView *fluidCollectionView;
@property (nonatomic, readonly) NSArray *gestureRecognizers;

- (void).cxx_destruct;
- (void)cancelInteraction;
- (id)fluidCollectionView;
- (id)gestureRecognizers;
- (void)setFluidCollectionView:(id)arg1;
- (id)transformLayoutAttributes:(id)arg1;

@end
