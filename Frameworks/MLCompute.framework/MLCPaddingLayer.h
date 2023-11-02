
@interface MLCPaddingLayer : MLCLayer <NSCopying> {
    float  _constantValue;
    unsigned long long  _paddingBottom;
    unsigned long long  _paddingLeft;
    unsigned long long  _paddingRight;
    unsigned long long  _paddingTop;
    int  _paddingType;
}

@property (nonatomic, readonly) float constantValue;
@property (nonatomic, readonly) unsigned long long paddingBottom;
@property (nonatomic, readonly) unsigned long long paddingLeft;
@property (nonatomic, readonly) unsigned long long paddingRight;
@property (nonatomic, readonly) unsigned long long paddingTop;
@property (nonatomic, readonly) int paddingType;

+ (id)layerWithConstantPadding:(id)arg1 constantValue:(float)arg2;
+ (id)layerWithReflectionPadding:(id)arg1;
+ (id)layerWithSymmetricPadding:(id)arg1;
+ (id)layerWithZeroPadding:(id)arg1;
+ (bool)supportsDataType:(int)arg1 onDevice:(id)arg2;

- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (float)constantValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithPaddingType:(int)arg1 paddingSizes:(id)arg2 constantValue:(float)arg3;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (unsigned long long)paddingBottom;
- (unsigned long long)paddingLeft;
- (unsigned long long)paddingRight;
- (unsigned long long)paddingTop;
- (int)paddingType;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;

@end
