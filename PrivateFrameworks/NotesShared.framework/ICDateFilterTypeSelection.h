
@interface ICDateFilterTypeSelection : ICFilterTypeSelection <NSCopying> {
    NSDate * _primaryDate;
    NSNumber * _relativeRangeAmount;
    NSString * _relativeRangeDateSummary;
    unsigned long long  _relativeRangeSelectionType;
    double  _relativeRangeTimeInterval;
    NSDate * _secondaryDate;
    unsigned long long  _selectionType;
}

@property (nonatomic, retain) NSDate *primaryDate;
@property (nonatomic, readonly) NSString *primaryDateSummary;
@property (nonatomic, retain) NSNumber *relativeRangeAmount;
@property (nonatomic, readonly) NSString *relativeRangeAmountAndTimeInterval;
@property (nonatomic, readonly) NSString *relativeRangeDateSummary;
@property (nonatomic, readonly) NSString *relativeRangeLabel;
@property (nonatomic) unsigned long long relativeRangeSelectionType;
@property (nonatomic, readonly) double relativeRangeTimeInterval;
@property (nonatomic, readonly) NSDictionary *relativeRangeTimeIntervalOptions;
@property (nonatomic, retain) NSDate *secondaryDate;
@property (nonatomic, readonly) NSString *secondaryDateSummary;
@property (nonatomic) unsigned long long selectionType;

+ (id)keyPathsForValuesAffectingIsEmpty;
+ (id)keyPathsForValuesAffectingIsValid;
+ (id)relativeRangeStringComponentsForSelectionType:(unsigned long long)arg1 number:(id)arg2;
+ (id)relativeRangeSummaryForSelectionType:(unsigned long long)arg1 amount:(unsigned long long)arg2;
+ (id)relativeRangeSummaryForSelectionType:(unsigned long long)arg1 number:(id)arg2;
+ (id)shortDateFormatter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (long long)filterType;
- (unsigned long long)hash;
- (id)initWithSelectionType:(unsigned long long)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDateFilterSelection:(id)arg1;
- (bool)isValid;
- (bool)localeIsArabic;
- (id)primaryDate;
- (id)primaryDateSummary;
- (id)rawFilterValue;
- (id)relativeDateSummary;
- (id)relativeRangeAmount;
- (id)relativeRangeAmountAndTimeInterval;
- (id)relativeRangeAmountString;
- (id)relativeRangeDateSummary;
- (id)relativeRangeLabel;
- (unsigned long long)relativeRangeSelectionType;
- (double)relativeRangeTimeInterval;
- (id)relativeRangeTimeIntervalOptions;
- (id)relativeRangeTimeIntervalString;
- (id)secondaryDate;
- (id)secondaryDateSummary;
- (unsigned long long)selectionType;
- (void)setPrimaryDate:(id)arg1;
- (void)setRelativeRangeAmount:(id)arg1;
- (void)setRelativeRangeSelectionType:(unsigned long long)arg1;
- (void)setRelativeRangeTimeInterval:(double)arg1;
- (void)setSecondaryDate:(id)arg1;
- (void)setSelectionType:(unsigned long long)arg1;
- (void)setSpecificDateRangeFrom:(id)arg1 to:(id)arg2;
- (void)updateDatesForCurrentSelectionType;

@end
