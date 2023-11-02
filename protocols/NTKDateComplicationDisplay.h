
@protocol NTKDateComplicationDisplay <CDComplicationDisplay>

@required

- (void)setDateComplicationText:(NSString *)arg1 withDayRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forDateStyle:(unsigned long long)arg3;

@optional

- (unsigned long long)desiredDateComplicationDateStyle;
- (unsigned long long)overrideDateStyle;

@end
