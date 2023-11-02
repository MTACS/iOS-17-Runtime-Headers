
@interface PLSearchIndexDateFormatter : NSObject {
    NSDateFormatter * _dateFormatter;
    PLDateRangeFormatter * _dateRangeFormatter;
    bool  _didSetupLocaleAndFormats;
    NSString * _displayFormat;
    NSString * _monthFormat;
    NSArray * _monthSymbols;
    NSString * _parseFormat;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _yearFormat;
}

+ (id)monthFormatForLocale:(id)arg1;
+ (id)yearFormatForLocale:(id)arg1;

- (void).cxx_destruct;
- (id)_arrangedMonthSymbols;
- (id)_inqNewLocalizedStringFromDate:(id)arg1;
- (void)_inqSetupDateFormatter;
- (void)_inqUpdateDateFormat:(id)arg1;
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;
- (id)localizedMonthStringsFromDate:(id)arg1;
- (id)localizedSeasonNameFromDate:(id)arg1;
- (id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(bool)arg2;
- (id)newLocalizedStringFromDate:(id)arg1;
- (id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2;

@end
