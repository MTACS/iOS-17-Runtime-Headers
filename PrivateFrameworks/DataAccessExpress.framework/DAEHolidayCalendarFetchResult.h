
@interface DAEHolidayCalendarFetchResult : NSObject <NSSecureCoding> {
    NSString * _URLString;
    NSString * _calendarDescription;
    NSString * _language;
    NSString * _region;
}

@property (nonatomic, retain) NSString *URLString;
@property (nonatomic, retain) NSString *calendarDescription;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *region;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLString;
- (id)calendarDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)language;
- (id)region;
- (void)setCalendarDescription:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setURLString:(id)arg1;

@end
