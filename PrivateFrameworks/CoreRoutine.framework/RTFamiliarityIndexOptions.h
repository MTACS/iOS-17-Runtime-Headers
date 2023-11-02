
@interface RTFamiliarityIndexOptions : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    double  _distance;
    RTLocation * _referenceLocation;
    bool  _referenceLocationSummary;
    unsigned long long  _spatialGranularity;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) RTLocation *referenceLocation;
@property (nonatomic, readonly) bool referenceLocationSummary;
@property (nonatomic, readonly) unsigned long long spatialGranularity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 spatialGranularity:(unsigned long long)arg2;
- (id)initWithDateInterval:(id)arg1 spatialGranularity:(unsigned long long)arg2 referenceLocation:(id)arg3 referenceLocationSummary:(bool)arg4 distance:(double)arg5;
- (bool)isEqual:(id)arg1;
- (id)referenceLocation;
- (bool)referenceLocationSummary;
- (unsigned long long)spatialGranularity;

@end
