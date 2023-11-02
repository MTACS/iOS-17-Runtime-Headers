
@interface WK_RTCVideoEncoderH265 : NSObject <RTCVideoEncoder> {
    struct unique_ptr<webrtc::BitrateAdjuster, std::default_delete<webrtc::BitrateAdjuster>> { 
        struct __compressed_pair<webrtc::BitrateAdjuster *, std::default_delete<webrtc::BitrateAdjuster>> { 
            struct BitrateAdjuster {} *__value_; 
        } __ptr_; 
    }  _bitrateAdjuster;
    id /* block */  _callback;
    WK_RTCVideoCodecInfo * _codecInfo;
    struct OpaqueVTCompressionSession { } * _compressionSession;
    id /* block */  _descriptionCallback;
    unsigned int  _encoderBitrateBps;
    int  _height;
    unsigned long long  _mode;
    bool  _needsToSendDescription;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _nv12ScaleBuffer;
    struct __CFString { } * _profile;
    unsigned int  _targetBitrateBps;
    bool  _useAnnexB;
    int  _width;
    int  framesLeft;
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
- (void)frameWasEncoded:(int)arg1 flags:(unsigned int)arg2 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 width:(int)arg4 height:(int)arg5 renderTimeMs:(long long)arg6 timestamp:(unsigned int)arg7 rotation:(long long)arg8;
- (id)implementationName;
- (id)initWithCodecInfo:(id)arg1;
- (long long)releaseEncoder;
- (int)resetCompressionSession;
- (id)scalingSettings;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setBitrateBps:(unsigned int)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setDescriptionCallback:(id /* block */)arg1;
- (void)setEncoderBitrateBps:(unsigned int)arg1;
- (void)setUseAnnexB:(bool)arg1;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;

@end
