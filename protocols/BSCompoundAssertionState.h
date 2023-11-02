
@protocol BSCompoundAssertionState

@required

- (NSSet *)context;
- (bool)isActive;
- (NSOrderedSet *)orderedContext;

@end
