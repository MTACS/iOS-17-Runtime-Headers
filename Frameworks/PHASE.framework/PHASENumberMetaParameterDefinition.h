
@interface PHASENumberMetaParameterDefinition : PHASEMetaParameterDefinition {
    double  _maximum;
    double  _minimum;
}

@property (nonatomic, readonly) double maximum;
@property (nonatomic, readonly) double minimum;
@property (nonatomic, readonly) double rangeMax;
@property (nonatomic, readonly) double rangeMin;

+ (id)new;

- (id)init;
- (id)initWithValue:(double)arg1;
- (id)initWithValue:(double)arg1 identifier:(id)arg2;
- (id)initWithValue:(double)arg1 minimum:(double)arg2 maximum:(double)arg3;
- (id)initWithValue:(double)arg1 minimum:(double)arg2 maximum:(double)arg3 identifier:(id)arg4;
- (id)initWithValue:(double)arg1 rangeMin:(double)arg2 rangeMax:(double)arg3 uid:(id)arg4;
- (id)initWithValue:(double)arg1 uid:(id)arg2;
- (double)maximum;
- (double)minimum;
- (double)rangeMax;
- (double)rangeMin;

@end
