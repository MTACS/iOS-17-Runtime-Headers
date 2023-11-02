
@interface ARSceneReconstructionHandler : NSObject {
    <ARSceneReconstructionDelegate> * _delegate;
    bool  _occupancyMappingEnabled;
    ARSceneReconstructionOptions * _options;
    struct __CVPixelBufferPool { } * _postProcessedDepthConfidencePool;
    struct CV3DReconSession { } * _reconstructionSession;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _reconstructionSessionLock;
    unsigned long long  _sceneReconstruction;
    bool  _sessionActivated;
    struct CV3DSLAMSession { } * _slamSessionHandle;
    struct vector<std::shared_ptr<const CV3DSLAMStateContext>, std::allocator<std::shared_ptr<const CV3DSLAMStateContext>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<const CV3DSLAMStateContext> *, std::allocator<std::shared_ptr<const CV3DSLAMStateContext>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _slamStateBufferBack;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _slamStateBufferBackLock;
    struct vector<std::shared_ptr<const CV3DSLAMStateContext>, std::allocator<std::shared_ptr<const CV3DSLAMStateContext>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<const CV3DSLAMStateContext> *, std::allocator<std::shared_ptr<const CV3DSLAMStateContext>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _slamStateBufferFront;
    struct optional<unsigned long long> { 
        union { 
            BOOL __null_state_; 
            unsigned long long __val_; 
        } ; 
        bool __engaged_; 
    }  _slamStateCbID;
}

@property (nonatomic) <ARSceneReconstructionDelegate> *delegate;
@property (nonatomic, readonly) ARSceneReconstructionOptions *options;
@property (nonatomic, readonly) unsigned long long sceneReconstruction;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_canReconfigureExistingSessionForSceneReconstruction:(unsigned long long)arg1 options:(id)arg2;
- (bool)_configureMeshingConfiguration:(struct CV3DReconMeshingConfiguration { }*)arg1 error:(id*)arg2;
- (void)_didReceiveKeyframeListUpdateCallbackWithKeyframeList:(struct CV3DReconKeyframeList { }*)arg1 timestamp:(double)arg2 error:(struct __CFError { }*)arg3;
- (void)_didReceiveMeshListUpdateCallbackWithMeshList:(struct CV3DReconMeshList { }*)arg1 timestamp:(double)arg2 error:(struct __CFError { }*)arg3;
- (bool)_reconfigureSession:(struct CV3DReconSession { }*)arg1 error:(id*)arg2;
- (bool)_recreateReconstructionSessionWithError:(id*)arg1;
- (void)_setupSLAMStateBuffering;
- (void)bufferSlamState:(struct CV3DSLAMStateContext { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleCFError:(struct __CFError { }*)arg1 withErrorMessage:(id)arg2;
- (void)handleCFError:(struct __CFError { }*)arg1 withErrorMessage:(id)arg2 failSession:(bool)arg3;
- (id)initWithSceneReconstruction:(unsigned long long)arg1 options:(id)arg2 slamSessionHandle:(struct CV3DSLAMSession { }*)arg3;
- (void)meshPlaneHarmonizationShouldEnable:(bool)arg1;
- (id)options;
- (void)pause;
- (struct __CVBuffer { }*)postProcessConfidenceBuffer:(struct __CVBuffer { }*)arg1 fromSegmentationData:(id)arg2;
- (void)processPlaneList:(struct CV3DPlaneDetectionPlaneList { }*)arg1;
- (void)pushDepth:(id)arg1 semanticSegmentation:(id)arg2 personSegmentation:(id)arg3 pose:(id)arg4;
- (bool)queryOccupancyWithPoints:(id)arg1 callback:(id /* block */)arg2;
- (void)reconfigureSceneReconstruction:(unsigned long long)arg1 options:(id)arg2;
- (void)reset;
- (unsigned long long)sceneReconstruction;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)swapSlamStateBuffers;

@end
