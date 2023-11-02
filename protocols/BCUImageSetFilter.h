
@protocol BCUImageSetFilter <NSObject>

@required

- (NSString *)identifier;
- (<BCUOperation> *)newOperationWithImages:(void *)arg1 filters:(void *)arg2 size:(void *)arg3 contentsScale:(void *)arg4 waitForCPUSynchronization:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 14: NSArray *, NSArray *, struct CGSize { double x1; double x2; }, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BCUOperation> *, <BCUPurgeableImage> *, struct UIEdgeInsets { double x1; double x2; double x3; double x4; }, struct CGPath { }*, void*

@end
