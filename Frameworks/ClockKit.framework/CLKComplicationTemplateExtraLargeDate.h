
@interface CLKComplicationTemplateExtraLargeDate : CLKComplicationTemplate {
    CLKDateTextProvider * _dayTextProvider;
    unsigned long long  _highlightMode;
    CLKDateTextProvider * _weekdayTextProvider;
}

@property (nonatomic, copy) CLKDateTextProvider *dayTextProvider;
@property (nonatomic) unsigned long long highlightMode;
@property (nonatomic, copy) CLKDateTextProvider *weekdayTextProvider;

+ (id)templateWithWeekdayTextProvider:(id)arg1 dayTextProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)dayTextProvider;
- (bool)highlightLine2;
- (unsigned long long)highlightMode;
- (id)initWithWeekdayTextProvider:(id)arg1 dayTextProvider:(id)arg2;
- (void)setDayTextProvider:(id)arg1;
- (void)setHighlightLine2:(bool)arg1;
- (void)setHighlightMode:(unsigned long long)arg1;
- (void)setWeekdayTextProvider:(id)arg1;
- (id)weekdayTextProvider;

@end
