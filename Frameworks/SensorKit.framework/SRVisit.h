
@interface SRVisit : NSObject <NSSecureCoding, SRSampleExporting, SRSampling> {
    NSDateInterval * _arrivalDateInterval;
    NSDateInterval * _departureDateInterval;
    double  _distanceFromHome;
    NSUUID * _identifier;
    long long  _locationCategory;
}

@property (readonly) NSDateInterval *arrivalDateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDateInterval *departureDateInterval;
@property (readonly, copy) NSString *description;
@property (readonly) double distanceFromHome;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly, copy) NSString *label;
@property (readonly) long long locationCategory;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)arrivalDateInterval;
- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)departureDateInterval;
- (id)description;
- (double)distanceFromHome;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistanceFromHome:(double)arg1 arrive:(id)arg2 depart:(id)arg3 category:(long long)arg4 uuid:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)label;
- (long long)locationCategory;
- (id)sr_dictionaryRepresentation;

@end
