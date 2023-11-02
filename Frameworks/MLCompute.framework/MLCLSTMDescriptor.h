
@interface MLCLSTMDescriptor : NSObject <NSCopying> {
    bool  _batchFirst;
    float  _dropout;
    unsigned long long  _hiddenSize;
    unsigned long long  _inputSize;
    bool  _isBidirectional;
    unsigned long long  _layerCount;
    unsigned long long  _resultMode;
    bool  _returnsSequences;
    bool  _usesBiases;
}

@property (nonatomic, readonly) bool batchFirst;
@property (nonatomic, readonly) float dropout;
@property (nonatomic, readonly) unsigned long long hiddenSize;
@property (nonatomic, readonly) unsigned long long inputSize;
@property (nonatomic, readonly) bool isBidirectional;
@property (nonatomic, readonly) unsigned long long layerCount;
@property (nonatomic, readonly) unsigned long long resultMode;
@property (nonatomic, readonly) bool returnsSequences;
@property (nonatomic, readonly) bool usesBiases;

+ (id)descriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3;
+ (id)descriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3 usesBiases:(bool)arg4 batchFirst:(bool)arg5 isBidirectional:(bool)arg6 dropout:(float)arg7;
+ (id)descriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3 usesBiases:(bool)arg4 batchFirst:(bool)arg5 isBidirectional:(bool)arg6 returnsSequences:(bool)arg7 dropout:(float)arg8;
+ (id)descriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3 usesBiases:(bool)arg4 batchFirst:(bool)arg5 isBidirectional:(bool)arg6 returnsSequences:(bool)arg7 dropout:(float)arg8 resultMode:(unsigned long long)arg9;
+ (id)descriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3 usesBiases:(bool)arg4 isBidirectional:(bool)arg5 dropout:(float)arg6;

- (bool)batchFirst;
- (bool)bias;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)dropout;
- (unsigned long long)hash;
- (unsigned long long)hiddenSize;
- (id)initWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3 usesBiases:(bool)arg4 batchFirst:(bool)arg5 isBidirectional:(bool)arg6 returnsSequences:(bool)arg7 dropout:(float)arg8 resultMode:(unsigned long long)arg9;
- (unsigned long long)inputSize;
- (bool)isBidirectional;
- (bool)isEqual:(id)arg1;
- (unsigned long long)layerCount;
- (unsigned long long)numberOfLayers;
- (unsigned long long)resultMode;
- (bool)returnsSequences;
- (bool)usesBiases;

@end
