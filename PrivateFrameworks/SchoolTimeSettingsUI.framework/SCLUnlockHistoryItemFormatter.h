
@interface SCLUnlockHistoryItemFormatter : NSFormatter {
    UIColor * _color;
    NSDateComponentsFormatter * _componentsFormatter;
    NSDateFormatter * _dateFormatter;
    UIColor * _highlightColor;
    NSLocale * _locale;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSDateComponentsFormatter *componentsFormatter;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) NSLocale *locale;

- (void).cxx_destruct;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)color;
- (id)componentsFormatter;
- (id)dateFormatter;
- (id)durationStringForHistoryItem:(id)arg1;
- (id)fontDescriptor;
- (id)highlightColor;
- (id)init;
- (id)locale;
- (id)localizedStringWithTimeString:(id)arg1 durationString:(id)arg2;
- (void)setColor:(id)arg1;
- (void)setComponentsFormatter:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setLocale:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)timeStringForHistoryItem:(id)arg1;

@end
