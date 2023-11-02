
@interface MLCTensorDescriptor : NSObject <NSCopying> {
    NSArray * _batchSizePerSequenceStep;
    int  _dataType;
    unsigned long long  _fanIn;
    unsigned long long  _fanOut;
    NSArray * _sequenceLengths;
    NSArray * _shape;
    bool  _sortedSequences;
    NSArray * _stride;
    unsigned long long  _tensorAllocationSizeInBytes;
    bool  _variableLengthSequences;
}

@property (nonatomic, readonly, copy) NSArray *batchSizePerSequenceStep;
@property (nonatomic, readonly) int dataType;
@property (nonatomic, readonly) unsigned long long dimensionCount;
@property (nonatomic, readonly) unsigned long long fanIn;
@property (nonatomic, readonly) unsigned long long fanOut;
@property (nonatomic, readonly) bool isFloatingPoint;
@property (nonatomic, readonly, copy) NSArray *sequenceLengths;
@property (nonatomic, readonly, copy) NSArray *shape;
@property (nonatomic, readonly) bool sortedSequences;
@property (nonatomic, copy) NSArray *stride;
@property (nonatomic) unsigned long long tensorAllocationSizeInBytes;
@property (nonatomic, readonly) bool variableLengthSequences;

+ (id)convolutionBiasesDescriptorWithFeatureChannelCount:(unsigned long long)arg1 dataType:(int)arg2;
+ (id)convolutionWeightsDescriptorWithInputFeatureChannelCount:(unsigned long long)arg1 outputFeatureChannelCount:(unsigned long long)arg2 dataType:(int)arg3;
+ (id)convolutionWeightsDescriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 inputFeatureChannelCount:(unsigned long long)arg3 outputFeatureChannelCount:(unsigned long long)arg4 dataType:(int)arg5;
+ (id)descriptorWithShape:(id)arg1 dataType:(int)arg2;
+ (id)descriptorWithShape:(id)arg1 sequenceLengths:(id)arg2 sortedSequences:(bool)arg3 dataType:(int)arg4;
+ (id)descriptorWithShape:(id)arg1 stride:(id)arg2 dataType:(int)arg3;
+ (id)descriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannelCount:(unsigned long long)arg3 batchSize:(unsigned long long)arg4;
+ (id)descriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannelCount:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 dataType:(int)arg5;
+ (id)descriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 strideForWidth:(unsigned long long)arg5 strideForHeight:(unsigned long long)arg6 strideForBatch:(unsigned long long)arg7 dataType:(int)arg8;
+ (unsigned long long)elementByteCount:(int)arg1;
+ (unsigned long long)maxTensorDimensions;

- (void).cxx_destruct;
- (id)batchSizePerSequenceStep;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataType;
- (id)description;
- (unsigned long long)dimensionCount;
- (unsigned long long)elementByteCount;
- (unsigned long long)elementCount;
- (unsigned long long)fanIn;
- (unsigned long long)fanOut;
- (unsigned long long)hash;
- (id)initConvolutionWeightsDescriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 dataType:(int)arg5;
- (id)initNCHWTensorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 strideForWidth:(unsigned long long)arg5 strideForHeight:(unsigned long long)arg6 strideForChannel:(unsigned long long)arg7 strideForBatch:(unsigned long long)arg8 fanIn:(unsigned long long)arg9 fanOut:(unsigned long long)arg10 dataType:(int)arg11;
- (id)initTensorWithShape:(id)arg1 stride:(id)arg2 fanIn:(unsigned long long)arg3 fanOut:(unsigned long long)arg4 dataType:(int)arg5;
- (id)initTensorWithShape:(id)arg1 stride:(id)arg2 sequenceLengths:(id)arg3 sortedSequences:(bool)arg4 fanIn:(unsigned long long)arg5 fanOut:(unsigned long long)arg6 dataType:(int)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isFloatingPoint;
- (id)newShapeWithCount:(unsigned long long)arg1;
- (id)sequenceLengths;
- (void)setStride:(id)arg1;
- (void)setTensorAllocationSizeInBytes:(unsigned long long)arg1;
- (id)shape;
- (bool)sortedSequences;
- (id)stride;
- (unsigned long long)tensorAllocationSizeInBytes;
- (void)updateStride:(id)arg1 tensorAllocationSize:(unsigned long long)arg2;
- (bool)variableLengthSequences;

@end
