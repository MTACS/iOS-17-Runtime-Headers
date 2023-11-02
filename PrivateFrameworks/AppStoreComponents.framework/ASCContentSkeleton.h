
@interface ASCContentSkeleton : NSObject <NSCopying> {
    double  _rawValue;
    long long  _type;
}

@property (nonatomic, readonly) double rawValue;
@property (nonatomic, readonly) long long type;

+ (id)absoluteSkeleton:(double)arg1;
+ (id)fractionalSkeleton:(double)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 rawValue:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)rawValue;
- (long long)type;
- (double)widthThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
