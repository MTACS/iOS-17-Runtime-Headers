
@interface PADAVAssetReader : NSObject

- (id)_frameFromVideo:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 size:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
- (id)_imageDataFromVideo:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 size:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
- (struct opaqueCMSampleBuffer { }*)_newSampleBufferFromVideo:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 size:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
- (id)framesFromVideoURL:(id)arg1 timestamps:(id)arg2 error:(id*)arg3;
- (id)framesFromVideoURL:(id)arg1 timestamps:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
- (id)imagesFromVideoURL:(id)arg1 timestamps:(id)arg2 error:(id*)arg3;
- (id)imagesFromVideoURL:(id)arg1 timestamps:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;

@end
