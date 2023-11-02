
@interface NSISRestrictedToNonNegativeVariable : NSISVariable

- (id)markedConstraint;
- (bool)shouldBeMinimized;
- (int)valueRestriction;

@end
