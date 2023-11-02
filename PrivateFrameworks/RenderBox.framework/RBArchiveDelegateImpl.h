
@interface RBArchiveDelegateImpl : NSObject <RBDecoderDelegate, RBEncoderDelegate> {
    unsigned int  _flags;
    struct objc_ptr<NSData *> { 
        NSData *_p; 
    }  _metadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RBEncoderSet *encoderSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGFont { }*)decodedCGFontWithData:(id)arg1 error:(id*)arg2;
- (void*)decodedImageContentsWithData:(id)arg1 type:(int*)arg2 error:(id*)arg3;
- (void)decodedMetadata:(id)arg1;
- (id)decodedShaderLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)encodedCGFontData:(struct CGFont { }*)arg1 error:(id*)arg2;
- (id)encodedFontSubsetData:(id)arg1 cgFont:(struct CGFont { }*)arg2 error:(id*)arg3;
- (id)encodedImageData:(struct { int x1; void *x2; })arg1 error:(id*)arg2;
- (id)encodedMetadata;
- (id)encodedShaderLibraryData:(id)arg1 error:(id*)arg2;
- (id)initWithFlags:(unsigned int)arg1;
- (bool)shouldEncodeFontSubset:(struct CGFont { }*)arg1;

@end
