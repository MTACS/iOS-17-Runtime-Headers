
@interface NTKComplicationDateFormatter : NSObject

+ (void)_handleLocaleChange:(id)arg1;
+ (void)_handleSignificantTimeChange:(id)arg1;
+ (id)_localizedDayDateFormatter;
+ (id)dateFormatterForStyle:(unsigned long long)arg1;
+ (void)initialize;
+ (id)stringForDate:(id)arg1 withStyle:(unsigned long long)arg2;

@end
