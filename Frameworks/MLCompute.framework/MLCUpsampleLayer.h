
@interface MLCUpsampleLayer : MLCLayer {
    bool  _alignsCorners;
    int  _sampleMode;
    NSArray * _shape;
    unsigned long long  _upsampleHeight;
    unsigned long long  _upsampleWidth;
}

@property (nonatomic, readonly) bool alignsCorners;
@property (nonatomic, readonly) int sampleMode;
@property (nonatomic, readonly, copy) NSArray *shape;
@property (nonatomic, readonly) unsigned long long upsampleHeight;
@property (nonatomic, readonly) unsigned long long upsampleWidth;

+ (id)layerWithShape:(id)arg1;
+ (id)layerWithShape:(id)arg1 sampleMode:(int)arg2 alignsCorners:(bool)arg3;

- (void).cxx_destruct;
- (bool)alignsCorners;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)initWithShape:(id)arg1 sampleMode:(int)arg2 alignCorners:(bool)arg3;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (int)sampleMode;
- (id)shape;
- (id)summarizedDOTDescription;
- (unsigned long long)upsampleHeight;
- (unsigned long long)upsampleWidth;

@end
