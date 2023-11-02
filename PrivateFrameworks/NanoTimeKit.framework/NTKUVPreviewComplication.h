
@interface NTKUVPreviewComplication : NTKComplication {
    CLKComplicationPreviewTimelineEntry * _entry;
    long long  _family;
}

@property (nonatomic, readonly) CLKComplicationPreviewTimelineEntry *entry;
@property (nonatomic, readonly) long long family;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (id)complicationWithEntry:(id)arg1 forFamily:(long long)arg2;

- (void).cxx_destruct;
- (id)entry;
- (long long)family;
- (id)init;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (bool)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;

@end
