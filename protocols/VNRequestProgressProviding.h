
@protocol VNRequestProgressProviding <NSObject>

@required

- (bool)indeterminate;
- (id /* block */)progressHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, VNRequest *, double, NSError *, void*, id, SEL
- (void)setProgressHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VNRequest *, double, NSError *, void*

@end
