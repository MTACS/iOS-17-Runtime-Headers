
@protocol MTLToolsRetainingContainer

@required

- (bool)addRetainedObject:(MTLToolsObject *)arg1;
- (void)clearRetainedObjects;
- (NSMutableSet *)retainedObjects;

@end
