
@interface NTKDigitalTimeNoSecondsComplicationDataSource : NTKDigitalTimeComplicationDataSource

+ (bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_templateWithShouldDisplayIdealizeState:(bool)arg1;

@end
