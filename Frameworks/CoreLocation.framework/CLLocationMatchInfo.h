
@interface CLLocationMatchInfo : NSObject <NSCopying, NSSecureCoding> {
    id  _internal;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } matchCoordinate;
@property (nonatomic, readonly) double matchCourse;
@property (nonatomic, readonly, copy) NSData *matchDataArray;
@property (nonatomic, readonly) int matchFormOfWay;
@property (nonatomic, readonly) long long matchQuality;
@property (nonatomic, readonly) int matchRoadClass;
@property (getter=isMatchShifted, nonatomic, readonly) bool matchShifted;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(bool)arg6;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(bool)arg6 matchDataArray:(id)arg7;
- (bool)isMatchShifted;
- (struct CLLocationCoordinate2D { double x1; double x2; })matchCoordinate;
- (double)matchCourse;
- (id)matchDataArray;
- (int)matchFormOfWay;
- (long long)matchQuality;
- (int)matchRoadClass;
- (id)shortDescription;

@end
