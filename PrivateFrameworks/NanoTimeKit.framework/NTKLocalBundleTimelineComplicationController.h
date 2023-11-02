
@interface NTKLocalBundleTimelineComplicationController : NTKLocalTimelineComplicationController

+ (bool)_acceptsComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (Class)complicationDataSourceClassForComplication:(id)arg1 family:(long long)arg2 device:(id)arg3;
+ (Class)dataSourceFromComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end
