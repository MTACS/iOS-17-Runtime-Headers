
@interface VCPMAEmbeddingAnalyzer : NSObject {
    VCPSceneProcessingImageManager * _imageManager;
    VCPObjectPool * _sessionPool;
}

- (void).cxx_destruct;
- (void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2 preferANE:(bool)arg3;
- (int)_loadImageURL:(id)arg1 withSession:(id)arg2 reencodedImageData:(id*)arg3 andRequestHandler:(id*)arg4;
- (void)analyzeWithImageURL:(id)arg1 requestTypes:(unsigned long long)arg2 reencode:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)init;

@end
