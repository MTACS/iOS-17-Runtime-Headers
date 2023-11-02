
@protocol PXStoryMutableTimelineManager

@required

- (void)setVisibleSegmentIdentifiers:(NSIndexSet *)arg1;
- (void)setVisibleSegmentIdentifiers:(NSIndexSet *)arg1 afterUpdatePass:(bool)arg2;
- (NSIndexSet *)visibleSegmentIdentifiers;

@end
