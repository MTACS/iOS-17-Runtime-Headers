
@interface TSDNonInteractiveInsertionContext : TSDInsertionContext

- (bool)fromDragToInsertController;
- (bool)hasPreferredCenter;
- (bool)insertFloating;
- (bool)insertFromDrag;
- (bool)insertWillBeDiscarded;
- (bool)isInteractive;
- (bool)isPreferredCenterRequired;
- (struct CGPoint { double x1; double x2; })preferredCenter;
- (bool)shouldEndEditing;

@end
