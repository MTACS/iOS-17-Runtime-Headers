
@interface UICollectionLayoutSectionOrthogonalScrollingProperties : NSObject <NSCopying> {
    long long  _bounce;
    double  _decelerationRate;
}

@property (nonatomic) long long bounce;
@property (nonatomic) double decelerationRate;

- (id)_descriptionProperties;
- (long long)bounce;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decelerationRate;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setBounce:(long long)arg1;
- (void)setDecelerationRate:(double)arg1;

@end
