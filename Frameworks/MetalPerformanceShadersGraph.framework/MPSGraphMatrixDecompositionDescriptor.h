
@interface MPSGraphMatrixDecompositionDescriptor : MPSGraphObject <NSCopying> {
    unsigned int  _dataType;
    unsigned long long  _decompositionType;
}

@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned long long decompositionType;

+ (id)descriptorWithDecompositionType:(unsigned long long)arg1 dataType:(unsigned int)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataType;
- (unsigned long long)decompositionType;
- (void)setDataType:(unsigned int)arg1;
- (void)setDecompositionType:(unsigned long long)arg1;

@end
