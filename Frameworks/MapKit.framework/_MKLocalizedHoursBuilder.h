
@interface _MKLocalizedHoursBuilder : NSObject {
    NSDate * _compareDate;
    unsigned long long  _geoMapItemOpeningHourOptions;
    UIColor * _hoursStateLabelColor;
    bool  _isClosedTodayAllDay;
    bool  _isClosingSoon;
    bool  _isCurrentlyClosed;
    bool  _isCurrentlyOpen;
    bool  _isOpenTodayAllDay;
    bool  _isOpeningSoon;
    bool  _isPermanentlyClosed;
    bool  _isTemporarilyClosed;
    unsigned long long  _localizedHoursStringOptions;
    NSString * _localizedOpenState;
    NSString * _localizedOperatingHours;
    GEOBusinessHours * _operatingHours;
    long long  _state;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSArray *AMPMSymbols;
@property (nonatomic, retain) NSDate *compareDate;
@property (nonatomic) unsigned long long geoMapItemOpeningHourOptions;
@property (nonatomic, readonly) UIColor *hoursStateLabelColor;
@property (nonatomic) unsigned long long localizedHoursStringOptions;
@property (nonatomic, readonly) NSString *localizedOpenState;
@property (nonatomic, readonly) NSString *localizedOperatingHours;
@property (nonatomic, retain) GEOBusinessHours *operatingHours;
@property (nonatomic, readonly) long long state;
@property (nonatomic, retain) NSTimeZone *timeZone;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)hoursDelimeter;
+ (id)localizedHoursDayRangeString:(id)arg1;
+ (id)localizedHoursStringNormalHours;
+ (id)localizedHoursStringSpecialHours;
+ (id)testGetDayOfWeekFormatterFull;
+ (id)testGetDayOfWeekFormatterShort;
+ (id)testGetHoursFormatter;
+ (id)testGetMonthAndDayFormatter;

- (void).cxx_destruct;
- (id)AMPMSymbols;
- (void)_commonInit;
- (id)_formattedStringForHourRangesWithStartAndEndDates:(id)arg1 timeZone:(id)arg2;
- (void)_resetLocalizedBuilder:(bool)arg1;
- (void)_resetLocalizedStrings:(bool)arg1;
- (id)_updateLocalizedOperatingHoursString:(unsigned long long)arg1;
- (void)_updateLocalizedString;
- (void)calculateWidthsForData:(id)arg1;
- (id)compareDate;
- (id)concatenateStrings:(id)arg1 joinedByString:(id)arg2;
- (id)formatData:(id)arg1;
- (unsigned long long)geoMapItemOpeningHourOptions;
- (id)hoursStateLabelColor;
- (id)initWithBusinessHours:(id)arg1 timeZone:(id)arg2 localizedHoursStringOptions:(unsigned long long)arg3;
- (id)initWithMapItem:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (id)initWithMapItemForMessageForBusiness:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (unsigned long long)localizedHoursStringOptions;
- (id)localizedOpenState;
- (id)localizedOperatingHours;
- (id)operatingHours;
- (void)setCompareDate:(id)arg1;
- (void)setGeoMapItemOpeningHourOptions:(unsigned long long)arg1;
- (void)setLocalizedHoursStringOptions:(unsigned long long)arg1;
- (void)setOperatingHours:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (long long)state;
- (id)timeZone;
- (void)updateHoursLabelColor;
- (void)updateHoursLabelColorWithDefaultLabelColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (id)ribbonSummaryForOpeningState;

@end
