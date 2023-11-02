
@interface CSUSceneNetV5 : NSObject {
    CSUSceneNetV5Configuration * _configuration;
    struct unique_ptr<ImageDescriptorProcessorHyperplaneLSH, std::default_delete<ImageDescriptorProcessorHyperplaneLSH>> { 
        struct __compressed_pair<ImageDescriptorProcessorHyperplaneLSH *, std::default_delete<ImageDescriptorProcessorHyperplaneLSH>> { 
            struct ImageDescriptorProcessorHyperplaneLSH {} *__value_; 
        } __ptr_; 
    }  _fingerprinter;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { 
        struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { 
            struct EspressoNet {} *__value_; 
        } __ptr_; 
    }  _net;
    struct unique_ptr<csu::ObjectDetectionConfiguration, std::default_delete<csu::ObjectDetectionConfiguration>> { 
        struct __compressed_pair<csu::ObjectDetectionConfiguration *, std::default_delete<csu::ObjectDetectionConfiguration>> { 
            struct ObjectDetectionConfiguration {} *__value_; 
        } __ptr_; 
    }  _objectDetectionConfiguration;
    struct unique_ptr<csu::GraphicalModel<csu::SceneNetSceneCategoryAttributes>, std::default_delete<csu::GraphicalModel<csu::SceneNetSceneCategoryAttributes>>> { 
        struct __compressed_pair<csu::GraphicalModel<csu::SceneNetSceneCategoryAttributes> *, std::default_delete<csu::GraphicalModel<csu::SceneNetSceneCategoryAttributes>>> { 
            void *__value_; 
        } __ptr_; 
    }  _sceneGraphicalModel;
    struct unique_ptr<ik::PixelBufferTransfer, std::default_delete<ik::PixelBufferTransfer>> { 
        struct __compressed_pair<ik::PixelBufferTransfer *, std::default_delete<ik::PixelBufferTransfer>> { 
            struct PixelBufferTransfer {} *__value_; 
        } __ptr_; 
    }  _transferSession;
}

@property (nonatomic, readonly) CSUSceneNetV5AestheticsTaxonomy *aestheticsTaxonomy;
@property (nonatomic, readonly) CSUSceneNetV5Configuration *configuration;
@property (nonatomic, readonly) CSUSceneNetV5DetectionTaxonomy *detectionTaxonomy;
@property (nonatomic, readonly) CSUSceneNetV5SceneTaxonomy *sceneTaxonomy;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_unsafeRunOnInputImage:(struct __CVBuffer { }*)arg1 completion:(id /* block */)arg2;
- (id)aestheticsTaxonomy;
- (id)allAestheticsAttributeScores:(id)arg1;
- (id)allAestheticsGlobalScores:(id)arg1;
- (id)allEntityNetClassificationLikelihoods:(id)arg1;
- (id)allSceneClassificationLikelihoods:(id)arg1;
- (id)base64HashesFromFingerprintEmbedding:(id)arg1;
- (id)configuration;
- (id)detectionResultFromScoreHeatMap:(id)arg1 coordinateOffsetMap:(id)arg2;
- (id)detectionTaxonomy;
- (void)enumerateAestheticsAttributeScores:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateAestheticsGlobalScores:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateEntityNetClassificationLikelihoods:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateHierarchicalSceneClassificationLikelihoods:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateLeafSceneClassificationLikelihoods:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateSceneClassificationLikelihoods:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)hashesFromFingerprintEmbedding:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)loadResources:(id*)arg1;
- (struct __CVBuffer { }*)pixelBufferForSaliencyMap:(id)arg1 error:(id*)arg2;
- (bool)resampleImage:(struct __CVBuffer { }*)arg1 intoInputImage:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (void)runOnInputImage:(struct __CVBuffer { }*)arg1 completion:(id /* block */)arg2;
- (id)sceneTaxonomy;

@end
