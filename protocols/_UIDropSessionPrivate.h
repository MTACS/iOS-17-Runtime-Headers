
@protocol _UIDropSessionPrivate <NSObject>

@required

- (bool)_drivenByPointer;
- (struct CGPoint { double x1; double x2; })_previewCenterForVisibleItem:(UIDragItem *)arg1 inView:(UIView *)arg2;
- (struct CGSize { double x1; double x2; })_previewSizeForVisibleItem:(UIDragItem *)arg1;
- (void)requestVisibleItems:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, void*

@end
