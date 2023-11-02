
@interface SearchUIResponseWrapperCardSectionView : SearchUICardSectionView <VRXInteractionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)informHostOfViewResize:(struct CGSize { double x1; double x2; })arg1;
- (void)navigateWithResponseData:(id)arg1;
- (void)performSFCommand:(id)arg1;
- (id)setupContentView;

@end
