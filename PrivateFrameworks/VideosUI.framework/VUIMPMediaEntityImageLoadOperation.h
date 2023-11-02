
@interface VUIMPMediaEntityImageLoadOperation : VUIImageLoadParamsOperation

- (id)_MPMediaEntityImageLoadParams;
- (void)_finishWithImage:(id)arg1;
- (void)executionDidBegin;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3;

@end
