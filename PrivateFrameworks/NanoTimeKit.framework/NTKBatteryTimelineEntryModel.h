
@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel {
    float  _level;
    long long  _state;
}

@property (nonatomic) float level;
@property (nonatomic) long long state;

- (id)_graphicExtraLargeCircularTemplate;
- (id)_levelTintColor;
- (id)_newBatteryTemplateForFamily:(long long)arg1;
- (id)_newUtilitarianLargeTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_ringTextProvider;
- (id)_signatureBezelTemplate;
- (id)_signatureCircularTemplate;
- (id)_signatureCornerTemplate;
- (float)level;
- (void)setLevel:(float)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)templateForComplicationFamily:(long long)arg1;

@end
