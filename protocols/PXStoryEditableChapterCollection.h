
@protocol PXStoryEditableChapterCollection <PXStoryChapterCollection>

@required

- (bool)canApplyEdits:(NSArray *)arg1 error:(id*)arg2;
- (<PXStoryChapterCollection> *)copyByApplyingEdits:(NSArray *)arg1;

@end
