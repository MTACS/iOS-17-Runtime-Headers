
@interface CLSPublicEvent : NSObject <NSSecureCoding, PGPublicEventDescriptor> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _businessItemCoordinates;
    unsigned long long  _businessItemMuid;
    NSArray * _categories;
    long long  _expectedAttendance;
    NSDateInterval * _localDateInterval;
    double  _localEndTime;
    double  _localStartTime;
    unsigned long long  _muid;
    NSString * _name;
    NSArray * _performers;
    NSTimeZone * _timeZone;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } businessItemCoordinates;
@property (nonatomic) unsigned long long businessItemMuid;
@property (nonatomic, retain) NSArray *categories;
@property (nonatomic) long long expectedAttendance;
@property (nonatomic, readonly) bool hasExpectedAttendance;
@property (nonatomic, readonly) bool isEnriched;
@property (nonatomic, retain) NSDateInterval *localDateInterval;
@property (nonatomic) double localEndTime;
@property (nonatomic) double localStartTime;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSArray *performers;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSDateInterval *universalDateIntervalIncludingTime;

+ (id)supportedCategories;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_calculateUniversalDateFromLocalDate:(id)arg1 includingTimeZone:(id)arg2 localStartTime:(double)arg3;
- (struct CLLocationCoordinate2D { double x1; double x2; })businessItemCoordinates;
- (unsigned long long)businessItemMuid;
- (id)categories;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedAttendance;
- (bool)hasExpectedAttendance;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnriched;
- (id)localDateInterval;
- (double)localEndTime;
- (double)localStartTime;
- (unsigned long long)muid;
- (id)name;
- (id)performers;
- (void)setBusinessItemCoordinates:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setBusinessItemMuid:(unsigned long long)arg1;
- (void)setCategories:(id)arg1;
- (void)setExpectedAttendance:(long long)arg1;
- (void)setLocalDateInterval:(id)arg1;
- (void)setLocalEndTime:(double)arg1;
- (void)setLocalStartTime:(double)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setPerformers:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (id)universalDateIntervalIncludingTime;

@end
