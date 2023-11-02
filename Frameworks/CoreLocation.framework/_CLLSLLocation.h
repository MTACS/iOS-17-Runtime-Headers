
@interface _CLLSLLocation : NSObject <NSCopying, NSSecureCoding> {
    double  _altitude;
    _CLLSLLocationCoordinate * _coordinate;
    double  _timestamp;
}

@property (nonatomic) double altitude;
@property (nonatomic, copy) _CLLSLLocationCoordinate *coordinate;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (double)altitude;
- (id)coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(id)arg1;
- (id)initWithCoordinate:(id)arg1 altitude:(double)arg2 timetamp:(double)arg3;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 timetamp:(double)arg4;
- (void)setAltitude:(double)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
