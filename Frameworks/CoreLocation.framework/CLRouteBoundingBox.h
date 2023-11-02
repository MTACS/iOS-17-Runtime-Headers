
@interface CLRouteBoundingBox : NSObject <NSCopying, NSSecureCoding> {
    double  _maxLatitude;
    double  _maxLongitude;
    double  _minLatitude;
    double  _minLongitude;
    int  _nColumns;
    int  _nRows;
}

@property (nonatomic, readonly) double maxLatitude;
@property (nonatomic, readonly) double maxLongitude;
@property (nonatomic, readonly) double minLatitude;
@property (nonatomic, readonly) double minLongitude;
@property (nonatomic, readonly) int nColumns;
@property (nonatomic, readonly) int nRows;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinLatitude:(double)arg1 maxLatitude:(double)arg2 minLongitude:(double)arg3 maxLongitude:(double)arg4 nRows:(int)arg5 nColumns:(int)arg6;
- (double)maxLatitude;
- (double)maxLongitude;
- (double)minLatitude;
- (double)minLongitude;
- (int)nColumns;
- (int)nRows;

@end
