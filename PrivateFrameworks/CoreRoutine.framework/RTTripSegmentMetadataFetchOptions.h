
@interface RTTripSegmentMetadataFetchOptions : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    bool  _fetchFormOfWay;
    bool  _fetchLocationType;
    bool  _fetchPreferredNames;
    bool  _fetchRoadClass;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (readonly) bool fetchFormOfWay;
@property (readonly) bool fetchLocationType;
@property (readonly) bool fetchPreferredNames;
@property (readonly) bool fetchRoadClass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchFormOfWay;
- (bool)fetchLocationType;
- (bool)fetchPreferredNames;
- (bool)fetchRoadClass;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 fetchRoadClass:(bool)arg2 fetchFormOfWay:(bool)arg3 fetchLocationType:(bool)arg4 fetchPreferredNames:(bool)arg5;
- (id)initWithTripSegment:(id)arg1;
- (id)initWithTripSegment:(id)arg1 fetchRoadClass:(bool)arg2 fetchFormOfWay:(bool)arg3 fetchLocationType:(bool)arg4 fetchPreferredNames:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFetchOptions:(id)arg1;

@end
