
@interface NTKComplicationDataSource : CLKCComplicationDataSource

@property (nonatomic, readonly) NTKComplication *complication;

+ (bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;
+ (Class)dataSourceClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;

- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (id)sampleTemplate;

@end
