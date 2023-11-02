
@interface PKFloatRange : NSObject <NSCopying> {
    double  _lowerBound;
    double  _upperBound;
}

@property (nonatomic, readonly) double lowerBound;
@property (nonatomic, readonly) double upperBound;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLowerBound:(double)arg1 upperBound:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)lowerBound;
- (double)upperBound;

@end
