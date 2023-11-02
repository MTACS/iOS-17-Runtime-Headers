
@interface IRNearbyDeviceDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _idsIdentifier;
    NSDate * _measurementDate;
    NSString * _mediaRemoteIdentifier;
    NSString * _proximityType;
    double  _range;
}

@property (nonatomic, readonly) NSString *idsIdentifier;
@property (nonatomic, readonly) NSDate *measurementDate;
@property (nonatomic, readonly) NSString *mediaRemoteIdentifier;
@property (nonatomic, readonly) NSString *proximityType;
@property (nonatomic, readonly) double range;

+ (id)miLoNearbyDeviceDOWithRange:(double)arg1 idsIdentifier:(id)arg2 mediaRemoteIdentifier:(id)arg3 proximityType:(id)arg4 measurementDate:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementIdsIdentifier:(id)arg1;
- (id)copyWithReplacementMeasurementDate:(id)arg1;
- (id)copyWithReplacementMediaRemoteIdentifier:(id)arg1;
- (id)copyWithReplacementProximityType:(id)arg1;
- (id)copyWithReplacementRange:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exportAsDictionary;
- (unsigned long long)hash;
- (id)idsIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(double)arg1 idsIdentifier:(id)arg2 mediaRemoteIdentifier:(id)arg3 proximityType:(id)arg4 measurementDate:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMiLoNearbyDeviceDO:(id)arg1;
- (id)measurementDate;
- (id)mediaRemoteIdentifier;
- (id)proximityType;
- (double)range;

@end
