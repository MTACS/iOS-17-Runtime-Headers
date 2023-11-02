
@interface _PXCuratedLibraryNavigateToNextZoomLevelActionPerformer : PXCuratedLibraryActionPerformer {
    PXGSpriteReference * _hitSpriteReference;
    PXGLayout * _layout;
}

@property (nonatomic, readonly) PXGSpriteReference *hitSpriteReference;
@property (nonatomic, readonly) PXGLayout *layout;

- (void).cxx_destruct;
- (id)hitSpriteReference;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 layout:(id)arg3 hitSpriteReference:(id)arg4;
- (id)layout;
- (void)performUserInteractionTask;

@end
