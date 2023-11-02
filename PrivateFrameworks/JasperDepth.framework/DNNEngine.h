
@interface DNNEngine : NSObject {
    BackendDNNEspressoModel * mBackendDNN;
    FrontendDNNEspressoModel * mFrontendDNN;
}

- (void).cxx_destruct;
- (id)getBackendDNNFeatureVectorDim;
- (id)init;
- (id)initWithFrontendMode:(unsigned long long)arg1 andBackendMode:(unsigned long long)arg2;
- (int)runBackend:(struct __CVBuffer { }*)arg1 sparseBuffer:(float*)arg2 numDepthPoints:(unsigned int)arg3 result:(float*)arg4;
- (int)runFrontend:(float*)arg1 withSize:(int)arg2 result:(id*)arg3;

@end
