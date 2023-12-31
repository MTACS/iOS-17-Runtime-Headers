
@interface AVAsynchronousCIImageFilteringRequest : NSObject <NSCopying> {
    AVAsynchronousCIImageFilteringRequestInternal * _internal;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } compositionTime;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderSize;
@property (nonatomic, readonly) CIImage *sourceImage;

- (void)_willDeallocOrFinalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })compositionTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)finishWithImage:(id)arg1 context:(id)arg2;
- (id)initUsingCompositingRequest:(id)arg1 sourceFrame:(struct __CVBuffer { }*)arg2 cancellationTest:(id /* block */)arg3 defaultCIContextProvider:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (struct CGSize { double x1; double x2; })renderSize;
- (id)sourceImage;

@end
