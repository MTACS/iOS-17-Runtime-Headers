
@interface PXGFloatValuesColorLookupCube : PXGColorLookupCube {
    float * _colorValuesData;
    NSString * _identifier;
    unsigned long long  _length;
}

@property (nonatomic, readonly) float*colorValuesData;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long length;

+ (bool)_parseLUTData:(id)arg1 resultHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)blendWithCube:(id)arg1 factor:(float)arg2;
- (void)center;
- (float*)colorValuesData;
- (id)createTextureWithContext:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1 format:(long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 usedFormat:(out long long*)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 format:(long long)arg2 error:(id*)arg3;
- (id)initWithEdgeSize:(long long)arg1 colorValuesData:(const float*)arg2 length:(unsigned long long)arg3 identifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (bool)shouldCache;
- (void)smoothWithFactor:(float)arg1;
- (id)textureData;

@end
