
@interface NWKUIAQISegmentedModel : NWKUIAQIModel {
    UIImage * _glyph;
    NSArray * _segments;
}

@property (readonly) UIImage *glyph;
@property (readonly) NSArray *segments;

- (void).cxx_destruct;
- (id)_createGlyphWithName:(id)arg1;
- (id)glyph;
- (id)initWithAirQualityConditions:(id)arg1;
- (id)initWithName:(id)arg1 label:(id)arg2 categoryDescription:(id)arg3 color:(id)arg4 date:(id)arg5 expiration:(id)arg6 segments:(id)arg7 glyph:(id)arg8;
- (id)segments;

@end
