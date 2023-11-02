
@interface SCKPInteractiveCardSectionViewController : CRKCardSectionViewController

@property (nonatomic, retain) CRKContainerCardSectionView *view;

+ (id)cardSectionClasses;

- (void)_loadCardSectionView;
- (bool)_shouldRenderButtonOverlay;

@end
