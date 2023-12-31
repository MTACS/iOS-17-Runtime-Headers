
@protocol UIDragDropSession <NSObject>

@required

- (bool)allowsMoveOperation;
- (bool)canLoadObjectsOfClass:(Class)arg1;
- (bool)hasItemsConformingToTypeIdentifiers:(NSArray *)arg1;
- (bool)isRestrictedToDraggingApplication;
- (NSArray *)items;
- (struct CGPoint { double x1; double x2; })locationInView:(UIView *)arg1;

@end
