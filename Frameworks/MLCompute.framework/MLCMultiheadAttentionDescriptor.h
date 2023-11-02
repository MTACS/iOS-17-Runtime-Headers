
@interface MLCMultiheadAttentionDescriptor : NSObject <NSCopying> {
    bool  _addsZeroAttention;
    float  _dropout;
    bool  _hasAttentionBiases;
    bool  _hasAttentionMask;
    bool  _hasBiases;
    bool  _hasKeyPaddingMask;
    unsigned long long  _headCount;
    unsigned long long  _keyDimension;
    unsigned long long  _modelDimension;
    unsigned long long  _valueDimension;
}

@property (nonatomic, readonly) bool addsZeroAttention;
@property (nonatomic, readonly) float dropout;
@property (nonatomic, readonly) bool hasAttentionBiases;
@property (nonatomic) bool hasAttentionMask;
@property (nonatomic, readonly) bool hasBiases;
@property (nonatomic) bool hasKeyPaddingMask;
@property (nonatomic, readonly) unsigned long long headCount;
@property (nonatomic, readonly) unsigned long long keyDimension;
@property (nonatomic, readonly) unsigned long long modelDimension;
@property (nonatomic, readonly) unsigned long long valueDimension;

+ (id)descriptorWithModelDimension:(unsigned long long)arg1 headCount:(unsigned long long)arg2;
+ (id)descriptorWithModelDimension:(unsigned long long)arg1 keyDimension:(unsigned long long)arg2 valueDimension:(unsigned long long)arg3 headCount:(unsigned long long)arg4 dropout:(float)arg5 hasBiases:(bool)arg6 hasAttentionBiases:(bool)arg7 addsZeroAttention:(bool)arg8;

- (bool)addsZeroAttention;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)dropout;
- (bool)hasAttentionBiases;
- (bool)hasAttentionMask;
- (bool)hasBiases;
- (bool)hasKeyPaddingMask;
- (unsigned long long)hash;
- (unsigned long long)headCount;
- (id)initWithModelDimension:(unsigned long long)arg1 keyDimension:(unsigned long long)arg2 valueDimension:(unsigned long long)arg3 headCount:(unsigned long long)arg4 dropout:(float)arg5 hasBias:(bool)arg6 hasAttentionBias:(bool)arg7 addsZeroAttention:(bool)arg8;
- (bool)isEqual:(id)arg1;
- (unsigned long long)keyDimension;
- (unsigned long long)modelDimension;
- (void)setHasAttentionMask:(bool)arg1;
- (void)setHasKeyPaddingMask:(bool)arg1;
- (unsigned long long)valueDimension;

@end
