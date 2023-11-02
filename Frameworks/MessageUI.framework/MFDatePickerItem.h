
@interface MFDatePickerItem : NSObject {
    long long  _datePickerComponentType;
    MFDatePickerItemIdentifier * _identifier;
    NSString * _selectedCityName;
    NSDate * _selectedDate;
    NSDate * _selectedTime;
    NSTimeZone * _selectedTimeZone;
    bool  _timeSwitchEnabled;
}

@property (nonatomic) long long datePickerComponentType;
@property (nonatomic, readonly) MFDatePickerItemIdentifier *identifier;
@property (nonatomic, retain) NSString *selectedCityName;
@property (nonatomic, retain) NSDate *selectedDate;
@property (nonatomic, retain) NSDate *selectedTime;
@property (nonatomic, retain) NSTimeZone *selectedTimeZone;
@property (nonatomic) bool timeSwitchEnabled;

- (void).cxx_destruct;
- (long long)datePickerComponentType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 selectedDate:(id)arg2 selectedTime:(id)arg3 selectedTimeZone:(id)arg4 selectedCityName:(id)arg5 datePickerComponentType:(long long)arg6;
- (id)initWithIdentifier:(id)arg1 selectedDate:(id)arg2 selectedTime:(id)arg3 selectedTimeZone:(id)arg4 selectedCityName:(id)arg5 datePickerComponentType:(long long)arg6 timeSwitchEnabled:(bool)arg7;
- (bool)isEqual:(id)arg1;
- (id)selectedCityName;
- (id)selectedDate;
- (id)selectedTime;
- (id)selectedTimeZone;
- (void)setDatePickerComponentType:(long long)arg1;
- (void)setSelectedCityName:(id)arg1;
- (void)setSelectedDate:(id)arg1;
- (void)setSelectedTime:(id)arg1;
- (void)setSelectedTimeZone:(id)arg1;
- (void)setTimeSwitchEnabled:(bool)arg1;
- (bool)timeSwitchEnabled;

@end
