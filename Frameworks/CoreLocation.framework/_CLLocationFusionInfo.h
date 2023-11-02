
@interface _CLLocationFusionInfo : NSObject <NSCopying, NSSecureCoding> {
    double  _altitude;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    bool  _coordinateFused;
    bool  _coordinateFusedWithVL;
    double  _course;
    double  _courseAccuracy;
    double  _horizontalAccuracy;
    int  _referenceFrame;
    double  _verticalAccuracy;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (getter=isCoordinateFused, nonatomic, readonly) bool coordinateFused;
@property (getter=isCoordinateFusedWithVL, nonatomic, readonly) bool coordinateFusedWithVL;
@property (nonatomic, readonly) double course;
@property (nonatomic, readonly) double courseAccuracy;
@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic, readonly) int referenceFrame;
@property (nonatomic, readonly) double verticalAccuracy;

+ (bool)supportsSecureCoding;

- (double)altitude;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (double)courseAccuracy;
- (void)encodeWithCoder:(id)arg1;
- (double)horizontalAccuracy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinateFused:(bool)arg1 coordinateFusedWithVL:(bool)arg2 coordinate:(struct { double x1; double x2; })arg3 horizontalAccuracy:(double)arg4 referenceFrame:(int)arg5 altitude:(double)arg6 verticalAccuracy:(double)arg7 course:(double)arg8 courseAccuracy:(double)arg9;
- (bool)isCoordinateFused;
- (bool)isCoordinateFusedWithVL;
- (int)referenceFrame;
- (double)verticalAccuracy;

@end
