
@interface CUIKSemiConstantCache : NSObject {
    double  _dayOccurrenceMinimumCachedLineHeightCompact;
    double  _dayOccurrenceMinimumCachedLineHeightRegular;
    double  _dayOccurrenceMinimumCachedLineHeightSmallCompact;
    double  _dayOccurrenceMinimumCachedLineHeightSmallRegular;
    UIFont * _dayOccurrenceUncompressedSecondaryTextFont;
}

@property (readonly) double dayOccurrenceMinimumCachedLineHeightCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightRegular;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallRegular;
@property (readonly) UIFont *dayOccurrenceUncompressedSecondaryTextFont;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_contentCategorySizeChanged:(id)arg1;
- (id)_dayOccurrenceFontWithStyle:(id)arg1 size:(double)arg2 regularSize:(double)arg3;
- (id)birthdayImageForFont:(id)arg1;
- (id)commentIconStringForFont:(id)arg1;
- (double)dayOccurrenceMinimumCachedLineHeightCompact;
- (double)dayOccurrenceMinimumCachedLineHeightRegular;
- (double)dayOccurrenceMinimumCachedLineHeightSmallCompact;
- (double)dayOccurrenceMinimumCachedLineHeightSmallRegular;
- (id)dayOccurrenceUncompressedSecondaryTextFont;
- (id)init;
- (id)symbolImage:(id)arg1 forFont:(id)arg2;
- (void)updateMetrics;

@end
