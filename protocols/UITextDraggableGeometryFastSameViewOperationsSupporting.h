
@protocol UITextDraggableGeometryFastSameViewOperationsSupporting <NSObject>

@required

- (NSArray *)attributedStringsForTextRanges:(NSArray *)arg1;
- (UITextDraggableGeometrySameViewDropOperationResult *)performSameViewDropOperation:(id <UITextDraggableGeometrySameViewDropOperation>)arg1;

@end
