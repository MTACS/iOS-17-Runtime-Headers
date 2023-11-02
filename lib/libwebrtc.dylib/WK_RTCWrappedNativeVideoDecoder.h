
@interface WK_RTCWrappedNativeVideoDecoder : NSObject <RTCVideoDecoder> {
    struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> { 
        struct __compressed_pair<webrtc::VideoDecoder *, std::default_delete<webrtc::VideoDecoder>> { 
            struct VideoDecoder {} *__value_; 
        } __ptr_; 
    }  _wrappedDecoder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)decode:(id)arg1 missingFrames:(bool)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4;
- (id)implementationName;
- (id)initWithNativeDecoder:(struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> { struct __compressed_pair<webrtc::VideoDecoder *, std::default_delete<webrtc::VideoDecoder>> { struct VideoDecoder {} *x_1_1_1; } x1; })arg1;
- (long long)releaseDecoder;
- (struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> { struct __compressed_pair<webrtc::VideoDecoder *, std::default_delete<webrtc::VideoDecoder>> { struct VideoDecoder {} *x_1_1_1; } x1; })releaseWrappedDecoder;
- (void)setCallback:(id /* block */)arg1;
- (long long)startDecodeWithNumberOfCores:(int)arg1;

@end
