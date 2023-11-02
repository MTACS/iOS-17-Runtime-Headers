
@interface OUPipelineOnline : NSObject {
    NSMutableDictionary * accumulatedPointCloud_;
    NSArray * allObjects;
    OUPointCloud * arframePointCloud_;
    _OUFrame * arframe_;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  cameraPose_;
    <OUCamera> * camera_;
    float  depth_confidence_threshold_;
    bool  enable_3dor_;
    struct unique_ptr<utils::OUFrameWriter, std::default_delete<utils::OUFrameWriter>> { 
        struct __compressed_pair<utils::OUFrameWriter *, std::default_delete<utils::OUFrameWriter>> { 
            struct OUFrameWriter {} *__value_; 
        } __ptr_; 
    }  frame_writer_;
    int  num_cur_key_frames_;
    int  num_pre_key_frames_;
    OUObjectAsset * objectAsset_;
    OU3DObjectDetector * ou3dod_;
    struct unique_ptr<ou3dor::OU3DObjectRepresentation, std::default_delete<ou3dor::OU3DObjectRepresentation>> { 
        struct __compressed_pair<ou3dor::OU3DObjectRepresentation *, std::default_delete<ou3dor::OU3DObjectRepresentation>> { 
            struct OU3DObjectRepresentation {} *__value_; 
        } __ptr_; 
    }  ou3dor_;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  sceneUnderstandingPose_;
    bool  write_debug_output_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CommonInit;
- (void)clear;
- (id)getObjectAsset;
- (void)getPointCloudFromOUFrame:(id)arg1 scenUnderstandingPose:(struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)init;
- (id)initWithConfig:(id)arg1;
- (bool)updateCameraWithValid:(id)arg1 ouframe:(id)arg2;
- (void)updateObjectAsset;
- (id)updatePipelineWithKeyframes:(id)arg1 currentCameraPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)updatePipelineWithKeyframes:(id)arg1 ouframe:(id)arg2;
- (bool)updateWorldPCWithKeyframes:(id)arg1;

@end
