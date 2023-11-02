
@protocol MSPContainerEditRemoval <MSPContainerEdit>

@required

- (NSIndexSet *)indexesOfRemovedObjects;
- (NSArray *)removedImmutableObjects;

@end
