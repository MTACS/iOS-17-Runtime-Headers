
@protocol PBUIRenderer <NSObject>

@required

- (struct CGColorSpace { }*)colorSpace;
- (void)renderRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: <PBUIRenderRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IOSurface *, NSError *, void*
- (IOSurface *)renderRequest:(id <PBUIRenderRequest>)arg1 error:(out id*)arg2;

@end
