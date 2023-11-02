
@interface NSCollectionLayoutDimension : NSObject <NSCopying> {
    double  _dimension;
    long long  _semantic;
}

@property (getter=_isStretchableEstimated, nonatomic, readonly) bool _stretchableEstimated;
@property (nonatomic) double dimension;
@property (nonatomic, readonly) bool isAbsolute;
@property (nonatomic, readonly) bool isEstimated;
@property (nonatomic, readonly) bool isFractionalHeight;
@property (nonatomic, readonly) bool isFractionalWidth;
@property (nonatomic, readonly) bool isUniformAcrossSiblings;
@property (nonatomic) long long semantic;

+ (id)_dimensionWithDimension:(double)arg1 semantic:(long long)arg2;
+ (id)_stretchableEstimated:(double)arg1;
+ (id)absoluteDimension:(double)arg1;
+ (id)estimatedDimension:(double)arg1;
+ (id)fractionalHeightDimension:(double)arg1;
+ (id)fractionalWidthDimension:(double)arg1;
+ (id)uniformAcrossSiblingsWithEstimate:(double)arg1;

- (bool)_isStretchableEstimated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dimension;
- (id)initWithDimension:(double)arg1 semantic:(long long)arg2;
- (bool)isAbsolute;
- (bool)isEqual:(id)arg1;
- (bool)isEstimated;
- (bool)isFractionalHeight;
- (bool)isFractionalWidth;
- (bool)isUniformAcrossSiblings;
- (long long)semantic;
- (void)setDimension:(double)arg1;
- (void)setSemantic:(long long)arg1;

@end
