
@interface TACLVisit : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _arrivalDate;
    unsigned long long  _confidence;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSDate * _departureDate;
    NSDate * _detectionDate;
    double  _horizontalAccuracy;
}

@property (nonatomic, readonly, copy) NSDate *arrivalDate;
@property (nonatomic, readonly) unsigned long long confidence;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSDate *departureDate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *detectionDate;
@property (nonatomic, readonly) bool hasArrivalDate;
@property (nonatomic, readonly) bool hasDepartureDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic, readonly) bool isTemporalOrderSensical;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrivalDate;
- (unsigned long long)confidence;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)departureDate;
- (id)description;
- (id)descriptionDictionary;
- (id)detectionDate;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (bool)hasArrivalDate;
- (bool)hasDepartureDate;
- (double)horizontalAccuracy;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5 confidence:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isTemporalOrderSensical;

@end
