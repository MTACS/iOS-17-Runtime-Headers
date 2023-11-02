
@interface PHASENumberMetaParameter : PHASEMetaParameter {
    double  _maximum;
    double  _minimum;
}

@property (nonatomic, readonly) double maximum;
@property (nonatomic, readonly) double minimum;

+ (id)new;

- (void)fadeToValue:(double)arg1 duration:(double)arg2;
- (id)init;
- (id)initWithUID:(id)arg1 delegate:(id)arg2;
- (id)initWithUID:(id)arg1 value:(double)arg2 rangeMin:(double)arg3 rangeMax:(double)arg4 delegate:(id)arg5;
- (double)maximum;
- (double)minimum;

@end
