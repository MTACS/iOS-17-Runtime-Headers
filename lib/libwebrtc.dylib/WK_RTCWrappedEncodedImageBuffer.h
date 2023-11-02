
@interface WK_RTCWrappedEncodedImageBuffer : NSObject {
    struct scoped_refptr<webrtc::EncodedImageBufferInterface> { 
        struct EncodedImageBufferInterface {} *ptr_; 
    }  _buffer;
}

@property (nonatomic) struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface {} *x1; } buffer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface {} *x1; })buffer;
- (id)initWithEncodedImageBuffer:(struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface {} *x1; })arg1;
- (void)setBuffer:(struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface {} *x1; })arg1;

@end
