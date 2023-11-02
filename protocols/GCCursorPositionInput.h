
@protocol GCCursorPositionInput <NSObject>

@required

- (struct { double x1; double x2; })delta;
- (id /* block */)positionDidChangeHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, <GCPhysicalInputElement> *, <GCCursorPositionInput> *, struct { double x1; double x2; }, void*, id, SEL
- (void)setPositionDidChangeHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCPhysicalInputElement> *, <GCCursorPositionInput> *, struct { double x1; double x2; }, void*

@end
