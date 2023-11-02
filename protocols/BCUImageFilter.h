
@protocol BCUImageFilter <NSObject>

@required

- (NSString *)identifier;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForSize:(struct CGSize { double x1; double x2; })arg1 contentsScale:(double)arg2 options:(NSDictionary *)arg3;
- (<BCUOperation> *)newOperationWithImage:(void *)arg1 size:(void *)arg2 contentsScale:(void *)arg3 priority:(void *)arg4 options:(void *)arg5 waitForCPUSynchronization:(void *)arg6 logKey:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 16: struct CGImage { }*, struct CGSize { double x1; double x2; }, double, float, NSDictionary *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BCUOperation> *, <BCUPurgeableImage> *, struct UIEdgeInsets { double x1; double x2; double x3; double x4; }, id, void*
- (bool)supportsOptions;

@optional

- (CALayer *)coverLayerWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3;
- (CALayer *)shadowLayerWithImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3 kind:(unsigned long long)arg4;

@end
