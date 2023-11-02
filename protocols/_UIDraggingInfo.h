
@protocol _UIDraggingInfo <NSObject>

@required

- (struct CGPoint { double x1; double x2; })draggingLocationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (unsigned long long)draggingSourceOperationMask;
- (void)enumerateItemsUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIDragItem *, long long, bool*, void*

@end
