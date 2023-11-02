
@interface PTFaceAttributesNetwork : NSObject {
    <MLComputeDeviceProtocol> * _aneDevice;
    VNSequenceRequestHandler * _handler;
    VNSession * _session;
}

- (void).cxx_destruct;
- (id)createRequest;
- (id)faceLandmarksInPixelBuffer:(struct __CVBuffer { }*)arg1 faceRects:(id)arg2 orientation:(unsigned int)arg3;
- (id)init;

@end
