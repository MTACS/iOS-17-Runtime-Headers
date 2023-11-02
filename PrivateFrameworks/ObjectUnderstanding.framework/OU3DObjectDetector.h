
@interface OU3DObjectDetector : NSObject {
    bool  _ObjectRepresentationEnabled;
    bool  _RgbRefinementEnabled;
    <OUPointCloud> * _frustumPointCloud;
    struct vector<OUBox3d, std::allocator<OUBox3d>> { 
        struct OUBox3d {} *__begin_; 
        struct OUBox3d {} *__end_; 
        struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { 
            struct OUBox3d {} *__value_; 
        } __end_cap_; 
    }  acc_box3ds_;
    NSArray * allObjects;
    OUPointCloud * arframePointCloud_;
    _OUFrame * arframe_;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  cameraPose_;
    <OUCamera> * camera_;
    struct vector<OUBox3d, std::allocator<OUBox3d>> { 
        struct OUBox3d {} *__begin_; 
        struct OUBox3d {} *__end_; 
        struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { 
            struct OUBox3d {} *__value_; 
        } __end_cap_; 
    }  cur_box3ds_;
    OUInternalInfoDumper * debug_dumper_;
    float  depthConfidenceThreshold;
    struct { int x1; float *x2; id *x3; void *x4; void *x5; void *x6; void *x7; } * det_params;
    float  floor_height_;
    float  frustumFOV;
    unsigned long long  hist_boxes_cnt_;
    struct vector<int, std::allocator<int>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::allocator<int>> { 
            int *__value_; 
        } __end_cap_; 
    }  hist_kept_box_ids_;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  hist_nms_iou_mat_;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  hist_ori_iou_mat_;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  inv_ucr;
    bool  isOnline_;
    NSDictionary * keyframesPointCloud_;
    struct unique_ptr<ou3dod::OU3DLShapeObjectMerger, std::default_delete<ou3dod::OU3DLShapeObjectMerger>> { 
        struct __compressed_pair<ou3dod::OU3DLShapeObjectMerger *, std::default_delete<ou3dod::OU3DLShapeObjectMerger>> { 
            struct OU3DLShapeObjectMerger {} *__value_; 
        } __ptr_; 
    }  l_shape_merger_;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  latestPose;
    double  latestTimestamp;
    double  maxDetectionInterval;
    struct vector<OUBox3d, std::allocator<OUBox3d>> { 
        struct OUBox3d {} *__begin_; 
        struct OUBox3d {} *__end_; 
        struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { 
            struct OUBox3d {} *__value_; 
        } __end_cap_; 
    }  merged_box3ds_;
    OU3DObjectMerger * merger;
    double  minDetectionInterval;
    int  num_cur_key_frames_;
    int  num_pre_key_frames_;
    struct map<NSString *, short, CompareNSString, std::allocator<std::pair<NSString *const, short>>> { 
        struct __tree<std::__value_type<NSString *, short>, std::__map_value_compare<NSString *, std::__value_type<NSString *, short>, CompareNSString>, std::allocator<std::__value_type<NSString *, short>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, short>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, short>, CompareNSString>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  obj_type_to_index;
    OUObjectAsset * objectAsset_;
    OUObjectCompleteness * object_completeness_;
    struct unique_ptr<OU3DObjectRGBSizeRefiner, std::default_delete<OU3DObjectRGBSizeRefiner>> { 
        struct __compressed_pair<OU3DObjectRGBSizeRefiner *, std::default_delete<OU3DObjectRGBSizeRefiner>> { 
            struct OU3DObjectRGBSizeRefiner {} *__value_; 
        } __ptr_; 
    }  object_rgb_size_refiner_;
    struct unique_ptr<ou3dod::OU3DODInterface, std::default_delete<ou3dod::OU3DODInterface>> { 
        struct __compressed_pair<ou3dod::OU3DODInterface *, std::default_delete<ou3dod::OU3DODInterface>> { 
            struct OU3DODInterface {} *__value_; 
        } __ptr_; 
    }  offline_detector_;
    struct OU3DKitchenObjectMerger { 
        struct vector<OU3DKitchenObject, std::allocator<OU3DKitchenObject>> { 
            struct OU3DKitchenObject {} *__begin_; 
            struct OU3DKitchenObject {} *__end_; 
            struct __compressed_pair<OU3DKitchenObject *, std::allocator<OU3DKitchenObject>> { 
                struct OU3DKitchenObject {} *__value_; 
            } __end_cap_; 
        } old_cabinets_; 
        struct vector<OU3DKitchenObject, std::allocator<OU3DKitchenObject>> { 
            struct OU3DKitchenObject {} *__begin_; 
            struct OU3DKitchenObject {} *__end_; 
            struct __compressed_pair<OU3DKitchenObject *, std::allocator<OU3DKitchenObject>> { 
                struct OU3DKitchenObject {} *__value_; 
            } __end_cap_; 
        } new_cabinets_; 
        struct vector<OU3DKitchenObject, std::allocator<OU3DKitchenObject>> { 
            struct OU3DKitchenObject {} *__begin_; 
            struct OU3DKitchenObject {} *__end_; 
            struct __compressed_pair<OU3DKitchenObject *, std::allocator<OU3DKitchenObject>> { 
                struct OU3DKitchenObject {} *__value_; 
            } __end_cap_; 
        } other_objects_; 
        struct vector<OU3DKitchenObject, std::allocator<OU3DKitchenObject>> { 
            struct OU3DKitchenObject {} *__begin_; 
            struct OU3DKitchenObject {} *__end_; 
            struct __compressed_pair<OU3DKitchenObject *, std::allocator<OU3DKitchenObject>> { 
                struct OU3DKitchenObject {} *__value_; 
            } __end_cap_; 
        } fused_cabinets_; 
        float ground_plane_height_; 
        float ceil_plane_height_; 
    }  offline_merger_;
    short  offline_model_;
    struct unique_ptr<ou3dod::OU3DODInterface, std::default_delete<ou3dod::OU3DODInterface>> { 
        struct __compressed_pair<ou3dod::OU3DODInterface *, std::default_delete<ou3dod::OU3DODInterface>> { 
            struct OU3DODInterface {} *__value_; 
        } __ptr_; 
    }  online_detector_;
    short  online_model_;
    struct OUPointCloudCpp { 
        struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {} rgb; 
    }  online_model_input_;
    struct unique_ptr<ou3dor::OU3DObjectRepresentation, std::default_delete<ou3dor::OU3DObjectRepresentation>> { 
        struct __compressed_pair<ou3dor::OU3DObjectRepresentation *, std::default_delete<ou3dor::OU3DObjectRepresentation>> { 
            struct OU3DObjectRepresentation {} *__value_; 
        } __ptr_; 
    }  ou3dor_;
    NSArray * pre_rgb_size_refined_;
    NSArray * pre_size_refined_;
    int  pred_boxes_cnt_;
    NSSet * rgb_refine_supported_types_;
    float  rotationalSensitivity;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  sceneUnderstandingPose_;
    struct vector<int, std::allocator<int>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::allocator<int>> { 
            int *__value_; 
        } __end_cap_; 
    }  size_refined_box_ids_;
    float  tanRgbFOV_;
    float  translationalSensitivity;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  ucr;
    OUPointCloud * worldPointCloud;
    unsigned long long  worldPointCloudCapacity;
}

