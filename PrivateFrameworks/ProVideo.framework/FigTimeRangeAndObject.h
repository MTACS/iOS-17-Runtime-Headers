
@interface FigTimeRangeAndObject : FigTimeRangeObj <FigTimeRangeOperationCopying, NSSecureCoding> {
    id  _object;
}

+ (id)rangeAndObjectWithRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 andObject:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)durationObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 andObject:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFigTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 andObject:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)object;
- (id)representedToolObject;
- (id)startTimeObject;

@end
