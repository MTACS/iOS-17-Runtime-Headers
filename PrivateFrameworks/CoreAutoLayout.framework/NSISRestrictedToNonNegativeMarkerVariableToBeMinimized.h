
@interface NSISRestrictedToNonNegativeMarkerVariableToBeMinimized : NSISVariable

- (id)markedConstraint;
- (bool)shouldBeMinimized;
- (int)valueRestriction;

@end