@property (nonatomic, readonly) bool ObjectRepresentationEnabled;
@property (nonatomic, readonly) bool RgbRefinementEnabled;
@property (nonatomic, readonly) NSArray *allObjects;
@property (nonatomic) float depthConfidenceThreshold;
@property (nonatomic) float frustumFOV;
@property (nonatomic, readonly) <OUPointCloud> *frustumPointCloud;
@property (nonatomic) double maxDetectionInterval;
@property (nonatomic) double minDetectionInterval;
@property (nonatomic, readonly) short offline_model_;
@property (nonatomic, readonly) short online_model_;
@property (nonatomic) float rotationalSensitivity;
@property (nonatomic, readonly) NSSet *supportedObjectTypes;
@property (nonatomic) float translationalSensitivity;
@property (nonatomic, readonly) <OUPointCloud> *worldPointCloud;
@property (nonatomic) unsigned long long worldPointCloudCapacity;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CopyObjectEmbedding:(id)arg1 fromOldObjects:(id)arg2;
- (void)CopyRefineHistory:(id)arg1 fromOldObjects:(id)arg2;
- (id)FindNeedRefineBoxUUID:(id)arg1 withOldObjects:(id)arg2;
- (void)InitializeRGBRefinement:(id)arg1;
- (bool)IsValidLShapePair:(const void*)arg1 l_shape_pair:(const void*)arg2;
- (id)MergeLShapeObjects:(id)arg1 isLastFrame:(bool)arg2;
- (bool)ObjectRepresentationEnabled;
- (void)OfflineModelInitialization;
- (void)ResestObjectSizeHistoryIfSizeChange:(id)arg1 withOldObjects:(id)arg2;
- (bool)RgbRefinementEnabled;
- (void)ValidateRawDetections:(void*)arg1;
- (id)allObjects;
- (void)assignIdentifiersForNewObjects:(id)arg1 withOldObjects:(id)arg2;
- (void)assignParentId:(id)arg1 isOffline:(bool)arg2;
- (void)buildFrustumPointCloudFromWorldPointCloud;
- (void)clear;
- (id)combineBoxTypeAndEmbeddingByUUID:(id)arg1;
- (float)depthConfidenceThreshold;
- (float)frustumFOV;
- (id)frustumPointCloud;
- (id)generateOfflineObjects:(id)arg1 onlineObjects:(id)arg2;
- (id)getObjectAsset;
- (id)init:(bool)arg1;
- (void)initialization;
- (double)maxDetectionInterval;
- (double)minDetectionInterval;
- (void)modelProcess;
- (short)offline_model_;
- (short)online_model_;
- (void)postprocess;
- (bool)preprocess;
- (void)regulateObjectCornerOrders:(id)arg1 withOldObjects:(id)arg2;
- (id)regulateObjectSize:(id)arg1 withOldObjects:(id)arg2;
- (void)reviseObjectsUponParentId:(id)arg1;
- (float)rotationalSensitivity;
- (id)run;
- (void)runAssignParentID:(id)arg1;
- (void)runRegulateObjectCornerOrders:(id)arg1 withOldObjects:(id)arg2;
- (void)runReviseObjectsUponParentId:(id)arg1;
- (void)runValidateRawDetections:(void*)arg1;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })runwithinClassNMS:(const void*)arg1 ids:(void*)arg2 ori_iou:(void*)arg3 nms_iou:(void*)arg4;
- (void)setDepthConfidenceThreshold:(float)arg1;
- (void)setFrustumFOV:(float)arg1;
- (void)setMaxDetectionInterval:(double)arg1;
- (void)setMinDetectionInterval:(double)arg1;
- (void)setObjectRepresentationEnabled:(bool)arg1;
- (void)setRgbRefinementEnabled:(bool)arg1;
- (void)setRotationalSensitivity:(float)arg1;
- (void)setTranslationalSensitivity:(float)arg1;
- (void)setWorldPointCloudCapacity:(unsigned long long)arg1;
- (id)supportedObjectTypes;
- (float)translationalSensitivity;
- (id)updateWithAccumulatePC:(id)arg1 currentCameraPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)updateWithAccumulatePC:(id)arg1 ouframe:(id)arg2;
- (id)worldPointCloud;
- (unsigned long long)worldPointCloudCapacity;

@end
