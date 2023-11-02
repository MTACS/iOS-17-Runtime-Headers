
@interface PKPassShareTimeSchedule : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _daysOfMonth;
    NSArray * _daysOfWeek;
    unsigned long long  _frequency;
    NSArray * _hoursOfDay;
    unsigned long long  _interval;
}

@property (nonatomic, retain) NSArray *daysOfMonth;
@property (nonatomic, retain) NSArray *daysOfWeek;
@property (nonatomic) unsigned long long frequency;
@property (nonatomic, retain) NSArray *hoursOfDay;
@property (nonatomic) unsigned long long interval;

+ (id)emptySchedule;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysOfMonth;
- (id)daysOfWeek;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frequency;
- (unsigned long long)hash;
- (id)hoursOfDay;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)intersect:(id)arg1;
- (unsigned long long)interval;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassShareTimeSchedule:(id)arg1;
- (void)setDaysOfMonth:(id)arg1;
- (void)setDaysOfWeek:(id)arg1;
- (void)setFrequency:(unsigned long long)arg1;
- (void)setHoursOfDay:(id)arg1;
- (void)setInterval:(unsigned long long)arg1;

@end
