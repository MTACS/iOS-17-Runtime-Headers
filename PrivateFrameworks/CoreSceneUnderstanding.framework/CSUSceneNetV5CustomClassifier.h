
@interface CSUSceneNetV5CustomClassifier : NSObject {
    CSUSceneNetV5CustomClassifierConfiguration * _configuration;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { 
        struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { 
            struct EspressoNet {} *__value_; 
        } __ptr_; 
    }  _net;
    struct unique_ptr<ik::PixelBufferTransfer, std::default_delete<ik::PixelBufferTransfer>> { 
        struct __compressed_pair<ik::PixelBufferTransfer *, std::default_delete<ik::PixelBufferTransfer>> { 
            struct PixelBufferTransfer {} *__value_; 
        } __ptr_; 
    }  _transferSession;
}

@property (nonatomic, readonly) CSUSceneNetV5CustomClassifierConfiguration *configuration;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)configuration;
- (void)enumerateLabelsFromClassificationLikelihoods:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)labelsFromClassificationLikelihoods:(id)arg1;
- (bool)loadResourcesAndReturnError:(id*)arg1;
- (void)runOnInputScenePrint:(id)arg1 completion:(id /* block */)arg2;
- (void)unsafeRunOnInputScenePrint:(id)arg1 completion:(id /* block */)arg2;

@end
