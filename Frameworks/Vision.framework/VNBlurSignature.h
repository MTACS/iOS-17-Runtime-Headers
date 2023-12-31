
@interface VNBlurSignature : NSObject {
    void * _signatureData;
}

+ (id)computeBlurSignatureForGrayscaleImage:(struct __CVBuffer { }*)arg1 error:(id*)arg2;

- (void)dealloc;
- (void*)getSignatureData;
- (id)initWithSignatureData:(void*)arg1;
- (void)setSignatureData:(void*)arg1;

@end
