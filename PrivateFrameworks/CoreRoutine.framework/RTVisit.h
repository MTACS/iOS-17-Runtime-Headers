
@interface RTVisit : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    long long  _dataPointCount;
    NSDate * _date;
    NSDate * _entry;
    NSDate * _exit;
    RTLocation * _location;
    RTPlaceInference * _placeInference;
    long long  _source;
    long long  _type;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) long long dataPointCount;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSDate *entry;
@property (nonatomic, readonly, copy) NSDate *exit;
@property (nonatomic, readonly, copy) RTLocation *location;
@property (nonatomic, retain) RTPlaceInference *placeInference;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) long long type;

+ (id)stringFromVisitIncidentType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (bool)validVisitSources:(id)arg1;
+ (long long)visitIncidentTypeFromString:(id)arg1;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataPointCount;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entry;
- (id)exit;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 type:(long long)arg2 location:(id)arg3 entry:(id)arg4 exit:(id)arg5 dataPointCount:(long long)arg6 confidence:(double)arg7 placeInference:(id)arg8;
- (id)initWithDate:(id)arg1 type:(long long)arg2 location:(id)arg3 entry:(id)arg4 exit:(id)arg5 dataPointCount:(long long)arg6 confidence:(double)arg7 placeInference:(id)arg8 source:(long long)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVisit:(id)arg1;
- (id)location;
- (id)placeInference;
- (void)setPlaceInference:(id)arg1;
- (long long)source;
- (long long)type;

@end
