
@interface TAInterVisitMetricPerDeviceSettings : NSObject <NSSecureCoding> {
    unsigned long long  _sampledObservationLocationsBufferSize;
    double  _sampledObservationLocationsInterval;
}

@property (nonatomic) unsigned long long sampledObservationLocationsBufferSize;
@property (nonatomic) double sampledObservationLocationsInterval;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampledObservationLocationsInterval:(double)arg1 sampledObservationLocationsBufferSize:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)sampledObservationLocationsBufferSize;
- (double)sampledObservationLocationsInterval;
- (void)setSampledObservationLocationsBufferSize:(unsigned long long)arg1;
- (void)setSampledObservationLocationsInterval:(double)arg1;

@end
