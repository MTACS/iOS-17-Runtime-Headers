
@interface _CLMicroLocationClusterIdAndClusterData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clusterIdentifier;
    double  _meanBLEReceivedSignalStrength;
    double  _meanUWBRange;
}

@property (nonatomic, readonly, copy) NSString *clusterIdentifier;
@property (nonatomic, readonly) double meanBLEReceivedSignalStrength;
@property (nonatomic, readonly) double meanUWBRange;

+ (bool)supportsSecureCoding;

- (id)clusterIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClusterIdentifier:(id)arg1 meanBleRssi:(double)arg2 meanUwbRange:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (double)meanBLEReceivedSignalStrength;
- (double)meanUWBRange;

@end
