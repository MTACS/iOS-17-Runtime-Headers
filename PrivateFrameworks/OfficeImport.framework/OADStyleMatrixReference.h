
@interface OADStyleMatrixReference : NSObject <NSCopying> {
    OADColor * mColor;
    unsigned long long  mMatrixIndex;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;
- (unsigned long long)matrixIndex;
- (void)setColor:(id)arg1;
- (void)setMatrixIndex:(unsigned long long)arg1;

@end
