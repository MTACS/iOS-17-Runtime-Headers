
@protocol WBSPhishingImageClassifierModelProtocol

@required

- (bool)classifyImage:(void *)arg1 enumerationBlock:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 10: UIImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, float, bool*, void*, out id*
- (void)configureSnapshotConfiguration:(WKSnapshotConfiguration *)arg1 webViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
