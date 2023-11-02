
@interface MUBusinessHoursConfiguration : NSObject {
    NSArray * _businessHours;
    NSString * _hoursName;
    bool  _isServiceHours;
    NSTimeZone * _placeTimeZone;
}

@property (nonatomic, readonly) NSArray *businessHours;
@property (nonatomic, copy) NSString *hoursName;
@property (nonatomic) bool isServiceHours;
@property (nonatomic, readonly) NSTimeZone *placeTimeZone;

- (void).cxx_destruct;
- (id)businessHours;
- (id)hoursName;
- (id)initWithBusinessHours:(id)arg1 timeZone:(id)arg2;
- (bool)isServiceHours;
- (id)placeTimeZone;
- (void)setHoursName:(id)arg1;
- (void)setIsServiceHours:(bool)arg1;

@end
