
@interface RTLocationsForTripSegmentFetchOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _batchSize;
    CLLocation * _boundingBoxLocation;
    NSDateInterval * _dateInterval;
    unsigned long long  _offset;
    long long  _preferredDownsamplingLevel;
}

@property (nonatomic, readonly) unsigned long long batchSize;
@property (nonatomic, copy) CLLocation *boundingBoxLocation;
@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic) long long preferredDownsamplingLevel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)boundingBoxLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 preferredDownsamplingLevel:(long long)arg2 boundingBoxLocation:(id)arg3 batchSize:(unsigned long long)arg4 offset:(unsigned long long)arg5;
- (id)initWithTripSegment:(id)arg1;
- (id)initWithTripSegment:(id)arg1 preferredDownsamplingLevel:(long long)arg2;
- (id)initWithTripSegment:(id)arg1 preferredDownsamplingLevel:(long long)arg2 batchSize:(unsigned long long)arg3 offset:(unsigned long long)arg4;
- (id)initWithTripSegment:(id)arg1 preferredDownsamplingLevel:(long long)arg2 boundingBoxLocation:(id)arg3 batchSize:(unsigned long long)arg4 offset:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFetchOptions:(id)arg1;
- (unsigned long long)offset;
- (long long)preferredDownsamplingLevel;
- (void)setBoundingBoxLocation:(id)arg1;
- (void)setPreferredDownsamplingLevel:(long long)arg1;

@end
