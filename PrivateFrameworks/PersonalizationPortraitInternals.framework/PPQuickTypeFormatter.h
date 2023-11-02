
@interface PPQuickTypeFormatter : NSObject {
    NSCache * _appNameCache;
    NSDateFormatter * _birthdayFormatter;
    _PASCachedResult * _cachedContactsLabeledValuesLprojs;
    NSDateFormatter * _chineseBirthdayFormatter;
    NSDateComponentsFormatter * _dateComponentFormatter;
    NSCache * _dateFormatCache;
    NSString * _desiredLanguage;
    NSString * _fallbackLanguage;
    NSLengthFormatter * _lengthFormatter;
    NSLocale * _locale;
    _PASLock * _localizedStringsCache;
    NSDateFormatter * _longEventFormatter;
    NSMeasurementFormatter * _measurementDecimalFormatter;
    NSMeasurementFormatter * _measurementUnscaledFormatter;
    NSMeasurementFormatter * _measurementWholeFormatter;
    PPQuickTypeQuery * _query;
    NSDateFormatter * _shortEventFormatter;
    NSDateFormatter * _yearlessChineseBirthdayFormatter;
}

+ (id)formatterWithQuery:(id)arg1;
+ (id)new;

- (void).cxx_destruct;
- (id)attributionPattern;
- (id)destinationLabel;
- (id)distanceLabel;
- (id)etaLabel;
- (id)formattedBirthday:(id)arg1;
- (id)formattedEventTime:(id)arg1;
- (id)formattedLengthInMeters:(double)arg1;
- (id)formattedMeasurement:(id)arg1 allowDecimals:(bool)arg2 scaleUnits:(bool)arg3;
- (id)formattedPostalAddress:(id)arg1;
- (id)formattedStringForLabel:(id)arg1;
- (id)formattedStringsForLabels:(id)arg1;
- (id)formattedTimeInterval:(double)arg1;
- (id)init;
- (id)inviteLinkLabel;
- (id)localizedAppNameForBundleIdentifier:(id)arg1;
- (id)makeBirthdayFormatter;
- (id)makeChineseBirthdayFormatter;
- (id)makeDateComponentFormatter;
- (id)makeLengthFormatter;
- (id)makeLongEventFormatter;
- (id)makeMeasurementDecimalFormatter;
- (id)makeMeasurementUnscaledFormatter;
- (id)makeMeasurementWholeFormatter;
- (id)makeShortEventFormatter;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)navigationItemLabelForTypeLabel:(id)arg1 destination:(id)arg2;
- (id)streetLabel;
- (id)timeLeftLabel;

@end
