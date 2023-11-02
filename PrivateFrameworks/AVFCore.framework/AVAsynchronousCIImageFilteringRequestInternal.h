
@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject {
    id /* block */  _cancellationTest;
    id /* block */  _completionHandler;
    AVAsynchronousVideoCompositionRequest * _compositingRequest;
    id /* block */  _defaultCIContextProvider;
    CIImage * _sourceCIImage;
    struct __CVBuffer { } * _sourcePBuf;
}

@property (nonatomic, copy) id /* block */ cancellationTest;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) AVAsynchronousVideoCompositionRequest *compositingRequest;
@property (nonatomic, copy) id /* block */ defaultCIContextProvider;
@property (nonatomic, retain) CIImage *sourceCIImage;
@property (nonatomic, retain) struct __CVBuffer { }*sourcePBuf;

- (void)_willDeallocOrFinalize;
- (id /* block */)cancellationTest;
- (id /* block */)completionHandler;
- (id)compositingRequest;
- (void)dealloc;
- (id /* block */)defaultCIContextProvider;
- (void)setCancellationTest:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompositingRequest:(id)arg1;
- (void)setDefaultCIContextProvider:(id /* block */)arg1;
- (void)setSourceCIImage:(id)arg1;
- (void)setSourcePBuf:(struct __CVBuffer { }*)arg1;
- (id)sourceCIImage;
- (struct __CVBuffer { }*)sourcePBuf;

@end
