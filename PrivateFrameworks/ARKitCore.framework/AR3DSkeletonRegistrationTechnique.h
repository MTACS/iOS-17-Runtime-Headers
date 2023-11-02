
@interface AR3DSkeletonRegistrationTechnique : ARTechnique {
    ABPKCameraRegistration * _abpkRegistration;
    ABPKDepthBasedScaleEstimation * _abpkScaleEstimation;
    bool  _automaticSkeletonScaleEstimationEnabled;
    struct basic_ofstream<char, std::char_traits<char>> { 
        int (**_vptr$basic_ostream)(); 
        struct basic_filebuf<char, std::char_traits<char>> { 
            int (**_vptr$basic_streambuf)(); 
            struct locale { 
                struct __imp {} *__locale_; 
            } __loc_; 
            char *__binp_; 
            char *__ninp_; 
            char *__einp_; 
            char *__bout_; 
            char *__nout_; 
            char *__eout_; 
            char *__extbuf_; 
            char *__extbufnext_; 
            char *__extbufend_; 
            BOOL __extbuf_min_[8]; 
            unsigned long long __ebs_; 
            char *__intbuf_; 
            unsigned long long __ibs_; 
            struct __sFILE {} *__file_; 
            void *__cv_; 
            union { 
                BOOL __mbstate8[128]; 
                long long _mbstateL; 
            } __st_; 
            union { 
                BOOL __mbstate8[128]; 
                long long _mbstateL; 
            } __st_last_; 
            unsigned int __om_; 
            unsigned int __cm_; 
            bool __owns_eb_; 
            bool __owns_ib_; 
            bool __always_noconv_; 
        } __sb_; 
        int (**_vptr$ios_base)(); 
        unsigned int __fmtflags_; 
        long long __precision_; 
        long long __width_; 
        unsigned int __rdstate_; 
        unsigned int __exceptions_; 
        void *__rdbuf_; 
        void *__loc_; 
        int (**__fn_)(); 
        int *__index_; 
        unsigned long long __event_size_; 
        unsigned long long __event_cap_; 
        long long *__iarray_; 
        unsigned long long __iarray_size_; 
        unsigned long long __iarray_cap_; 
        void **__parray_; 
        unsigned long long __parray_size_; 
        unsigned long long __parray_cap_; 
        void *__tie_; 
        int __fill_; 
    }  _btrf;
    struct basic_ofstream<char, std::char_traits<char>> { 
        int (**_vptr$basic_ostream)(); 
        struct basic_filebuf<char, std::char_traits<char>> { 
            int (**_vptr$basic_streambuf)(); 
            struct locale { 
                struct __imp {} *__locale_; 
            } __loc_; 
            char *__binp_; 
            char *__ninp_; 
            char *__einp_; 
            char *__bout_; 
            char *__nout_; 
            char *__eout_; 
            char *__extbuf_; 
            char *__extbufnext_; 
            char *__extbufend_; 
            BOOL __extbuf_min_[8]; 
            unsigned long long __ebs_; 
            char *__intbuf_; 
            unsigned long long __ibs_; 
            struct __sFILE {} *__file_; 
            void *__cv_; 
            union { 
                BOOL __mbstate8[128]; 
                long long _mbstateL; 
            } __st_; 
            union { 
                BOOL __mbstate8[128]; 
                long long _mbstateL; 
            } __st_last_; 
            unsigned int __om_; 
            unsigned int __cm_; 
            bool __owns_eb_; 
            bool __owns_ib_; 
            bool __always_noconv_; 
        } __sb_; 
        int (**_vptr$ios_base)(); 
        unsigned int __fmtflags_; 
        long long __precision_; 
        long long __width_; 
        unsigned int __rdstate_; 
        unsigned int __exceptions_; 
        void *__rdbuf_; 
        void *__loc_; 
        int (**__fn_)(); 
        int *__index_; 
        unsigned long long __event_size_; 
        unsigned long long __event_cap_; 
        long long *__iarray_; 
        unsigned long long __iarray_size_; 
        unsigned long long __iarray_cap_; 
        void **__parray_; 
        unsigned long long __parray_size_; 
        unsigned long long __parray_cap_; 
        void *__tie_; 
        int __fill_; 
    }  _btrts;
    ARWorldTrackingPoseData * _currentWorldTrackingPose;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
            struct __rep { 
                union { 
                    struct __long { 
                        char *__data_; 
                        unsigned long long __size_; 
                        unsigned int __cap_ : 63; 
                        unsigned int __is_long_ : 1; 
                    } __l; 
                    struct __short { 
                        BOOL __data_[23]; 
                        unsigned char __padding_[0]; 
                        unsigned int __size_ : 7; 
                        unsigned int __is_long_ : 1; 
                    } __s; 
                    struct __raw { 
                        unsigned long long __words[3]; 
                    } __r; 
                } ; 
            } __value_; 
        } __r_; 
    }  _dumps_dir;
    float  _estimatedScale;
    bool  _is_tracking;
    struct array<arkit::btr::RegistrationData, 5UL> { 
        struct RegistrationData { 
            struct Matrix<float, 2U, 16U, false> { 
                float m_data[32]; 
            } image_points; 
            struct Matrix<float, 3U, 16U, false> { 
                float m_data[48]; 
            } lifted_points; 
            struct Matrix<float, 3U, 3U, false> { 
                float m_data[9]; 
            } intrinsics; 
            struct SE3GroupStorage<float, cva::Matrix<float, 4, 4>> { 
                float m_data[16]; 
            } cam_from_obj; 
            struct SE3GroupStorage<float, cva::Matrix<float, 4, 4>> { 
                float m_data[16]; 
            } cam_from_vio; 
            double timestamp_obj; 
            double timestamp_vio; 
        } __elems_[5]; 
    }  _last_btr_poses;
    int  _last_btr_poses_idx;
    double  _last_detection_timestamp;
    struct shared_ptr<arkit::btr::ScaleCorrection> { 
        struct ScaleCorrection {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _scaler;
}

@property (nonatomic) bool automaticSkeletonScaleEstimationEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_estimateCameraPoseFromMatchingImageData:(id)arg1 to3DData:(id)arg2 worldTrackingPose:(id)arg3 pCameraFromBody:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg4 depthData:(id)arg5 pScaleOut:(float*)arg6;
- (float)_estimateScaleFromDepthData:(id)arg1 imageData:(id)arg2 cameraPoseFromBody:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 skeleton:(id)arg4;
- (float)_estimateScaleFromJasperCloud:(id)arg1 cameraPoseFromBody:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 skeleton:(id)arg3;
- (bool)automaticSkeletonScaleEstimationEnabled;
- (bool)isEqual:(id)arg1;
- (void)prepare:(bool)arg1;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (bool)reconfigurableFrom:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)resetState;
- (void)setAutomaticSkeletonScaleEstimationEnabled:(bool)arg1;

@end
