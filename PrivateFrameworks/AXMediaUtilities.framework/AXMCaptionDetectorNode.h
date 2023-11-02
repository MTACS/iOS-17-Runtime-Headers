
@interface AXMCaptionDetectorNode : AXMEvaluationNode {
    struct CVNLPCaptionHandler { } * _captionHandlerRef;
    AXImageCaptionModel * _effectiveCaptionModelInfo;
    NSURL * _effectiveModelURL;
    unsigned long long  _genderStrategy;
    AXMLanguageTranslator * _languageTranslator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _needsCaptionHandlerRefresh;
    NSURL * _overrideModelURL;
    unsigned long long  _overrideScaleMethod;
    bool  _prefersPixelBufferImageInput;
    AXMSceneDetectorNode * _sceneDetector;
}

@property (nonatomic, readonly) AXImageCaptionModel *effectiveCaptionModelInfo;
@property (nonatomic, readonly) NSURL *effectiveModelURL;
@property (nonatomic) unsigned long long genderStrategy;
@property (nonatomic, retain) NSURL *overrideModelURL;
@property (nonatomic) unsigned long long overrideScaleMethod;
@property (nonatomic) AXMSceneDetectorNode *sceneDetector;

+ (bool)isSupported;
+ (struct CGSize { double x1; double x2; })preferredModelInputSize;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (bool)_captionModelCloningIsNeeded;
- (id)_computeCaptionForPixelBuffer:(struct __CVBuffer { }*)arg1 orImage:(struct CGImage { }*)arg2 captionHandler:(struct CVNLPCaptionHandler { }*)arg3 metrics:(id)arg4;
- (void)_performWithLock:(id /* block */)arg1;
- (struct CVNLPCaptionHandler { }*)_withLock_captionHandlerCreateIfNeeded:(id)arg1;
- (id)_withLock_captionModelURLCloningAssetIfNeeded;
- (id)_withLock_cloneCaptionModelIfNeeded:(id)arg1;
- (id)_withLock_modelURLForOverrideURL:(id)arg1;
- (id)_withLock_valueForOverrideScaleMethod;
- (void)dealloc;
- (id)effectiveCaptionModelInfo;
- (id)effectiveModelURL;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (unsigned long long)genderStrategy;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (id)overrideModelURL;
- (unsigned long long)overrideScaleMethod;
- (bool)requiresVisionFramework;
- (id)sceneDetector;
- (void)setGenderStrategy:(unsigned long long)arg1;
- (void)setOverrideModelURL:(id)arg1;
- (void)setOverrideScaleMethod:(unsigned long long)arg1;
- (void)setSceneDetector:(id)arg1;

@end
