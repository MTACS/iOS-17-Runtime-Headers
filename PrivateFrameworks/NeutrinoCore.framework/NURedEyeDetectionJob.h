
@interface NURedEyeDetectionJob : NUImageDataJob {
    CIImage * _fullSizeImage;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (bool)prepare:(out id*)arg1;
- (id)requestOptions;

@end
