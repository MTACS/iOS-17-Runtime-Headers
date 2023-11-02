
@interface SearchUIStrokeAnimationCardSectionView : SearchUICardSectionView <SAStrokeAnimatingDelegate>

@property (readonly) UIView<SAStrokeVisualResponse> *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void)animationDidStart;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
