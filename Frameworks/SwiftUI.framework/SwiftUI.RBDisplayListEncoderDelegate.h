
@interface SwiftUI.RBDisplayListEncoderDelegate : NSObject <RBEncoderDelegate> {
    void encoder;
}

@property (nonatomic, readonly) RBEncoderSet *encoderSet;

- (void).cxx_destruct;
- (id)encodedCGFontData:(struct CGFont { }*)arg1 error:(id*)arg2;
- (id)encodedFontData:(id)arg1 cgFont:(struct CGFont { }*)arg2 error:(id*)arg3;
- (id)encodedImageData:(struct { int x1; void *x2; })arg1 error:(id*)arg2;
- (id)encoderSet;
- (id)init;
- (bool)shouldEncodeFontSubset:(struct CGFont { }*)arg1;

@end
