
@protocol VGFaceDetectionDelegate <NSObject>

@required

- (void)faceDetection:(VGFaceDetection *)arg1 faceObservation:(VNFaceObservation *)arg2 pixelBuffer:(struct __CVBuffer { }*)arg3;
- (void)faceDetectionFailed:(VGFaceDetection *)arg1 reason:(unsigned long long)arg2;

@optional

- (void)faceDetection:(VGFaceDetection *)arg1 faceExpression:(unsigned long long)arg2;

@end
