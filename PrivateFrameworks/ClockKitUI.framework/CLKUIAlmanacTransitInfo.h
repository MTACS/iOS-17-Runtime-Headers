
@interface CLKUIAlmanacTransitInfo : NSObject <NSSecureCoding> {
    long long  _constantSun;
    NSDate * _day;
    struct { 
        double latitude; 
        double longitude; 
    }  _location;
    NSDate * _rise;
    NSDate * _set;
    NSDate * _solarMidnight;
    NSDate * _solarNoon;
    NSDate * _tomorrow;
}

@property (nonatomic) long long constantSun;
@property (nonatomic, retain) NSDate *day;
@property (nonatomic) struct { double x1; double x2; } location;
@property (nonatomic, retain) NSDate *rise;
@property (nonatomic, retain) NSDate *set;
@property (nonatomic, retain) NSDate *solarMidnight;
@property (nonatomic, retain) NSDate *solarNoon;
@property (nonatomic, retain) NSDate *tomorrow;

+ (bool)supportsSecureCoding;
+ (id)transitInfoForDate:(id)arg1;
+ (id)transitInfoForDate:(id)arg1 city:(id)arg2;
+ (id)transitInfoForDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;
+ (id)transitInfoForDate:(id)arg1 location:(struct { double x1; double x2; })arg2;
+ (id)transitInfoForDate:(id)arg1 location:(struct { double x1; double x2; })arg2 sunAltitude:(double)arg3;

- (void).cxx_destruct;
- (id)_dateOrNil:(double)arg1;
- (long long)constantSun;
- (id)day;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 city:(id)arg2;
- (id)initWithDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;
- (id)initWithDate:(id)arg1 location:(struct { double x1; double x2; })arg2;
- (id)initWithDate:(id)arg1 location:(struct { double x1; double x2; })arg2 sunAltitude:(double)arg3;
- (bool)isDateWithinTransitInfo:(id)arg1;
- (struct { double x1; double x2; })location;
- (id)rise;
- (id)set;
- (void)setConstantSun:(long long)arg1;
- (void)setDay:(id)arg1;
- (void)setLocation:(struct { double x1; double x2; })arg1;
- (void)setRise:(id)arg1;
- (void)setSet:(id)arg1;
- (void)setSolarMidnight:(id)arg1;
- (void)setSolarNoon:(id)arg1;
- (void)setTomorrow:(id)arg1;
- (id)solarMidnight;
- (id)solarNoon;
- (id)tomorrow;

@end
