
@interface PXCuratedLibraryToggleFilterActionPerformer : PXCuratedLibraryActionPerformer

@property (nonatomic, readonly) PXContentFilterState *currentContentFilterState;

- (id)currentContentFilterState;
- (void)finishedUserInteractionTask;
- (bool)updateToContentFilterState:(id)arg1;

@end
