
@interface NTKFaceSnapshotContext : NSObject <NSSecureCoding> {
    NSString * _buildVersion;
    NSCalendar * _calendar;
    NSDate * _date;
    NSNumber * _enhanceTextLegibilityEnabled;
    NSString * _locale;
    CLLocation * _location;
    NSString * _lunarCalendarLocaleID;
    NSString * _monogram;
    NSString * _tzVersion;
    NSNumber * _uses24hTime;
}

@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSNumber *enhanceTextLegibilityEnabled;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, copy) NSString *lunarCalendarLocaleID;
@property (nonatomic, copy) NSString *monogram;
@property (nonatomic, copy) NSString *tzVersion;
@property (nonatomic, retain) NSNumber *uses24hTime;

+ (id)currentContext;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_yearMonthDay;
- (id)buildVersion;
- (bool)buildVersionMatchesContext:(id)arg1;
- (id)calendar;
- (bool)calendarDateMatchesContext:(id)arg1;
- (id)date;
- (double)distanceInKilometersFromContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)enhanceTextLegibilityEnabled;
- (bool)enhanceTextLegibilityEnabledMatchesContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)locale;
- (bool)localeMatchesContext:(id)arg1;
- (id)location;
- (bool)locationSignificantlyDiffersFromContext:(id)arg1;
- (id)lunarCalendarLocaleID;
- (bool)lunarCalendarLocaleIDMatchesContext:(id)arg1;
- (id)monogram;
- (void)setBuildVersion:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEnhanceTextLegibilityEnabled:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLunarCalendarLocaleID:(id)arg1;
- (void)setMonogram:(id)arg1;
- (void)setTzVersion:(id)arg1;
- (void)setUses24hTime:(id)arg1;
- (bool)timeZoneMatchesContext:(id)arg1;
- (id)tzVersion;
- (id)uses24hTime;

@end
