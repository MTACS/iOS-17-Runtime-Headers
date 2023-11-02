
@interface _NUFaceDetectionResult : _NURenderResult <NUFaceDetectionResult> {
    NSArray * _faces;
    struct { 
        long long width; 
        long long height; 
    }  _imageSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *faces;
@property (readonly) unsigned long long hash;
@property struct { long long x1; long long x2; } imageSize;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)faces;
- (struct { long long x1; long long x2; })imageSize;
- (void)setFaces:(id)arg1;
- (void)setImageSize:(struct { long long x1; long long x2; })arg1;

@end
