
@interface BlastDoorImage : NSObject {
    void image;
}

@property (nonatomic, readonly) struct CGImage { }*cgImage;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;

- (void).cxx_destruct;
- (struct CGImage { }*)cgImage;
- (id)dataUsingEncoding:(unsigned long long)arg1 error:(id*)arg2;
- (id)init;
- (struct __CVBuffer { }*)pixelBuffer;
- (bool)writeToURL:(id)arg1 usingEncoding:(unsigned long long)arg2 error:(id*)arg3;

@end
