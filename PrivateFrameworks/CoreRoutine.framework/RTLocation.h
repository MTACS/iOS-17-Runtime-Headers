
@interface RTLocation : NSObject <NSCopying, NSSecureCoding> {
    double  _altitude;
    NSDate * _date;
    double  _horizontalUncertainty;
    double  _latitude;
    double  _longitude;
    int  _referenceFrame;
    unsigned long long  _sourceAccuracy;
    double  _speed;
    double  _verticalUncertainty;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic) double horizontalUncertainty;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, readonly) int referenceFrame;
@property (nonatomic, readonly) unsigned long long sourceAccuracy;
@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) double uncertainty;
@property (nonatomic, readonly) double verticalUncertainty;

+ (id)sourceAccuracyToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)altitude;
- (id)coordinateToString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)horizontalUncertainty;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 altitude:(double)arg4 verticalUncertainty:(double)arg5 date:(id)arg6 referenceFrame:(int)arg7 speed:(double)arg8;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 altitude:(double)arg4 verticalUncertainty:(double)arg5 date:(id)arg6 referenceFrame:(int)arg7 speed:(double)arg8 sourceAccuracy:(unsigned long long)arg9;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 date:(id)arg4;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 date:(id)arg4 referenceFrame:(int)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLocation:(id)arg1;
- (double)latitude;
- (double)longitude;
- (id)outputToDictionary;
- (int)referenceFrame;
- (void)setHorizontalUncertainty:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setUncertainty:(double)arg1;
- (unsigned long long)sourceAccuracy;
- (double)speed;
- (double)uncertainty;
- (double)verticalUncertainty;

@end
