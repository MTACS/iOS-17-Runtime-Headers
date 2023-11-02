
@interface GDKTSQueryParams : NSObject <NSCopying, NSSecureCoding> {
    GDEntityIdentifier * _destinationId;
    NSNumber * _distanceMaxInMeters;
    NSNumber * _distanceMinInMeters;
    NSNumber * _durationMaxInSeconds;
    NSNumber * _durationMinInSeconds;
    NSNumber * _elevationGainMaxInMeters;
    NSNumber * _elevationGainMinInMeters;
    NSDate * _endTime;
    long long  _inclusionType;
    GDEntityIdentifier * _originId;
    NSString * _roadName;
    NSString * _roadType;
    NSDate * _startTime;
}

@property (nonatomic, readonly, copy) GDEntityIdentifier *destinationId;
@property (nonatomic, readonly) NSNumber *distanceMaxInMeters;
@property (nonatomic, readonly) NSNumber *distanceMinInMeters;
@property (nonatomic, readonly) NSNumber *durationMaxInSeconds;
@property (nonatomic, readonly) NSNumber *durationMinInSeconds;
@property (nonatomic, readonly) NSNumber *elevationGainMaxInMeters;
@property (nonatomic, readonly) NSNumber *elevationGainMinInMeters;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, readonly) long long inclusionType;
@property (nonatomic, readonly, copy) GDEntityIdentifier *originId;
@property (nonatomic, readonly, copy) NSString *roadName;
@property (nonatomic, readonly, copy) NSString *roadType;
@property (nonatomic, readonly) NSDate *startTime;

+ (long long)roadTypeForString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationId;
- (id)distanceMaxInMeters;
- (id)distanceMinInMeters;
- (id)durationMaxInSeconds;
- (id)durationMinInSeconds;
- (id)elevationGainMaxInMeters;
- (id)elevationGainMinInMeters;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (long long)inclusionType;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2 inclusionType:(long long)arg3 distanceMinInMeters:(id)arg4 distanceMaxInMeters:(id)arg5 elevationGainMinInMeters:(id)arg6 elevationGainMaxInMeters:(id)arg7 durationMinInSeconds:(id)arg8 durationMaxInSeconds:(id)arg9 roadType:(id)arg10 roadName:(id)arg11 originId:(id)arg12 destinationId:(id)arg13;
- (id)originId;
- (id)roadName;
- (id)roadType;
- (id)startTime;

@end
