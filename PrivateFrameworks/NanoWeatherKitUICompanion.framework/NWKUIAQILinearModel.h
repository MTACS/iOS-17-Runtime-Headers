
@interface NWKUIAQILinearModel : NWKUIAQIModel {
    NSArray * _colorIndices;
    NSString * _index;
    double  _percentage;
}

@property (readonly) NSArray *colorIndices;
@property (readonly) NSString *index;
@property (readonly) double percentage;

- (void).cxx_destruct;
- (id)colorIndices;
- (id)index;
- (id)initWithAirQualityConditions:(id)arg1;
- (id)initWithName:(id)arg1 label:(id)arg2 categoryDescription:(id)arg3 color:(id)arg4 date:(id)arg5 expiration:(id)arg6 colorIndices:(id)arg7 index:(id)arg8 percentage:(double)arg9;
- (double)percentage;

@end
