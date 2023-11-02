
@interface EKUISemiConstantCache : NSObject {
    UIImage * _inboxDisclosureImage;
    double  _minYearMonthHeaderFontSizeUsed;
    double  _weekAllDayBaselineForLargeFormatWeekView;
    double  _weekAllDayBaselineForSmallFormatWeekView;
    UIFont * _weekAllDayLabelFontCompact;
    UIFont * _weekAllDayLabelFontRegular;
    double  _weekAllDayOccurrenceHeight;
    UIFont * _weekAllDayTodayLabelFontCompact;
}

@property double minYearMonthHeaderFontSizeUsed;
@property double weekAllDayBaselineForLargeFormatWeekView;
@property double weekAllDayBaselineForSmallFormatWeekView;
@property (readonly) UIFont *weekAllDayLabelFontCompact;
@property (readonly) UIFont *weekAllDayLabelFontRegular;
@property double weekAllDayOccurrenceHeight;
@property (readonly) UIFont *weekAllDayTodayLabelFontCompact;
@property (readonly) UIFont *weekAllDayTodayLabelFontRegular;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_contentCategorySizeChanged:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_orientationChanged:(id)arg1;
- (long long)_participantStatusFromDetailAttendeesStatus:(long long)arg1;
- (id)inboxDisclosureImage;
- (id)init;
- (double)minYearMonthHeaderFontSizeUsed;
- (void)setMinYearMonthHeaderFontSizeUsed:(double)arg1;
- (void)setWeekAllDayBaselineForLargeFormatWeekView:(double)arg1;
- (void)setWeekAllDayBaselineForSmallFormatWeekView:(double)arg1;
- (void)setWeekAllDayOccurrenceHeight:(double)arg1;
- (id)statusGlyphForStatusType:(long long)arg1;
- (void)updateMetrics;
- (double)weekAllDayBaselineForLargeFormatWeekView;
- (double)weekAllDayBaselineForSmallFormatWeekView;
- (id)weekAllDayLabelFontCompact;
- (id)weekAllDayLabelFontRegular;
- (double)weekAllDayOccurrenceHeight;
- (id)weekAllDayTodayLabelFontCompact;
- (id)weekAllDayTodayLabelFontRegular;

@end
