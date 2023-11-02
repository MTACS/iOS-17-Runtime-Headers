
@interface NSISRestrictedToNonNegativeMarkerVariable : NSISVariable

- (id)markedConstraint;
- (bool)shouldBeMinimized;
- (int)valueRestriction;

@end
