
@interface WK_RTCVideoEncoderH264 : NSObject <RTCVideoEncoder> {
    struct unique_ptr<webrtc::BitrateAdjuster, std::default_delete<webrtc::BitrateAdjuster>> { 
        struct __compressed_pair<webrtc::BitrateAdjuster *, std::default_delete<webrtc::BitrateAdjuster>> { 
            struct BitrateAdjuster {} *__value_; 
        } __ptr_; 
    }  _bitrateAdjuster;
    id /* block */  _callback;
    WK_RTCVideoCodecInfo * _codecInfo;
    id /* block */  _descriptionCallback;
    bool  _disableEncoding;
    unsigned int  _encoderBitrateBps;
    unsigned int  _encoderFrameRate;
    unsigned int  _frameCount;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _frameScaleBuffer;
    struct H264BitstreamParser { 
        int (**_vptr$BitstreamParser)(); 
        struct optional<webrtc::SpsParser::SpsState> { 
            bool engaged_; 
            union { 
                struct SpsState { 
                    unsigned int width; 
                    unsigned int height; 
                    unsigned int delta_pic_order_always_zero_flag; 
                    unsigned int separate_colour_plane_flag; 
                    unsigned int frame_mbs_only_flag; 
                    unsigned int log2_max_frame_num; 
                    unsigned int log2_max_pic_order_cnt_lsb; 
                    unsigned int pic_order_cnt_type; 
                    unsigned int max_num_ref_frames; 
                    unsigned int vui_params_present; 
                    unsigned int id; 
                } data_; 
                struct dummy_type { 
                    struct empty_struct { } data[44]; 
                } dummy_; 
            } ; 
        } sps_; 
        struct optional<webrtc::PpsParser::PpsState> { 
            bool engaged_; 
            union { 
                struct PpsState { 
                    bool bottom_field_pic_order_in_frame_present_flag; 
                    bool weighted_pred_flag; 
                    bool entropy_coding_mode_flag; 
                    unsigned int weighted_bipred_idc; 
                    unsigned int redundant_pic_cnt_present_flag; 
                    int pic_init_qp_minus26; 
                    unsigned int id; 
                    unsigned int sps_id; 
                } data_; 
                struct dummy_type { 
                    struct empty_struct { } data[24]; 
                } dummy_; 
            } ; 
        } pps_; 
        struct optional<int> { 
            bool engaged_; 
            union { 
                int data_; 
                struct dummy_type { 
                    struct empty_struct { } data[4]; 
                } dummy_; 
            } ; 
        } last_slice_qp_delta_; 
    }  _h264BitstreamParser;
    int  _height;
    bool  _isBelowExpectedFrameRate;
    bool  _isH264LowLatencyEncoderEnabled;
    bool  _isKeyFrameRequired;
    bool  _isUsingSoftwareEncoder;
    long long  _lastFrameRateEstimationTime;
    unsigned int  _maxAllowedFrameRate;
    unsigned long long  _mode;
    bool  _needsToSendDescription;
    unsigned long long  _packetizationMode;
    struct optional<webrtc::H264ProfileLevelId> { 
        bool engaged_; 
        union { 
            struct H264ProfileLevelId { 
                int profile; 
                int level; 
            } data_; 
            struct dummy_type { 
                struct empty_struct { } data[8]; 
            } dummy_; 
        } ; 
    }  _profile_level_id;
    unsigned int  _targetBitrateBps;
    bool  _useAnnexB;
    bool  _useBaseline;
    bool  _useVCP;
    void * _vcpCompressionSession;
    struct OpaqueVTCompressionSession { } * _vtCompressionSession;
    int  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureCompressionSession;
- (void)dealloc;
- (void)destroyCompressionSession;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (void)flush;
- (void)frameWasEncoded:(int)arg1 flags:(unsigned int)arg2 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 codecSpecificInfo:(id)arg4 width:(int)arg5 height:(int)arg6 renderTimeMs:(long long)arg7 timestamp:(long long)arg8 duration:(unsigned long long)arg9 rotation:(long long)arg10 isKeyFrameRequired:(bool)arg11;
- (bool)hasCompressionSession;
- (id)implementationName;
- (id)initWithCodecInfo:(id)arg1;
- (unsigned int)pixelFormatOfFrame:(id)arg1;
- (long long)releaseEncoder;
- (bool)resetCompressionSessionIfNeededWithFrame:(id)arg1;
- (int)resetCompressionSessionWithPixelFormat:(unsigned int)arg1;
- (id)scalingSettings;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setBitrateBps:(unsigned int)arg1 frameRate:(unsigned int)arg2;
- (void)setCallback:(id /* block */)arg1;
- (void)setDescriptionCallback:(id /* block */)arg1;
- (void)setEncoderBitrateBps:(unsigned int)arg1 frameRate:(unsigned int)arg2;
- (void)setH264LowLatencyEncoderEnabled:(bool)arg1;
- (void)setUseAnnexB:(bool)arg1;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (void)updateBitRateAccordingActualFrameRate;

@end
