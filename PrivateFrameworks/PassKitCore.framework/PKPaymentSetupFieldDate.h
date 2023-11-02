
@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText {
    NSCalendar * _calendar;
    NSDate * _defaultDate;
    NSDateFormatter * _displayDateFormatter;
    NSLocale * _locale;
    bool  _showsDay;
    bool  _showsMonth;
    bool  _showsYear;
    NSString * _submissionFormat;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, copy) NSDate *currentValue;
@property (nonatomic, copy) NSDate *defaultDate;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) bool showsDay;
@property (nonatomic) bool showsMonth;
@property (nonatomic) bool showsYear;
@property (nonatomic, copy) NSString *submissionFormat;

- (void).cxx_destruct;
- (void)_commonUpdate;
- (id)_defaultValueAsDateForCurrentLocale;
- (id)_submissionStringForValue:(id)arg1;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentValue;
- (id)defaultDate;
- (id)displayString;
- (unsigned long long)fieldType;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)locale;
- (void)setCalendar:(id)arg1;
- (void)setCurrentValue:(id)arg1;
- (void)setDefaultDate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setShowsDay:(bool)arg1;
- (void)setShowsMonth:(bool)arg1;
- (void)setShowsYear:(bool)arg1;
- (void)setSubmissionFormat:(id)arg1;
- (bool)showsDay;
- (bool)showsMonth;
- (bool)showsYear;
- (id)submissionFormat;
- (bool)submissionStringMeetsAllRequirements;
- (void)updateWithAttribute:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;

@end
