
@interface NSISRestrictedToNonNegativeVariableToBeMinimized : NSISVariable

- (id)markedConstraint;
- (bool)shouldBeMinimized;
- (int)valueRestriction;

@end
