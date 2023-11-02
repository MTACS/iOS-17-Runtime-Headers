
@protocol MSPContainerEditAddition <MSPContainerEdit>

@required

- (NSArray *)addedImmutableObjects;
- (NSUUID *)identifierForObjectAtopAddedImmutableObject:(id <MSPImmutableObject>)arg1;
- (NSIndexSet *)indexesOfAddedObjects;

@end
